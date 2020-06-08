# CS 100 Programming Project
## Project Proposal
### Group Members
Elbert Nguyen, enguy054@ucr.edu  
Franz Ignacio, figna002@ucr.edu  
Ken Lee, klee229@ucr.edu  
### Project title
SimpleCalc will be the title of our project.
### What application do you plan to work on?
Our team is working on a calculator framework. Other developers can take this basic framework and enhance on its functionality to be able to implement it in their own projects.
### Why is it important and interesting?
Code portability is a key fundamental in software development. We want to demonstrate the importance of this fundamental by creating a framework that other developers can implement into their own project and enhance its functionality. 
### What language/tools/technology do you plan on using?
We will be coding this calculator in C++.
### Input/output of the project?
- Input: Two numbers and a choice of computation (addition/subtraction/division/multiplicaton)
- Output: The result from the computation
## Design Patterns
### Decorator Pattern
![Decorator Pattern](https://github.com/cs100/final-project-elbert-ken-franz/blob/master/class_diagrams/DecoratorPatternFinalProject.jpg)
This Pattern is optimized for adding additional functionality to our existing calculator. 
Our existing calculator is able to perform standard operations on user provided operands. 
Using a getEvaluate() function, we are able to get the result. 
With an abstract AdditionalFeatures component, we are able to add conversions into the mix. 
We can convert the answer into Radians or convert the answer into Degrees.
### Strategy Pattern
![Strategy Pattern](https://github.com/cs100/final-project-elbert-ken-franz/blob/master/class_diagrams/StrategyPatternFinalProject.jpg)
This pattern is created to get the very basic objects and algorithms for our existing calculator working.
Our existing calculator after implementing the strategy pattern will be able to do the following functions:
Multiply, Divide, Add, Subtract, Power, and Modulo. 
Alongside that, we will have an abstract evaluate component so that we can implement more functions if needed.
### Factory Pattern
![Factory Pattern](https://github.com/cs100/final-project-elbert-ken-franz/blob/master/class_diagrams/Factory-Pattern-UML.jpg)
The factory pattern diagram (above) demonstrates the final expected functionality of our application.
Once the application loads up, it begins to take input from user.
Function getInput() checks the inputs from user to determine if it's valid, and performs numerous checks from there to call and calculate.
The display() function outputs the equation user inputs, then outputs answer.
