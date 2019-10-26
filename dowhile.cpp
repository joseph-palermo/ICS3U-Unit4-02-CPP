// Copyright (c) 2019 Joseph Palermo All rights reserved.
//
// Created by: Joseph Palermo
// Created on: October 2019
// This program uses a do while loop to get the factorial of integers

#include <iostream>

main() {
    // this function uses a do while loop to get the factorial of integers
    int integer;
    int loopCounter = 0;
    int factorial = 1;

    // input
    std::cout << "" << std::endl;
    std::cout << "Enter an integer: ";
    std::cin >> integer;

    // process
    do {
        loopCounter = loopCounter + 1;
        factorial = factorial * loopCounter;
    } while (loopCounter < integer);

    // Output
    std::cout << "" << std::endl;
    std::cout << "The factorial of " << integer << " is: " 
        << factorial << std::endl;
}
