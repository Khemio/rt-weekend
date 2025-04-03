#ifndef UTILS_H
#define UTILS_H

#include <limits>
#include <cstdlib>
// #include <random>  // For alternat implementation

const double infinity = std::numeric_limits<double>::infinity();

inline double random_double() {
    // return random real number in [0,1).
    return std::rand() / (RAND_MAX + 1.0);
}

inline double random_double(double min, double max) {
    // return random real number in [min, max).
    return min + (max-min)*random_double();
}

// Alternate implementation
// inline double random_double() {
//     static std::uniform_real_distribution<double> distribution(0.0, 1.0);
//     static std::mt19937 generaator;
//     return distribution(generaator);
// }


#endif