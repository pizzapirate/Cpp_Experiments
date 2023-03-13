#pragma once
#include <iostream>
#include <string>

class FizzBuzz {
	int number = { 1 };
	void FizzBuzzCheck(int num) {
		if ((num % 3 == 0) && (num % 5 == 0)) {
			std::cout << "Fizz! Buzz! " << num << "\n";
		}
		else if (num % 3 == 0) {
			std::cout << "Fizz! " << num << "\n";
		}
		else if (num % 5 == 0) {
			std::cout << "Buzz!" << num << "\n";
		}
		else {
			std::cout << num << "\n";
		}
	}
public : void StartGame() {
		std::cout << "Welcome to FizzBuzz!\n\n";
		std::cout << "To begin playing, press the enter key. Then, keep pressing it to continue!\n";

		while (true) {
			FizzBuzzCheck(number);
			int c = std::getchar();

			number++;
		};
	}
};

