#include <iostream>
#include <stdio.h>
#include <vector>


void arrays() {
    char ca[6]; // characters array
    for (int i = 0; i < 6; i++){
        ca[i] = (char) i+65;
    }

    char* p; // pointer to char

    p = &ca[5];
    std::cout << "test\t-" << ca[0] << "-";
    std::cout << *p << "\n";

    // get address of element in array inside a loop
    int is[] = {0, 1, 2, 3, 4};
    for (auto& x : is) {
        ++x;
    }


    // important note
    // prefix * means get value
    // prefix & means get address
    // suffix * means pointer
    // suffix & means reference
    // a reference is sinmliar to a pointer except that you don't need to use prefix * to address the value referred to by the reference
    // also a reference cannot be made to refere to differe object after initilization
    // references are useful in function arguments like
    // void sort(vector<double>& v); sor t v (v is a vector of doubles)
    // By using a reference, we ensure that for a call sort(my_vec), we do not copy my_vec and that it really is my_vec that is sorted and not a copy of it.


    /*
    some examples

        T a[n]          T[n]: a is an array of n Ts
        T∗ p            T*: p is a pointer to T
        T& r            T&: r is a reference to T
        T f(A)          T(A): f is a function taking an argument of type A returning a result of type T
    */

   // nullptr is value for null pointer or pointer that refere to nothing
   double* pd = nullptr;
   // always check if pointer refere to something or not by using nullptr
   // if (p == nullptr)
}

void assignments() {
    // assignment of built-in types is a simple machine copy operation
    // the following code will just change the value of x to the value of y, it will not affect y, they are just two different variables
    int x = 2;
    int y = 3;
    x = y;

    // here we use pointer, whihc change the pointer to point to the value of y
    // so here px1 is now pointing to y
    int x1 = 2;
    int y1 = 3;
    int* px1 = &x;
    int* py1 = &y;
    px1 = py1;

    // when using references (also refere/point to object and represented as machine address)
    // Assignment to a reference does not change what the reference refers to but assigns to the referenced object
    // what happened below is that the value of x changed to become the value of y
    // cause r2 value was assigned to r
    int x2 = 2;
    int y2 =3;
    int& r = x2;
    int& r2 = y2;
    r = r2;

    // To access the value pointed to by a pointer, you use ∗; that is automatically (implicitly) done for a reference.


    // initialization
    int i = 7;
    int& r4 {i};
    r4 = 9;
    std::cout << i << "\n";
}

void pointers() {
    
}

int main() {
    arrays();
    assignments();
    return 0;
}