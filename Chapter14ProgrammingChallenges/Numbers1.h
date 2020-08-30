#pragma once
#include <string>
#include <iostream>
class Numbers1;

std::ostream& operator<< (std::ostream&, const Numbers1&);
std::istream& operator>> (std::istream&, Numbers1&);
class Numbers1
{
private:
	int number;
	const std::string less_than_twenty[20] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", 
											  "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" }; // 1 - 20
	const std::string tens_place[8] = { "twenty","thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety" }; //20 - 90
	const std::string hundred = "hundred";
	const std::string thousands = "thousand";

	std::string output;

	std::string singleDigits(int);

public:
	//Constructor
	Numbers1();
	Numbers1(int);

	//Friends
	friend std::ostream& operator<< (std::ostream&, const Numbers1&);
	friend std::istream& operator>> (std::istream&, Numbers1&);

	//Other Functions
	bool isValidInput(int);

	std::string computeTextVersion();

};

