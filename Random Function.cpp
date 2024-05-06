#include <iostream>
#include <random>

int Random(int x, int y) {
    // Create a random number engine
    std::random_device rd;
    std::mt19937 gen(rd());

    // Create a distribution (e.g., uniform distribution between 0 and 99)
    std::uniform_int_distribution<> dis(x, y);

    // Generate a random number
    int randomNumber = dis(gen);

    return randomNumber;

}