# Fan Simulation in FSM
## Brief Description
This code is a simulation of a fan's dial with 4 states which are off, speed 1, speed 2, and speed 3. Due to the nature of a dial the states can move back and forth. For example speed off can only go to speed 1 or speed 3 but cannot go to speed 2.
## Finite State Machine Graph
![FSM](img/Ex.png)
The graphs shows the 4 states and how they move from one another, with buttons -> being forward, and <- being backwards. The state also dont change when any button is pressed.
## K-Map Truth Table
![map](img/map.png)
## K-Map Boolen Expressions
![bool](img/algebra.png)
## Output
### State 1
![1](img/default.png)
### State 2
![2](img/1.png)
### State 3
![3](img/2.png)
### State 4
![4](img/3.png)
