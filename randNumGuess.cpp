// Copyright 2025 Gustav I. All rights reserved.
// Made by: Gustav I.
// Made on 2025-03-21
// This program executes a number guessing game in C++.

#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
    std::srand(std::time(0));

    int number_guess;
    int chosen_number = std::rand() % 10;

    std::cout << "Guess a number (0-9): ";
    std::cin >> number_guess;
    std::cout << std::endl;

    if (number_guess == chosen_number) {
        std::cout << "You guessed correct!" << std::endl;
    } else {
        std::cout << "You guessed wrong!" << std::endl;
        std::cout << "The correct answer was: " << chosen_number << std::endl;
    }

    return 0;
}
