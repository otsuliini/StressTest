#include <iostream>
#include "../include/pitest.hpp"
#include "../include/fltpointacu.hpp"

int main() {
    std::cout << "PI Calculation: " << calculatePI() << std::endl; // Print the result
    floatingpointaccuracytest();
    return 0;
}