#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include "../include/fltpointacu.hpp"
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
#include <iomanip>

void floatingpointaccuracytest() {
    // Define angles in radians (common angles: 0, π/6, π/4, π/3, π/2, π)
    double angles[] = {0, M_PI/6, M_PI/4, M_PI/3, M_PI/2, M_PI};

    // Print header
    std::cout << std::setw(15) << "Angle (radians)"
              << std::setw(25) << "sin^2(x) + cos^2(x)" << std::endl;
    std::cout << std::string(40, '-') << std::endl;

    // Test each angle
    for (double angle : angles) {
        double sin_sq = std::pow(std::sin(angle), 2);
        double cos_sq = std::pow(std::cos(angle), 2);
        double result = sin_sq + cos_sq;

        // Print results with high precision
        std::cout << std::setw(15) << angle
                  << std::setw(25) << std::setprecision(20) << result << std::endl;
    }
}
