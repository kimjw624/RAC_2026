# RAC_2026

## Procedure

### Clone the repository
```
git clone https://github.com/kimjw624/RAC_2026.git --recursive
```

### Build docker
```
cd \RAC_2026\docker
```

Building the images
```
docker compose build
```

Creating the containers
```
docker compose up -d
```

### Run containers
Once you build the containers, you must run / enter them. We have two docker containers, one for px4_sitl simulation and the other for ros2.

Execute docker containers:
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
