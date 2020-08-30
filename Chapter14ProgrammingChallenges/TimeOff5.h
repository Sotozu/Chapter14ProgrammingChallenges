#pragma once
#include "Numdays4.h"
# include <string>
class TimeOff5
{
private:
	static Numdays4 maxVacation, maxUnpaid, maxSickDays;

	Numdays4 vacTaken, unpaidTaken, sickTaken;

	std::string name;
	int identification_num;

	bool isMaxVacation(int); //will return true if the max vacation amount of 240 hours has been reached.
	bool isMaxUnpaid(int); //will return true if the max vacation amount of 240 hours has been reached.
	bool isMaxSick(int); //will return true if the max vacation amount of 240 hours has been reached.

	void setUnpaid(double i);


public:

	//Constructor
	TimeOff5();

	TimeOff5(std::string, int);

	//Accessor
	std::string getName();
	int getID();

	double getVacWorkDays();
	int getVacWorkHours();

	double getUnpVacWorkDays();
	int getUnpVacWorkHours();

	double getSickWorkDays();
	int getSickWorkHours();
	//Mutator
	//void setMaxVacation();
	//void setMaxUnpaid();
	//void setMaxSickDays();


	void setVacation(double);
	void setSickDays(double i);


};

