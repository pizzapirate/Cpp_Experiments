#pragma once
#include <iostream>
#include <fstream>
#include <ctime>
std::ofstream output_file{};
std::string ss{}; // Declaring the string that will be built up.
bool loggerStarted{};
void BeginLogger() {
	loggerStarted = true;
	output_file.open("Output.txt", std::ios::app); // append instead of overwrite
	std::time_t current_time = std::time(nullptr);
	char current_time_string[26];
	ctime_s(current_time_string, sizeof(current_time_string), &current_time);
	ss.append("\nBeginning program at: " + std::string(current_time_string));
}
void WriteLine(std::string text) {
	if (!loggerStarted) {
		BeginLogger();
	}
	std::cout << "\n" + text;
	ss.append("\n" + text);
}
void Write(std::string text) {
	std::cout << text;
	ss.append(text);
}
void SaveAndCloseLog() {
	// TIME STAMP + DATE
	// save ss to a local .txt file

	output_file << ss + "\nProgram finished.\n";
	output_file.close();
}

// What this logger does and how to use it:
// 		WriteLine("Your string here"); appends a new line to the string builder. 
//		Write("Your string here"); appens a string to the current line
//		IMPORTANT: At the end of the program using this, SaveAndCloseLog() must be called to append the built up string builder to the .txt file. 
//		If it is not used called, then the string will not be appended to the .txt file. 