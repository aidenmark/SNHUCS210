/*

Aeriel Denmark
CS 210 - Programming Languages
Pollack - Project #1
*due Sun 11/13/2022*

3-1 Project 

*/

// This file will be the header file for the clock.cpp and main.cpp files


# include <iostream>
using namespace std;

// Create a class to represent the time

class Clock {

	// member variables
	
	private:
		int hours;
		int minutes;
		int seconds;
	
	// member functions

	public:
		Clock();

		Clock(int hrs, int mins, int secs);

		// accessor methods

		int getHours();
		int getMinutes();
		int getSeconds();

		void setHours(int hrs);
		void setMinutes(int mins);
		void setSeconds(int secs);

		void display12format();
		void display24format();

		void incrementHours();
		void incrementMinutes();
		void incrementSeconds();

};