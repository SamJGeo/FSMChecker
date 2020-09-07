# Finite State Machine pattern checker
## Created by *Sam Lever* 

**This program will be used to create a state machine and then check if a string is valid in that machine.**

### Implementation
* Because of a potential cyclic dependency. It was decided that shared pointers would complicate things.
* Instead use a NodeList object which owns unique pointers to all the Nodes. The pointers can be accessed by a Node object which can then in turn be used for traversal
* All object properties are visible in the header files
* An example of a file read in can be seen with *example.txt*


**THIS IS A WORK IN PROGRESS**
