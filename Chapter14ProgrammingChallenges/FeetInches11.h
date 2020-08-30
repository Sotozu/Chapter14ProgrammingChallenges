#pragma once
class FeetInches11
{
private:
	int feet;// To hold a number of feet
	int inches;// To hold a number of inches
	void simplify();// Defined in FeetInches11.cpp
public:
	// Constructor 
	FeetInches11(int f = 0, int i = 0)
	{
		feet = f;
		inches = i;
		simplify();
	}

	//Copy Constructor
	FeetInches11(const FeetInches11&);


	// Mutator functions
	void setFeet(int f)
	{
		feet = f;
	}
	//NOTE:Some of the operators in T able   14 - 1    are beyond the scope of this book and are not covered.
	void setInches(int i)
	{
		inches = i;
		simplify();
	}
	// Accessor functions
	int getFeet() const
	{
		return feet;
	}
	int getInches() const
	{
		return inches;
	}
	// Overloaded operator functions 
	FeetInches11 operator + (const FeetInches11&); // Overloaded +
	FeetInches11 operator - (const FeetInches11&); // Overloaded -
	FeetInches11 operator * (const FeetInches11& right);
	void operator = (const FeetInches11& right);
	bool operator<=(const FeetInches11& right);
	bool operator>=(const FeetInches11& right);
	bool operator!=(const FeetInches11& right);
	bool operator==(const FeetInches11& right);

};



