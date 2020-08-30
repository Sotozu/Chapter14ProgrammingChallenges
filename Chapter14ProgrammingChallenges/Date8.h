#pragma once
#include <iostream>
#include <string>
class Date8;

std::istream& operator >>(std::istream&, Date8&);

std::ostream& operator << (std::ostream&, const Date8&);

class Date8 {
private:

	int day;
	int month;
	int year;
	static std::string m_name[12];
	static int m_num[12];
	static int numDaysMonth[12];
	//static member function


public:
	//Constructors
	Date8();
	Date8(int, int, int);


	void setDate(int, int, int);
	void dateForm1();
	void dateForm2();
	void dateForm3();
	bool validDay(int);
	bool validMonth(int);

	int getDay();
	int getMonth();
	int getYear();

	//Overloaded -- & ++ Operator
	Date8 operator++();
	Date8 operator--();

	Date8 operator++(int);
	Date8 operator--(int);

	int operator-(Date8);

	//Static Member Functions
	static bool validInput(int, int, int);

	//Overloaded >> & >> Operator

	friend std::istream& operator >> (std::istream&, Date8&);

	friend std::ostream& operator << (std::ostream&, const Date8&);

	//Overloaded = Operator 
	Date8 operator= (const Date8& right);

	//Overload != Operator
	bool operator!= (const Date8& right);

	//Overload <= & >= & > & < & == Operator
	bool operator<(const Date8& right);

	bool operator>(const Date8& right);

	bool operator>=(const Date8& right);

	bool operator<=(const Date8& right);

	bool operator==(const Date8& right);

};


