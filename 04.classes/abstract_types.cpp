
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



// interface (abstract type)
// class derived from container (inherit container) should implement its methods
// virtual means that this function will be implemented in a class derived from this one
// class with pure virtual functions is called abstract class
class Container {

    public:
        virtual double& operator[](int) = 0;
        virtual int size() const = 0;
        virtual ~Container() {}
};

// Vector implementing container
class Vector_container : public Container {
    public:
        Vector_container(int s): v(s) {}
        ~Vector_container() {}

        double& operator[](int i) override {return v[i];}
        int size() const override {return v.size();}

    private:
        Vector v;
};

int main() {
    return 0;
}