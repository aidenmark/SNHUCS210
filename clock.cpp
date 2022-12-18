/*

Aeriel Denmark
CS 210 - Programming Languages
Pollack - Project #1
*due Sun 11/13/2022*

3-1 Project

*/

// This file will create the two different clocks to be displayed


# include <iostream>
using namespace std;

# include "clock.h"

Clock::Clock() {

    hours = 0;
    minutes = 0;
    seconds = 0;

}

Clock::Clock(int hrs, int mnins, int secs) {

    setHours(hrs);
    setMinutes(mins);
    setSeconds(secs);

}

// Setters

void Clock::setHours(int hrs) {

    if (hrs > 23) {

        hours = 0;

    }

    else {

        hours = hrs;

    }

}

void Clock::setMinutes(int mins) {

    if (mins > 59) {

        minutes = mins;
        seconds = +1;

        if (hours > 23) {

            hours = 0;

        }

        if (minutes > 59) {

            hours = +1;
            minutes = minutes - 60;

        }

        if (seconds > 59) {

            seconds = seconds - 60;
            minutes = +1;

        }

    }

    else {

        minutes = mins;

    }

}

void Clock::setSeconds(int secs) {

    if (secs > 59) {

        seconds = secs - 60;
        minutes += 1;

        if (hours > 23) {

            hours = 0;

        }

        if (minutes > 59) {

            hours = +1;
            minutes = minutes - 60;

        }

    }

    else {

        seconds = secs;

    }

}

// Getters

int Clock::getHours() {

    return hours;

}

int Clock::getMinutes() {

    return minutes;

}

int Clock::getSeconds() {

    return seconds;

}

// Display 12-hour format clock

void Clock::display12format() {

    if (hours > 12) {

        hours = hours - 12;

        if (hours < 10) || (minutes < 10) || (seconds < 10) {

            if (hours < 10) {

                cout << "0" << hours;

            }

            else {

                cout << hours;

            }

            if (minutes < 10) {

                cout << ":0" << minutes;

            }

            else {

                cout << ":" << minutes;

            }

            if (seconds < 10) {

                cout << ":0" << seconds;

            }

            else {

                cout << ":" << seconds;

            }

        }

        else {

            cout << hours << ":" << minutes << ":" << seconds;

        }

    }

    else if (hours == 12) {

        hours = 12;

        if (hours < 10) || (minutes < 10) || (seconds < 10) {

            if (hours < 10) {

                cout << "0" << hours;

            }

            else {

                cout << hours;

            }

            if (minutes < 10) {

                cout << ":0" << minutes;

            }

            else {

                cout << ":" << minutes;

            }

            if (seconds < 10) {

                cout << ":0" << seconds;

            }

            else {

                cout << ":" << seconds;

            }

        }

        else {

            cout << hours << ":" << minutes << ":" << seconds;

        }

    }

    else if (hours == 0) {

        hours = 12;

        if (hours < 10) || (minutes < 10) || (seconds < 10) {

            if (hours < 10) {

                cout << "0" << hours;

            }

            else {

                cout << hours;

            }

            if (minutes < 10) {

                cout << ":0" << minutes;

            }

            else {

                cout << ":" << minutes;

            }

            if (seconds < 10) {

                cout << ":0" << seconds;

            }

            else {

                cout << ":" << seconds;

            }

        }

        else {

            cout << hours << ":" << minutes << ":" << seconds;

        }

    }

    else {

        if (hours < 10) || (minutes < 10) || (seconds < 10) {

            if (hours < 10) {

                cout << "0" << hours;

            }

            else {

                cout << hours;

            }

            if (minutes < 10) {

                cout << ":0" << minutes;

            }

            else {

                cout << ":" << minutes;

            }

            if (seconds < 10) {
                cout << ":0" << seconds;

            }

            else {

                cout << ":" << seconds;

            }

        }

        else {

            cout << hours << ":" << minutes << ":" << seconds;

        }

    }

    //Display 24 format

    void Clock::display24format() {

        if (hours < 10) || (minutes < 10) || (seconds < 10) {

            if (hours < 10) {

                cout << "0" << hours;

            }

            else {

                cout << hours;

            }

            if (minutes < 10) {

                cout << ":0" << minutes;

            }

            else {

                cout << ":" << minutes

            }

            if (seconds < 10) {

                cout << ":0" << seconds;

            }

            else {

                cout << ":" << seconds;

            }

        }

        else {

            cout << hours << ":" << minutes << ":" << seconds;

        }

    }

    // Increment hours

    void Clock::incrementHour() {

        hours = +1;
        setHours(hours);

    }

    // Increment minutes

    void Clock::incrementMinutes() {

        minutes = +1;
        setMinutes(minutes);

    }

    // Increment seconds

    void Clock::incrementSeconds() {

        seconds = +1;
        setSeconds(seconds);

    }