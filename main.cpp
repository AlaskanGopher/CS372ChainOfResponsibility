#include "cook.h"
#include "ingredient.h"

int main()
{
	Spaghetti* spaghetti = new Spaghetti;
	Salad* salad = new Salad;
	Burger* burger = new Burger;
	Steak* steak = new Steak;
	spaghetti->NextCook(salad)->NextCook(burger)->NextCook(steak);

	// Chain: Spaghetti -> Salad -> Burger -> Steak
	// Customers only want Spaghetti, Salad, Burgers, and Steak
	std::cout << "Menu: Spaghetti, Grilled Chicken, Salad, Burger, Steak, Pizza\n\n";
	Customer(*spaghetti);
	std::cout << std::endl;
	// Chain: Burger -> Steak
	// Customers only want Burger and Steak
	std::cout << "Menu: Spaghetti, Grilled Chicken, Salad, Burger, Steak, Pizza\n\n";
	Customer(*burger);
	
	delete spaghetti;
	delete salad;
	delete burger;
	delete steak;

	return 0;
}