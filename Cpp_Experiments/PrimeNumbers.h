#pragma once
#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
class PrimeNumberProgram {
private : std::vector<int> primeNumbers{};
public : void Begin() {
	primeNumbers.push_back(2);

	int primeNumIndex = { getUserInput() };

	if (primeNumbers.size() < primeNumIndex) {
		primeNumberGen(primeNumIndex);
		std::cout << "\nThe prime number you have asked to generate is: " << primeNumbers[primeNumIndex-1];
	}
	else {
		std::cout << "\nThe prime number you have asked to generate is: " << primeNumbers[primeNumIndex-1];
	}

	}
private: int getUserInput() {
	int primeNumberToPrint{};
	std::cout << "Please state the prime number you wish to generate:\n";
	std::cin >> primeNumberToPrint;
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore invalid input
	if (primeNumberToPrint <= 0) {
		while (true) {
			std::cout << "That is not a valid prime number to generate. Please try again:\n";
			std::cin >> primeNumberToPrint;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore invalid input
			if (primeNumberToPrint > 0) {
				break;
			}
		}
	}
	return primeNumberToPrint;
}
private: void primeNumberGen(int index) {
	int i = primeNumbers.back() + 1;

	while (true) {
		if (isNumberPrime(i)) {
			primeNumbers.push_back(i);
		}
		if (primeNumbers.size() == index) {
			break;
		}
		i++;
	}
}
private: bool isNumberPrime(int num){
	for (int i = 2; i <= sqrt(num); i++) {
		if ((num % i) == 0) return false;
	}
	return true;
}

};


