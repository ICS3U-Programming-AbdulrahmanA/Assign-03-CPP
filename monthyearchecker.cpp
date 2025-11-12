// Copyright (c) 2025 Abdul All rights reserved.
// Created By : Abdul
// Date : November 12th, 2025
// This program checks whether a given year is a leap year and the number of days in a month

#include <iostream>
#include <string>

int main() {
    // get month and year from user
    std::string month_input;
    std::string year_input;

    std::cout << "Enter month (1-12): ";
    std::cin >> month_input;

    std::cout << "Enter year: ";
    std::cin >> year_input;

    // initialize variables
    int month = 0, year = 0, days = 0;
    std::string monthname;
    bool leap_year = false;

    // try converting month to int
    try {
        month = std::stoi(month_input);

        // try converting year to int
        try {
            year = std::stoi(year_input);

            // check if month valid
            if (month < 1 || month > 12) {
                std::cout << "Month must be between 1 and 12.";
            } else {
                // leap year check
                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                    leap_year = true;
                } else {
                    leap_year = false;
                }

                // determine number of days
                if (month == 1 || month == 3 || month == 5 || month == 7 ||
                    month == 8 || month == 10 || month == 12) {
                    days = 31;
                } else if (month == 4 || month == 6 || month == 9 || month == 11) {
                    days = 30;
                } else if (month == 2) {
                    if (leap_year) {
                        days = 29;
                    } else {
                        days = 28;
                    }
                } else {
                    std::cout << "Invalid month.";
                }

                // determine month name
                if (month == 1)
                    monthname = "January";
                else if (month == 2)
                    monthname = "February";
                else if (month == 3)
                    monthname = "March";
                else if (month == 4)
                    monthname = "April";
                else if (month == 5)
                    monthname = "May";
                else if (month == 6)
                    monthname = "June";
                else if (month == 7)
                    monthname = "July";
                else if (month == 8)
                    monthname = "August";
                else if (month == 9)
                    monthname = "September";
                else if (month == 10)
                    monthname = "October";
                else if (month == 11)
                    monthname = "November";
                else if (month == 12)
                    monthname = "December";

                // display results
                std::cout << "\n";
                std::cout << "Month: " << monthname << "\n";
                std::cout << "Year: " << year << "\n";
                std::cout << "Days in this month: " << days << "\n";

                if (leap_year)
                    std::cout << "This is a leap year.\n";
                else
                    std::cout << "This is not a leap year.\n";
            }
        } catch (...) {
            std::cout << "Invalid year input. Please enter a valid number.\n";
        }
    } catch (...) {
        std::cout << "Invalid month input. Please enter a valid number.\n";
    }
}
