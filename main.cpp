/*

Aeriel Denmark
CS 210 - Programming Languages
Pollack - Project #1
*due Sun 11/13/2022*

3-1 Project

*/

// This file will display the time in both 12-hour and 24-hour format

# include <cstdlib>
# include<ctime>
# include<Windows.h>
# include "clock.h"

// Function prototypes

void display(Clock clock);
int menu();

int main() {

    // Clear screen

    system("CLS");

    // Display the current time

    time_t now = time(0);

    // Get hours, minutes, and seconds

    struct tm timeSplitter;
    timeSplitter = *localtime(&now);

    //Create object

    Clock clock(timeSplitter.tm_hour, timeSplitter.tm_min, timeSplitter.tm_sec);

    //Display formatted time

    display(clock);

    //Sleep and clear screen

    Sleep(1000);
    system("CLS");

    //Display menu

    int opt = menu();

    //Loop until exit

    while (opt != 4) {

        //Each option

        if (opt == 1) {

            clock.incrementHours();
            display(clock);

        }

        else if (opt == 2) {

            clock.incrementMinutes();
            display(clock);

        }

        else if (opt == 3) {

            clock.incrementSeconds();
            display(clock);

        }

        // Sleep and clear after 1 second

        Sleep(1000);
        system("CLS");
        opt = menu();

    }

    return 0;

}

// Create a function to display the time in a 12-hour format

void display(Clock clock) {

    cout << "****************************** ******************************\n"
        << " * 12 - Hour Clock * * 24 - Hour Clock *\n"
        << " * ";

    clock.display12format();
    cout << " * * ";
    clock.display24format();

    cout << " *\n"
        << " ***************************** ******************************\n";

}

// Display user options and a return menu

int menu() {

    int opt;

    cout << "\n******************************\n"
        << "* 1 - Add One Hour *\n"
        << "* 2 - Add One Minute *\n"
        << "* 3 - Add One Second *\n"
        << "* 4 - Exit Program *\n"
        << "******************************\n";

    cin >> opt;

    return opt;
}