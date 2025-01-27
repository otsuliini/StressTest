#include <cmath>
#include <iostream>
#include "../include/pitest.hpp"

long double calculatePI_LD(){
    long double pi = 0.0;
    double x; 
    
    for (int n = 0; n < 1000000; n++) {
        x = std::pow(-1, n) / (2 * n + 1);   
        pi += 4 * x;
    }

    return pi;
}