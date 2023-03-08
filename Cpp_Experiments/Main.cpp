#include <iostream>
#include <chrono>
#include <thread>
#include "MyConsoleLogger.h"
#include "PrimeNumbers.h"
#include "RandomNumberGenerator.h"
int main() {
	//PrimeNumberProgram png;
	//png.Begin();
	while (true) {
		randomInt();
		std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::seconds(1));
	}

	return 0;
}