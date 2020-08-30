// Implementation file for the FeetInches9 class 
#include <cstdlib>  // Needed for abs() 
#include "FeetInches9.h"

//************************************************************** 
// Definition of member function simplify. This function * 
// checks for values in the inches member greater than  * 
// twelve or less than zero. If such a value is found,  * 
// the numbers in feet and inches are adjusted to conform  * 
// to a standard feet & inches expression. For example,  * 
// 3 feet 14 inches would be adjusted to 4 feet 2 inches and  * 
// 5 feet -2 inches would be adjusted to 4 feet 10 inches.  * 
//************************************************************** 

void FeetInches9::simplify()
{
if (inches >= 12)
{
feet += (inches / 12);
inches = inches % 12;
}
else if (inches < 0)
{
feet -= ((abs(inches) / 12) + 1);
inches = 12 -(abs(inches) % 12);
}
}
//********************************************** 
// Overloaded binary + operator.             * 
//**********************************************

FeetInches9 FeetInches9::operator + (const FeetInches9 & right)
{
FeetInches9 temp;
temp.inches = inches + right.inches;
temp.feet = feet + right.feet;
temp.simplify();
return temp;
}
//********************************************** 
// Overloaded binary - operator.             * 
//********************************************** 
FeetInches9 FeetInches9::operator - (const FeetInches9 & right)
{
FeetInches9 temp;
temp.inches = inches - right.inches;
temp.feet = feet - right.feet;
temp.simplify();
return temp;
}

//********************************************** 
// Overloaded binary <= operator.             * 
//********************************************** 
bool FeetInches9::operator<=(const FeetInches9& right) {
	bool status;
	if (inches == right.inches && feet == right.feet) {
		status = true;
	}
	else if (feet <= right.feet && inches < right.inches) {
		status = true;
	}
	else {
		status = false;
	}
	return status;
}

//********************************************** 
// Overloaded binary >= operator.             * 
//********************************************** 
bool FeetInches9::operator>=(const FeetInches9& right) {
	bool status;
	if (inches == right.inches && feet == right.feet) {
		status = true;
	}
	else if (feet >= right.feet && inches > right.inches) {
		status = true;
	}
	else {
		status = false;
	}
	return status;
}

//********************************************** 
// Overloaded binary != operator.             * 
//********************************************** 

bool FeetInches9::operator!=(const FeetInches9& right) {
	bool status;

	if (feet != right.feet || inches != right.inches) {
		status = true;
	}
	else {
		status = false;
	}
	return status;
}

//********************************************** 
// Overloaded binary == operator.             * 
//********************************************** 

bool FeetInches9::operator==(const FeetInches9& right) {
	bool status;

	if (feet == right.feet && inches == right.inches) {
		status = true;
	}
	else {
		status = false;
	}
	return status;
}
