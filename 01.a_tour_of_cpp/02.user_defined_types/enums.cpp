#include<stdio.h>
#include<iostream>

// class after enum specifies that enumeration is strongly typed and that it enumerators are scoped
enum class Color {
    red, blue, green
};

// By default, an enum class has only assignment, initialization, and comparisons (e.g., == and <; §1.4) defined. However, an enumeration is a user-defined type, so we can define operators for it:
enum class Traffic_light{
    green, yellow, red
};

Traffic_light& operator++(Traffic_light& t) {
    switch(t) {
        case Traffic_light::green: return t = Traffic_light::yellow;
        case Traffic_light::yellow: return t = Traffic_light::red;
        case Traffic_light::red: return t = Traffic_light::green;
    }
}

void print_traffic_light(Traffic_light& l) {
    switch (l)
    {
        case Traffic_light::green:
            std::cout << "Green" << "\n";
            break;
        
        case Traffic_light::red:
            std::cout << "Red" << "\n";
            break;

        case Traffic_light::yellow:
            std::cout << "Yellow" << "\n";
            break;
        default:
            break;
    }
}

enum SimpleColor {
    red, green, blue
};


int main() {

    Color c = Color::red;

    Traffic_light light = Traffic_light::red;
    print_traffic_light(light);

    ++light;

    print_traffic_light(light);

++light;
    print_traffic_light(light);

    return 0;
}