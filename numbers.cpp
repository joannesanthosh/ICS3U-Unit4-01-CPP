// Copyright (c) 2022 Joanne Santhosh
//
// Created by: Joanne Santhosh
// Created on: Nov 2022
// This program uses while loops

#include <iostream>
#include <string>

int integer;

int main() {
    // Adds a total onto an integer

    std::string number;
    std::cout << "Enter a positive integer: ";
    std::cin >> number;
    std::cout << std::endl;
    try {
        integer = std::stoi(number);
        if (integer > 0) {
            std::string text = "1";
            int total = 1;
            int count = 1;
            int counter = 1;
            while (count < integer) {
                counter = counter + 1;
                total = total + counter;
                count = count + 1;
                text = text + " + " + std::to_string(counter);
            }
            std::cout << text << " = " << total;
        } else if (integer == 0) {
            std::cout << "0 = 0";
        } else {
            std::cout << "Error: " << integer << " is a negative integer.";
        }
        std::cout << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Error: " << number << " is not an integer.";
        std::cout << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
