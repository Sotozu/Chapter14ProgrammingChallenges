#pragma once
#include <string>
#include <iostream>

class Month;
std::ostream& operator << (std::ostream&, const Month&);
std::istream& operator >> (std::istream&, Month&);


class Month
{
private:
	std::string month;
	int monthNumber;
	static std::string m_name[12];
	static int m_num[12];
public:

	//Constructs
	Month();
	Month(std::string);
	Month(int);

	//Accessors
	std::string getMonthName();
	int getMonthNum();

	//Static member function
	static bool confirmUserInput(int);
	static bool confirmUserInput(std::string);

	//Operator Overloads

	Month operator++();
	Month operator--();

	Month operator++(int);
	Month operator--(int);

	void operator=(const Month&);

	friend std::ostream& operator<< (std::ostream&, const Month&);
	friend std::istream& operator>> (std::istream&, Month&);

};

