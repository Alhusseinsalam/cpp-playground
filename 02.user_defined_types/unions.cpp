#include <iostream>
#include <stdio.h>
#include <variant>

using namespace std;
// A union is a struct in which all members are allocated at the same address so that the union occupies only as much space as its largest member


struct Node
{
    int value;
    Node *next;
};


// Type can hold values ptr and num
enum Type {
    ptr, num
};

struct Entry1 {
    string name;
    Type t;
    Node* p; // use p if t==ptr
    int i;  // use i if t==num
};

// since p and i are never used at same time
// we can put them in a union cause it only take suze of the biggest value in it
union Value {
    Node* p;
    int i;
};

//The language doesn’t keep track of which kind of value is held by a union, so the programmer must do that:
struct EntryWithUnion {
    string name;
    Type t;
    Value v; // use v.p if t == ptr, use v.i if t == num
};

void f(EntryWithUnion* pe) {
    if (pe -> t == num) {
        cout << pe->v.i;
    } else if (pe -> t == ptr) {
        cout << pe->v.p;
    }
};


// or can use variant, which store value of one of a set of alternative types
// for example a variant<Node*, int> can hold either Node* or an int
struct EntryWithVariant {
    string name;
    variant<Node*, int> v;
};



int main() {

    return 0;
}