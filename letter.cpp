// Copyright (c) 2019 Joey Marcotte All rights reserved.
//
// Created by: Joey Marcotte
// Created on: November 2019
// This program shows functions
// with user input

#include <cstdlib>
#include <string>
#include <iostream>


std::string Formatter(std::string name, std::string address, std::string city,
                   std::string province, std::string postalCode,
                   std::string apartmentNumber = "") {
    // This program formats the letter

    std::string letter;

    letter =  name + "\n";
    if (apartmentNumber == "") {
        letter = letter + " " + address + "\n";
        letter = letter + " " + city + " " + province + " " + postalCode;

    } else {
        letter =  letter = letter + " " + apartmentNumber +
                  " " + address + "\n";
        letter = letter + " " + city + " " + province + " " + postalCode;;
    }

    return letter;
}


int main() {
    // calls other functions
    std::string name;
    std::string address;
    std::string city;
    std::string province;
    std::string postalCode;
    std::string apartment;
    std::string apartmentNumber;
    std::string letter;

    std::cout << "Enter your full name: ";
    std::cin >> name;
    std::cout << "Do you live in an apartment?(y/n): ";
    std::cin >> apartment;

    if (apartment == "y") {
        std::cout << "Enter your apartment number: ";
        std::cin >> apartmentNumber; }

    std::cout << "Enter your address: ";
    std::cin >> address;
    std::cout << "Enter your city: ";
    std::cin >> city;
    std::cout << "Enter your province(short form): ";
    std::cin >> province;
    std::cout << "Enter your postalCode: ";
    std::cin >> postalCode;

    if (apartment == "y") {
        letter = Formatter(name, address, city, province, postalCode,
                      apartmentNumber);

    } else {
        letter = Formatter(name, address, city, province, postalCode);

    std::cout << "" << std::endl;
    std::cout << letter << std::endl;
    }
}
