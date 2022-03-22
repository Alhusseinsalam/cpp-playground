#include <iostream>
#include <stdio.h>

using namespace std;

class Vector {
    public:
        Vector() : elem{new double[0]}, sz{0} {}
        Vector(int s) :elem{new double[s]}, sz{s}
        {
            for (int i = 0; i != s; i++) {
                elem[i] = 0;
            }
        }

        ~Vector() {std::cout<<"called Destructor" << "\n"; delete[] elem;} // destructor

        double& operator[](int i);
        int size() const;

        // initialization types
        // using initializer-list
        Vector(initializer_list<double> lst) :elem{new double[lst.size()]}, sz{static_cast<int>(lst.size())}{
            copy(lst.begin(), lst.end(), elem);
        }
        
        // using push_back this will add element at end and increase the size by one
        // need impelmentation
        void push_back(double);

    private:
        double* elem;
        int sz;
};



Vector read(istream& is) {
    Vector v;
    for (double d; is >> d;) {
        v.push_back(d);
    }
    return v;
}


int main() {



    {

        Vector v2(10);
        // vector will be destroyed outside this scope
    }

    cout << "Vector is no more" << "\n";

    Vector v;
    v = read(cin);
    cout << v[0] << "\n";

    return 0;
}