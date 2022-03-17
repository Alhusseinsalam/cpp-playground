#include <stdio.h>
#include <iostream>

struct Vector {
    int sz;             // number of element
    double* elem;       // pointer to element
};

void vector_init(Vector& v, int s) {
    v.elem = new double[s];
    v.sz = s;
}

double read_and_sum(int s) {
    // read ints from cin and return their sum
    Vector v;
    vector_init(v,s);
    for (int i = 0; i!= s; i++) {
        std::cin >> v.elem[i];
    }
    double sum = 0;
    for (int i = 0; i != s; i++) {
        sum += v.elem[i];
    }

    return sum;

}

void access_struct_members_types(Vector v, Vector& rv, Vector* pv) {
    int i1 = v.sz;              // access through name
    int i2 = rv.sz;             // access through reference
    int i3 = pv -> sz;          // access through pointer
}

int main() {

    std::cout << read_and_sum(3) << "\n";
    return 0;
}