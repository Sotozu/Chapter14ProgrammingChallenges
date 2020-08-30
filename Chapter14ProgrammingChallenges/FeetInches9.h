#pragma once
class FeetInches9
{
private:
	int feet;// To hold a number of feet
	int inches;// To hold a number of inches
	void simplify();// Defined in FeetInches9.cpp
public:
	// Constructor 
	FeetInches9(int f = 0, int i = 0)
	{ feet = f;
	inches = i;
	simplify(); }
	// Mutator functions
	void setFeet(int f)
	{ feet = f; }
	//NOTE:Some of the operators in T able   14 - 1    are beyond the scope of this book and are not covered.
	void setInches(int i)
	{ inches = i;
	simplify(); }
	// Accessor functions
	int getFeet() const
	{ return feet; }
	int getInches() const
	{ return inches; }
	// Overloaded operator functions 
	FeetInches9 operator + (const FeetInches9&); // Overloaded +
	FeetInches9 operator - (const FeetInches9&); // Overloaded -
	bool operator<=(const FeetInches9& right);
	bool operator>=(const FeetInches9& right);
	bool operator!=(const FeetInches9& right);
	bool operator==(const FeetInches9& right);

};



