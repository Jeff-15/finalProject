#include "RandomDice.h"
#include <random>
#include <chrono>

RandomDice:: RandomDice(){ }

int RandomDice::generate() {
    std::mt19937 rng;
    unsigned int seed = std::chrono::system_clock::now().time_since_epoch().count();
    rng.seed(seed);
    int min_value = 2;
    int max_value = 12;
    std::uniform_int_distribution<int> distribution(min_value, max_value);
    return distribution(rng);
}

