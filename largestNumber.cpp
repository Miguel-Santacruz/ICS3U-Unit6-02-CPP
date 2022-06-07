// Copyright (c) 2022 Miguel Santacruz All rights reserved
//
// Created by: Miguel Santacruz
// Created on: Jun 2022
// This program finds the volume of a cylinder

#include <iostream>
#include <string>
#include <random>
#include <array>

template<size_t N>
int Maximum(std::array<int, N> randomNumbers) {
    // this function calculates the average
    int val1 = randomNumbers[0];

    for (int loopCounter = 0; loopCounter < 10; loopCounter++) {
        if (val1 < randomNumbers[loopCounter]) {
            val1 = randomNumbers[loopCounter];
        }
    }

    return val1;
}


main() {
    // this function generates the values

    int number;
    std::array<int, 10> randomNumbers;
    int answer;

    for (int loopCounter = 0; loopCounter < 10; loopCounter++) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());  // mersenne_twister
        std::uniform_int_distribution<int> idist(0, 100);  // [0, 100]
        number = idist(rgen);
        randomNumbers[loopCounter] = number;
        std::cout << "Random number " << loopCounter + 1 << ": " << number
        << std::endl;
    }
    answer = Maximum(randomNumbers);
    std::cout << "" << std::endl;
    std::cout << "The largest number is: " << answer << std::endl;
}
