# RAC_2026

## Procedure

### Clone the repository
```
git clone https://github.com/kimjw624/RAC_2026.git --recursive
```

### Build docker
First, you need to move to the directory with the docker-related files.
```
cd \RAC_2026\docker
```

Build the images using the docker compose file.
```
docker compose build
```

Create containers.
```
docker compose up -d
```

### Run containers
- Once you build the containers, you must run / enter them. We have two docker containers, one for px4_sitl simulation and the other for ros2.
- The px4_sim container is used to run the sitl simulation. Thus, you should run commands like make px4_sitl gz_x500, etc. There are already aliases made (gazebo, dds, etc) for convenience. However, the command gazebo must be run after clong the PX4_Autopilot and following the instructions. Look at the next section for more details.
- The ros2 container is used to run ros2 nodes.

Execute docker containers using the commands below (note that these commands must also be made in the \RAC_2026\docker directory, since related files are also in that directory):
```
./exec_px4_sim.sh
```

```
./exec_ros2.sh
```

### Clone PX4_Autopilot
To run simulations, you must clone the PX4_Autopilot repository into the /RAC_2026/docker directory. Follow the instructions in the website below.
- https://github.com/kimjw624/PX4-Autopilot

### Common docker commands (for reference)
- The docker type we are using is the compose type, where we use a compose file for mutiple docker iamges at once.

- Therefore, all "docker compose ..." commands must be done in the repository where the compose.yml file is present.

- In other words, when you run commands such as "docker compose start", you must be inside the directory shown below.
```
cd \RAC_2026\docker
```

- Stop docker containers:
```
docker compose stop
```

- Start containers:
```
docker compose start
```

- Check docker containers or images:
```
docker ps
```
```
docker images
```

### Running simulations
- Refer to the notion's simulation page. The preceding procedure must all be completed in order to successfully run the simulation.
