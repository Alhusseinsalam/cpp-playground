#include <iostream>
#include <stdio.h>
#include <vector>


double square(double x) {
    return x * x;
}

void vartypes(){
    int i = -2;
    double d = 22.2;
    char c = 'a';
    bool b = true;
    unsigned ui = 22;
}

void intialization() {
    double d1 = 2.3;
    double d2 {2.3};
    double d3 = {2.3};

    int i1 = 7.8; // this will automatically cast it to 7, this is for C compatibility
    printf("i1: %d\n", i1);
    int i2 {7}; // this will cause error of assigning double value to int variable

    // no need to state the type of variable if declared with initial value
    auto b = true; //automatiical assigned bool
    auto ch = 'x'; //automatiical assigned char
    auto x = 2; //automatiical assigned int


}


constexpr double square2(double x) {
    return x * x;

}

void constanttypes(const std::vector<double>) {
    const char cc = 'a'; // value will not change, use to specify interface so that data can be parsed to functions using pointers without changing value, this is evaluated in runtime
    constexpr char cp = 'b'; // evaluated at compile time, specify constants to allow placement of data in read-only memory and for performance
    // if constant is set in function arguments, the function will not modify the parameter, liek vector passed in this function

    // to use function in a constant expression, function must be defined constexpr, for example square function
    const double s1 = square2(20);
}

int main() {
    std::cout << "Hello, World!\n";    
    std::cout << square(10) << "\n";
    std::cout << (2 ^ 3) << "\n";
    intialization();
    return 0;
}


    