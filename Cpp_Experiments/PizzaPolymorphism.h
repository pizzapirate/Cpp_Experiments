#pragma once
#include <iostream>

class Pizza {
public : void Name() {
	std::cout << "A plain pizza.";
}
public : void Ingredients() {
	std::cout << "Dough, Pizza Sauce, Mozza.\n";
	}
};

class Pepperoni : public Pizza {
public: void Name() {
	std::cout << "A pepperoni pizza.";
}
public: void Ingredients() {
	std::cout << "Dough, Pizza Sauce, Mozza, Pepperoni.\n";
}
};

class Margherita : public Pizza {
public : void Name() {
	std::cout << "A margherita pizza.";
}
	   // Margherita does not need a seperate ingredients class, as it is the same as base pizza. 
	   // Therefore, it inherits the Pizza::Ingredients() function as it is public. 
};