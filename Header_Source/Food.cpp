#include <iostream>
#include "Food.h"

const char* RecommendMeAFood(char firstLetter) {
	if (firstLetter == 'A' || firstLetter == 'a')
		return "apple";
	else if (firstLetter == 'B' || firstLetter == 'b')
		return "Banana";
	else if (firstLetter == 'C' || firstLetter == 'c')
		return "Cake";
	else
		return "pizza";
}

void GetPizzaRecipe() {
	std::cout << "Here is the pizza recipe....";
}