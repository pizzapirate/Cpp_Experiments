#pragma once
#include <iostream>
#include <ctime>
#pragma warning(disable: 4996)
// Generates a *random* integer between the specified min and max ints. 
int randomInt() {
	time_t t = time(NULL);
	tm* tptr = localtime(&t); // a tm pointer of t

	int pseuRandInt;

	pseuRandInt = {
		( (tptr->tm_sec * tptr->tm_min) + (tptr->tm_sec * tptr->tm_hour) + 
		(tptr->tm_hour / tptr->tm_sec) + (tptr->tm_min / tptr->tm_sec) ) / 
		tptr->tm_sec + (tptr->tm_sec * tptr->tm_sec) - 
		(tptr->tm_hour * tptr->tm_hour)
	};


	std::cout << pseuRandInt << "\n";
	return pseuRandInt;
}