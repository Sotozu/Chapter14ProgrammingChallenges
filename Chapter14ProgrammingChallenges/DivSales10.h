#pragma once
#include <iostream>
#include <string>
class DivSales10;

std::ostream& operator<< (std::ostream&, const DivSales10&);
std::istream& operator>> (std::istream&, DivSales10&);
class DivSales10
{
private:
	/*------------------------------------------
	divison_sales[0] is NORTH DIVISION
	divison_sales[0] is SOUTH DIVISION
	divison_sales[0] is EAST DIVISION
	divison_sales[0] is WEST DIVISION
	------------------------------------------*/
	double division_sales[4];
	const static std::string quarter[4];
	static double total_sales; //static member

	//Process function

public:

	//Constructors
	DivSales10();
	DivSales10(double, double, double, double);

	//Mutator
	void setSales(double, double, double, double);


	//Accessor
	double getDivQSal(int);

	//Static member functions
	static void totalSales(double);
	static double getTotalSales();
	static void removeQSales(double);

	//Overloaded >> operator
	friend std::ostream& operator<< (std::ostream&, const DivSales10&);
	friend std::istream& operator>> (std::istream&, DivSales10&);

	//Proccess Functions
	bool isInputValid(double);

};






