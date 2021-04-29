# CS372ChainOfResponsibility

Code written for CS372 Final Exam

The Idea behind this code is that Customer chooses an ingredient/meal they want from the Cook, which then the Cook handles the food from the list/order that the Customer gave him; which results in the Cook reading the ingredients.

The main file doesn't handle any ingredients (besides initialization and deletion), the Customer calls the Cook Class, which only the Cook Class can access the ingredients.

cook.h contains the Base Handler and its Base Chain Handler
ingredients.h contains Concrete Handlers, and Chain Constructor
main.cpp contains code sent to the Chain Constructor.
