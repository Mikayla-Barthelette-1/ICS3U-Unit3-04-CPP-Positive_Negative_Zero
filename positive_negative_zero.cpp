// Copyright (c) 2021 Mikayla Barthelette All rights reserved
//
// Created by: Mikayla Barthelette
// Created on: Sept 2021
// This program will tell you if your number is positive, negative, or zero

#include <iostream>


int main() {
    // this function tells you what your number is

    int userNumber;


    // Input
    std::cout << "Enter an integer: ";
    std::cin >> userNumber;

    // Process
    if (userNumber > 0) {
        std::cout << userNumber << " is a positive number. ";
    } else if (userNumber < 0) {
        std::cout << userNumber << " is a negative number. ";
    } else {
        std::cout << userNumber << " is just zero! ";
    }

    // Output
    std::cout << "" << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
