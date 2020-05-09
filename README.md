# Obstacle Avoidance
Obstacle Avoidance Robot

Done Under the course:  
Course Code: MIE 452  
Department : Mechatronics and Industrial Engineering  
Course Name: Robotics Sessional  
Chittagong University of Engineering and Technology

Project Members: 15090(01, 02, 04, 05, 06, 07, 08, 09, 10)

## Briefing:
In this project, a 3 wheeled robot is made. It uses 2 pair of IR sensor in the front side for detecting obstacle.
The rear wheel is powered by 2 gear motors. The processing unit is a Arduino Uno. Power is provided by LiPo battery.

## Parts list:
- Arduino Uno   (1)
- 3D Printed Chassis (1)
- Gear Motor    (2)
- Wheel         (2)
- Castor ball   (1)
- Motor Driver  (1)
- LiPo Battery  (1)


## Working Logic
In a loop, everytime the two IR sensor is checked and the wheels are activated accordingly. If both side sensors detect obstacle, then the robot turns right.

## Considerations / Limitations
The range of IR sensor is very short usuall about 2-10 cm. But it depends highly on the light in the evironment. Also obstacle surface angle and reflectivity is crucial for correctly detecting reflected IR light. So IR is not a very good option for fast moving bots. By slowing down the wheel speed, better result can be achieved.  
Sunlight can make some confusion as it also contains IR range light. So dark environment might be useful.  
Ultrasound sonar sensor is useful in these scenarios.

# TODO:
- add speed control
- add sonar options
