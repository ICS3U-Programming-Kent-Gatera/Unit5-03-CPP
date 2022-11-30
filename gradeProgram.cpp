// Copyright (c) 2022 Kent Gatera All rights reserved.
// .
// Created by: Kent Gatera
// Date: Nov 28, 2022
// This program calculates the mean mark of a level

#include <iostream>


std::string calcMark(std::string markLevel) {
    if (markLevel == "4+") {
        return "97.5%";
    } else if (markLevel == "4") {
        return "90.5%";
    } else if (markLevel == "4-") {
        return "83%";
    } else if (markLevel == "3+") {
        return "78%";
    } else if (markLevel == "3") {
        return "74%";
    } else if (markLevel == "3-") {
        return "71%";
    } else if (markLevel == "2+") {
        return "68%";
    } else if (markLevel == "2") {
        return "64.5%";
    } else if (markLevel == "2-") {
        return "61%";
    } else if (markLevel == "1+") {
        return "58%";
    } else if (markLevel == "1") {
        return "54.5%";
    } else if (markLevel == "1-") {
        return "51%";
    } else if (markLevel == "R") {
        return "<50%";
    } else {
        return "-1";
    }
}

int main() {
    std::string userLevel;
    std::string meanPercentage;
    std::cout << "What is your grade?: ";
    std::cin >> userLevel;

    // Using this variable to store the returned value.
    meanPercentage = calcMark(userLevel);

    // In case the user enters an invalid mark -1 will be returned.
    if (meanPercentage == "-1") {
        std::cout << "Please enter a valid level.";
    } else {
        std::cout << "The middle mark of " << userLevel << " is "
        << meanPercentage;
    }
}
