/**
 * Lab5_cdoss.cpp
 * Christian Doss
 * 2026-10-12
 * A program to generate a multiplication table with input validation
 */

#include<iostream>

using namespace std;


void printInputValidationError();

bool isMaxDigitInputValid(int input);

int getMaxDigitInput();

void printMultiplicationTable(int maxDigit);


/**
 * @brief Entry point of the program.
 * @param None.
 * @return 0 to indicate success.
 * @details Calls getMaxDigitInput() and stores the result, then passes it to printMultiplicationTable().
 */

int main()
{
	int max_digit = getMaxDigitInput();

	printMultiplicationTable(max_digit);

	return 0;
}

/**
 * @brief Outputs an error message for invalid input.
 * @param None.
 * @return None (void).
 */

void printInputValidationError() {
	cout << "Invalid Input" << endl;
	
}

/**
 * @brief Validates the user's input against the acceptable range.
 * @param input The user-provided integer to validate.
 * @return true if the input is greater than 4 and less than 10; false otherwise.
 */

bool isMaxDigitInputValid(int input)
{
	return (input > 4 && input < 10);
}

/**
 * @brief Prompts the user for input and ensures it is valid.
 * @param None.
 * @return A validated int representing the maximum digit.
 */

int getMaxDigitInput() {

	int input = 0;

	cout << "Please enter a maximum digit between 5 and 9 for the mulitplication table" << endl;

	do {

		cout << "Max Digit: ";

		cin >> input;

		if (!isMaxDigitInputValid(input)) {
			printInputValidationError();
		}

	} 
	while (!isMaxDigitInputValid(input));

	return input;
}

/**
 * @brief Prints the formatted multiplication table.
 * @param maxDigit The highest digit to include in the table.
 * @return None (void).
 */

void printMultiplicationTable(int maxDigit) {

	for (int row = 1; row <= maxDigit; ++row) {
		for (int col = 1; col <= maxDigit; ++col) {
			cout << (row * col) << "\t";
		}
		cout << endl;
	}
}