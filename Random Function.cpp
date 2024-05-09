#include "RandomNumber.h"
#include <iostream>
#include <random>
#include <ctime>
#include <cstdlib>

int RandomNumber(int x, int y) {

    srand(static_cast<unsigned int>(time(0)));

    // Generate a random number within the desired range
    int randomNumber = (rand() % (x - y + 1)) + y;

    return randomNumber;
}