#pragma once
#ifndef COOK_H
#define COOK_H
#include <string>
#include <iostream>

// Base Class Cook, works as the Handler
class Cook
{
public:
	virtual Cook *NextCook(Cook *cook) = 0;
	virtual std::string Dish(std::string order) = 0;
};

// Base Class - Chaining Behavior

class PassCook : public Cook
{
public:
	PassCook() : next_cook_(nullptr) {}

	Cook *NextCook(Cook *cook) override {
		this->next_cook_ = cook;
		return cook;
	}
	std::string Dish(std::string order) override {
		if (this->next_cook_) {
			return this->next_cook_->Dish(order);
		}
		return {};
	}
private:
	Cook *next_cook_;
};

#endif

