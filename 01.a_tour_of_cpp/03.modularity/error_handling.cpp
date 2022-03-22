#include <stdio.h>
#include <iostream>


int main() {
    int x[5];

    try {
        throw std::out_of_range("DD");
    } catch (std::out_of_range& err) {
        std::cerr << "Exception Happened: " << err.what() << "\n";
    } catch (std::length_error& err) {
        std::cerr << "Exception Happened (length error): " << err.what() << "\n";
    }

    return 0;
}