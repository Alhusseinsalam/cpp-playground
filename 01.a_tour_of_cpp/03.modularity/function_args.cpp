#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;


void test(vector<int> v, vector<int>& rv, const vector<int>& constrv) {
    // v is a local variable here (pass by val)
    // rv is a reference here so changes on it will effect the original v (pass by reference)
    // constrv is a constant reference here so it cannot be changed used if the data is big so you shouldn't pass it by value but you don't want the original data to be modified so you add const keyword
}

// structured binding example
// function can also return a class object with memebers
struct Entry {
    string name;
    int value;
};

// this bad read function return the object Entry just by initialization {s, i}
Entry read_entry(istream& is) {
    string s;
    int i;
    is >> s >> i;
    return {s,i};
}

int main() {

    vector<int> fib = {1,2,3,5,8,13,21};
    
    auto e = read_entry(cin);
    cout << "{" << e.name << "," << e.value << "}\n";

    return 0;
}