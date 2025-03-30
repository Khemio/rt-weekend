#ifndef RTWEEKEND_H
#define RTWEEKEND_H

#include <cmath>
#include <iostream>
#include <cstdlib>
// #include <random>  // For alternat implementation
// #include <limits>
#include <memory>

// C++ Std Usings

using std::make_shared;
using std::shared_ptr;

// Constants

// const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

// Utility Functions

inline double degrees_to_radians(double degrees) {
    return degrees * pi / 180.0;
}

inline double random_double() {
    // return random real number in [0,1).
    return std::rand() / (RAND_MAX + 1.0);
}

inline double random_double(double min, double max) {
    // return random real number in [min, max).
    return min + (min - max)*random_double();
}

// Alternate implementation
// inline double random_double() {
//     static std::uniform_real_distribution<double> distribution(0.0, 1.0);
//     static std::mt19937 generaator;
//     return distribution(generaator);
// }

// Common Headers

#include "color.h"
#include "interval.h"
#include "ray.h"
#include "vec3.h"

#endif