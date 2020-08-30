#include "Numbers1.h"
#include <string>
#include <vector>

//Default Constructor

Numbers1::Numbers1() {
	number = 0;
	output = "";
}
//Constructor
Numbers1::Numbers1(int n) {
	number = n;
	output = "";
}

bool Numbers1::isValidInput(int n){

		if (number < 0 || number > 9999) {
			std::cout << "ERROR: Please enter a valid number.\n";
			return false;
		}
		return true;
}

//Overloading the << and >> Operators
std::ostream& operator<<(std::ostream& strm, const Numbers1& obj)
{
	strm << obj.output;
	return strm;
}

std::istream& operator>>(std::istream& strm, Numbers1& obj)
{	

	do {

		std::cout << "Number: "; strm >> obj.number;
	} while (obj.isValidInput(obj.number));
	// Prompt the user for the feet. 

	return strm;

}
//


std::string Numbers1::computeTextVersion() {
	std::string completeText = "";
	int num_digits = 0;
	int test_num = number;
	std::vector<int> digits;
	if (number == 0) {
		num_digits = 1;
	}
	else {
		while (test_num != 0) {
			test_num = test_num / 10;
			++num_digits;
		}
	}
	

	std::cout << "Number of digits: "; std::cout << num_digits << std::endl;
	std::string str = std::to_string(number);

	for (int i = 0; i < str.length(); i++) {
		if (str[0] == '0') {
			digits.push_back(0);
		}
		else {
			int dig = str[i] - '0'; //interesting! Found this solution online
			digits.push_back(dig);
		}
		
	}
	//Digit Amounts
	switch (num_digits) {
	case 1: // 0 - 9
		completeText += singleDigits(digits[0]);
		break;
	case 2: // 10 - 99
		if (digits[0] >= 2) { // 20 - 99
			for (int i = 2; i < 10; i++) {
				if (digits[0] == i) {
					completeText += tens_place[i - 2] + " ";
				}
			}
			if (digits[1] > 0) {

				completeText += singleDigits(digits[1]);
			}
		}
		else if (digits[0] == 1) { // 10 - 19
			for (int i = 0; i < 10; i++) {
				if (digits[1] == i) {
					completeText += less_than_twenty[i + 10];
				}
			}
		}
		else if (digits[0] == 0) {// 0 - 9
			completeText += singleDigits(digits[1]);
		}
		break;
	case 3: // 100 - 999
		if (digits[0] > 0) {
			completeText += singleDigits(digits[0]);
			completeText += " hundred ";
		}

		if (digits[1] >= 2) { // 20 - 99
			for (int i = 2; i < 10; i++) {
				if (digits[1] == i) {
					completeText += tens_place[i - 2] + " ";
				}
			}
			if (digits[2] > 0) {

				completeText += singleDigits(digits[2]);
			}
		}
		else if (digits[1] == 1) { // 10 - 19
			for (int i = 0; i < 10; i++) {
				if (digits[2] == i) {
					completeText += less_than_twenty[i + 10];
				}
			}
		}
		else if (digits[1] == 0) {// 0 - 9
			completeText += singleDigits(digits[2]);
		}
		break;
	case 4: //1000 -9999
		if (digits[0] > 0) {

			completeText += singleDigits(digits[0]);
			completeText += " thousand ";
		}

		if (digits[1] > 0) {
			completeText += singleDigits(digits[1]);
			completeText += " hundred ";
		}

		if (digits[2] >= 2) { // 20 - 99
			for (int i = 2; i < 10; i++) {
				if (digits[2] == i) {
					completeText += tens_place[i - 2] + " ";
				}
			}
			if (digits[3] > 0) {

				completeText += singleDigits(digits[3]);
			}
		}
		else if (digits[2] == 1) { // 10 - 19
			for (int i = 0; i < 10; i++) {
				if (digits[3] == i) {
					completeText +=  less_than_twenty[i+10];
				}
			}
		}
		else if (digits[2] == 0) {// 0 - 9
			completeText += singleDigits(digits[3]);
		}

	default:
		break;
	}
	return completeText;
}

//internal processing
std::string Numbers1::singleDigits(int i) {
	if (i == 0) {
		return less_than_twenty[0];
	}
	else if (i == 1) {
		return less_than_twenty[1];
	}
	else if (i == 2) {
		return less_than_twenty[2];
	}
	else if (i == 3) {
		return less_than_twenty[3];
	}
	else if (i == 4) {
		return less_than_twenty[4];
	}
	else if (i == 5) {
		return less_than_twenty[5];
	}
	else if (i == 6) {
		return less_than_twenty[6];
	}
	else if (i == 7) {
		return less_than_twenty[7];
	}
	else if (i == 8) {
		return less_than_twenty[8];
	}
	else if (i == 9) {
		return less_than_twenty[9];
	}

}
	
