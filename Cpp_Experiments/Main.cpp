#include <iostream>
#include <chrono>
#include <thread>
#include "MyConsoleLogger.h"
#include "PrimeNumbers.h"
#include "RandomNumberGenerator.h"
#include "FoodConstants.h"
#include "PizzaPolymorphism.h"
int main() {
	

	Margherita marg{};

	marg.Name();
	marg.Ingredients();

	//extern std::string poptarts;
	//std::cout << poptarts;
	
	//PrimeNumberProgram png;
	//png.Begin();
	//while (true) {
	//	randomInt();
	//	std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::seconds(1));
	//}

	return 0;
}