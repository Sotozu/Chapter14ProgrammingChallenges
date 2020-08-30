#include "DivSales10.h"
#include <string>
//Constructor
DivSales10::DivSales10() {
	division_sales[0] = 0;
	division_sales[1] = 0;
	division_sales[2] = 0;
	division_sales[3] = 0;

	for (int i = 0; i < 4; i++) {
		total_sales += division_sales[i];
	}
}

DivSales10::DivSales10(double n, double s, double e, double w) {
	division_sales[0] = n;
	division_sales[1] = s;
	division_sales[2] = e;
	division_sales[3] = w;

	for (int i = 0; i < 4; i++) {
		total_sales += division_sales[i];
	}
}

//Accessor
double DivSales10::getDivQSal(int index) {
	return division_sales[index];
}



//Mutators

void DivSales10::setSales(double n, double s, double e, double w) {
	for (int i = 0; i < 4; i++) { //first clear the values of this divison from total_sales
		removeQSales(division_sales[i]);
	}

	division_sales[0] = n;
	division_sales[1] = s;
	division_sales[2] = e;
	division_sales[3] = w;

	for (int i = 0; i < 4; i++) { //Add in the new division_sales;
		totalSales(division_sales[i]);
	}
}


//Static member functions
void DivSales10::totalSales(double sales) {
	total_sales += sales;
}

void DivSales10::removeQSales(double sales) {
	total_sales -= sales;
}


double DivSales10::getTotalSales() {
	return total_sales;
}


//Overloaded istream and ostream operators
std::ostream& operator<< (std::ostream& strm, const DivSales10& obj) {
	strm << "--------------REPORT--------------" << std::endl;
	for (int i = 0; i < 4; i++) {
		strm << DivSales10::quarter[i] << " Divison Sales: $"; strm << obj.division_sales[i] << std::endl;
		

	}
	return strm;
}
std::istream& operator>> (std::istream& strm, DivSales10& obj) {
	double div_sal[4];
	for (int i = 0; i < 4; i++) {
		do {
			std::cout << DivSales10::quarter[i] << " Divison Sales: $"; strm >> div_sal[i];
			if (div_sal[i] < 0) {
				std::cout << "ERROR: Please enter a positive value.\n";
			}
		} while (div_sal[i] < 0);
	}
	obj.setSales(div_sal[0], div_sal[1], div_sal[2], div_sal[3]);
	return strm;
}

// Define static private member variable to 0 at the beginning of the program
double DivSales10::total_sales = 0;

const std::string DivSales10::quarter[4] = { "Quarter 1", "Quarter 2", "Quarter 3", "Quarter 4" };


//function for internal processes
bool DivSales10::isInputValid(double sale) {
	if (sale < 0) {
		return false;
	}
	return true;
}
