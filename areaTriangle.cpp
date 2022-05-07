// Copyright (c) 2022 Sarah All rights reserved.
//
// Created by: Sarah
// Created on: May, 6th, 2022
// This program asks the user to enter the base & height of a triangle. It then
// calculates the area of the triangle and displays it to the user.
#include <iostream>
#include <iomanip>

void CalcArea(float baseFloat, float heightFloat) {
    // declare variable.
    float area;

    // calculate area.
    area = (baseFloat * heightFloat)/2;

    // display area
    std::cout << "The area of the triangle is " << std::fixed;
    std::cout << std::setprecision(2) << area << " cm^2.";
}


int main() {
    // declare variables
    float baseUserFloat, heightUserFloat;
    std::string baseUserStr, heightUserStr;

    // get user input
    std::cout << "Enter the base of the triangle (cm): ";
    std::cin >> baseUserStr;
    std::cout << "Enter the height of the triangle (cm): ";
    std::cin >> heightUserStr;
    std::cout << std::endl;

    try {
        // convert from string to float
        baseUserFloat = std::stof(baseUserStr);

        try {
            // converts from string to float
            heightUserFloat = std::stof(heightUserStr);

            // sets a range.
            if (baseUserFloat >= 0 && heightUserFloat >= 0) {
                // calls function
                CalcArea(baseUserFloat, heightUserFloat);
            } else {
                std::cout << "The base and height must be greater than 0.";
            }

         // handles the error case.
        } catch (std::invalid_argument) {
            std::cout << heightUserStr << " is not a valid number.";
        }
     // handles the error case.
    } catch (std::invalid_argument) {
        std::cout << baseUserStr << " is not a valid number.";
    }
}
