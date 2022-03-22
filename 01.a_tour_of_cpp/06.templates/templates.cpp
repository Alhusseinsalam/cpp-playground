#include <iostream>
#include <stdio.h>

template<typename T>
class Vector {
    private:
        T* elem;
        int sz;
    public:
        explicit Vector(int s);
        ~Vector() {delete[] elem;}
};

int main() {

    return 0;
}