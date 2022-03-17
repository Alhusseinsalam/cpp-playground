#include <stdio.h>
#include <iostream>

using namespace std;

class Vector {
    public:
        Vector(int s) :elem{new double[s]}, sz{s}{} // constructor
        double& operator[](int i) {return elem[i];} // element access (getter) subscripting Access to elements is provided by a subscript function, called operator[]. It returns a reference to the appropriate element (a double& allowing both reading and writing).
        int size() {return sz;}
    private:
        double* elem;
        int sz;
};

double read_and_sum(int s)
{
    Vector v(s);
    for (int i=0; i!=v.size(); ++i)
        cin>>v[i];
    double sum = 0;
    for (int i=0; i!=v.size(); ++i)
        sum+=v[i];
    return sum;
    // make a vector of s elements
    // read into elements
    // take the sum of the elements
}

int main() {

    return 0;
}