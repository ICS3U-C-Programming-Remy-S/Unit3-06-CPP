// Copyright (c) 2021 Remy Skelton All rights reserved.
//
// Created by: Remy Skelton
// Date: Oct, 11, 2023
// This program will ask the user for a number between
// 1 and 10 then check if they guessed my number with
// the use of a number generator and try catch

#include <iostream>
// Include this for std::setprecision
#include <cmath>
#include <iomanip>
#include <random>

int main() {
    // create a random seed value
    std::random_device rd;
    // create the sequence for number generator
    std::mt19937 gen(rd());

    // declare userGuess and correctGuess variable
    std::string userGuessAsString;
    int correctGuess;

    // declare constants
    const int MIN_NUMBER = 0;
    const int MAX_NUMBER = 9;

    // get the userGuessAsString and display message
    std::cout << "This program asks the user for a number between ";
    std::cout << "0 and 9 and then displays if you guessed correctly or not,";
    std::cout << " with the answer changing each time.";
    std::cout << "\nEnter your guess between 0 and 9: ";
    std::cin >> userGuessAsString;

    // Create a distribution between 1 and 10
    std::uniform_int_distribution<int> distribution(MIN_NUMBER, MAX_NUMBER);

    // generate correctGuess
    correctGuess = distribution(gen);

    // Try catch statement
    try {
        // Convert userGuessAsString to int
        int userGuessAsInt = std::stoi(userGuessAsString);

        // When userGuessAsInt equals correctGuess
        if (userGuessAsInt == correctGuess) {
            // display that the user guess is correct
            std::cout << "\nCongratulations you guessed correctly";

            // When userGuessAsInt equals correctGuess
        } else {
            // display that the user guess is incorrect
            std::cout << "\nPlease guess again, the correct answer was, "
                      << correctGuess << "";
        }
    } catch (std::invalid_argument) {
            // Display that the user guess was not valid
            std::cout << "\n"
                << userGuessAsString << " is not a valid guess.";
    }

    // finally statement
    std::cout << "\nThank you for playing my game";
}
