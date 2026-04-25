import rclpy
import numpy as np
from enum import Enum, auto
from .core.mission_controller import MissionController

class TakeoffState(Enum):
    INIT = "INIT"
    ARM = "ARM"
    OFFBOARD = "OFFBOARD"
    TAKEOFF = "TAKEOFF"
    HOVER = "HOVER"
    LAND = "LAND"
    COMPLETE = "COMPLETE"

class TakeoffMission(MissionController):

    def __init__(self, node_name: str) -> None:
        super().__init__(node_name,
                         1.0, 0.5,
                         0.15,
                         5.0, 2.0)
    
    def define_states(self) -> type[Enum]:
        return TakeoffState
    
    def define_state_handlers(self) -> dict:
        """
        - Assigns the method to be executed for each state
        - handler = self.state_handlers.get(self.current_state) 메써드 선택하고 -> handler() 이런식으로 실행됨
        """
        return{
            TakeoffState.INIT: self.handle_init,
            TakeoffState.ARM: self.handle_arm,
            TakeoffState.TAKEOFF: self.handle_takeoff,
            TakeoffState.OFFBOARD: self.handle_offboard,
            TakeoffState.HOVER: self.handle_hover,
            TakeoffState.LAND: self.handle_land,
            TakeoffState.COMPLETE: self.handle_complete
        }
    
    def initialize_mission(self) -> None:
        # When needed, initilize special parameters required for the mission.
        # For this simple mission, nothing needed.
        return


    def handle_init(self) -> None:
        if self.is_initialized():
            self.transition_to(TakeoffState.ARM)


    def handle_arm(self) -> None:

        if not self.is_armed():
            self.arm()
            return
        else:
            self.transition_to(TakeoffState.TAKEOFF)
    

    def handle_takeoff(self) -> None:
        
        if self.takeoff(10.0):
            self.transition_to(TakeoffState.OFFBOARD)

    
    def handle_offboard(self) -> None:

        if not self.is_offboard_mode():
            self.set_offboard_mode()
            return
        else:
            self.get_logger().info(f"Entering HOVER at pos: {self.pos}")
            self.transition_to(TakeoffState.HOVER)
    

    def handle_hover(self) -> None:

        if self.hover():
            self.transition_to(TakeoffState.LAND)
    

    def handle_land(self) -> None:
        self.land()
        if self.is_disarmed():
            self.transition_to(TakeoffState.COMPLETE)
    
    
    def handle_complete(self) -> None:
        pass


def main(args = None):
    rclpy.init(args=args)
    mission = TakeoffMission("Takeoff_Mission")

    try:
        rclpy.spin(mission)
    except KeyboardInterrupt:
        mission.get_logger().info("Interrupted")
    finally:
        mission.destroy_node()
        rclpy.shutdown()

if __name__ == "__main__":
    main()