# Fan Simulation in FSM
## Brief Description
This code is a simulation of a fan's dial with 4 states which are off, speed 1, speed 2, and speed 3. Due to the nature of a dial the states can move back and forth. For example speed off can only go to speed 1 or speed 3 but cannot go to speed 2.
## Finite State Machine Graph
![FSM](img/Ex.png)

The graphs shows the 4 states and how they move from one another, with buttons -> being forward, and <- being backwards. Each state also has a corresponding number attached to it being 00 for off, 01 for speed 1, 10 for speed 2, and 11 for speed 3. Each state has the same output value as the attached state numbers.
## K-Map Truth Table
![map](img/map.png)

With all the values from the FSM graph it is able to be converted to a truth table using each current state, input, next state, and output. current state and ouputs have the same value while inputs and next state depends on the graph from before with it we can determined all the values some values are d values as they dont appear in the finite state graph from before.
## K-Map Boolen Expressions
![bool](img/algebra.png)

After working out the truth table from before we can create boolen expressions for the next state and the outputs based on the current state and inputs for each column. which resolted in the upper 4 tables. With 1 and 0 values based on the inputs and current state of each. We then make the boolen expressions for each table which resulted in these equations :

S0 = X1'X2'X3' + X1X2X3' + X1'X2X3 + X1X2'X3

S1 = X2'

O0 = X1

O1 = X2

with ' being a negation value, X1 and X2 for the current state values, and X3 for the input.
## Output
In the C inplementation it uses one input which can be 0 and 1 with 0 being backwards and 1 being forward. afterwards it will move to the next state or the before state. to understand further these images will be of use.
### State 1
![1](img/default.png)
### State 2
![2](img/1.png)
### State 3
![3](img/2.png)
### State 4
![4](img/3.png)
