#pragma once
#ifndef INGREDIENT_H
#define INGREDIENT_H

#include "cook.h"

// Ingredients, which work as Concrete Handlers, which pass to the next Handler in the chain if it doesn't handle the order.

// Spaghetti Concrete Handler
class Spaghetti : public PassCook {
public:
	std::string Dish(std::string order) override {
		if (order == "Spaghetti") {
			return "I want " + order + ".\n";
		}
		else {
			return PassCook::Dish(order);
		}
	}
};

// Salad Concrete Handler
class Salad : public PassCook
{
public:
	std::string Dish(std::string order) override {
		if (order == "Salad") {
			return "I want a " + order + ".\n";
		}
		else {
			return PassCook::Dish(order);
		}
	}
};

// Burger Concrete Handler
class Burger : public PassCook
{
public:
	std::string Dish(std::string order) override {
		if (order == "Burger") {
			return "I want a " + order + ".\n";
		}
		else {
			return PassCook::Dish(order);
		}
	}
};

// Steak Concrete Handler
class Steak : public PassCook
{
public:
	std::string Dish(std::string order) override {
		if (order == "Steak") {
			return "I want " + order + ".\n";
		}
		else {
			return PassCook::Dish(order);
		}
	}
};

// Constructs the chain of ingredients wanted.
void Customer(Cook& cook) {

	std::string ingredients[6] = { "Spaghetti", "Grilled Chicken", "Salad", "Burger", "Steak", "Pizza"};
	for (const std::string& i : ingredients) {
		std::cout << "Does anyone want " << i << std::endl;
		const std::string response = cook.Dish(i);
		if (!response.empty()) {
			std::cout << "\t" << response;
		}
		else
		{
			std::cout << "\tNobody wants " << i << std::endl;
		}
	}
}

#endif