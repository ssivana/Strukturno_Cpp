//
// Created by Ivana Stojkoska on 2.5.2026.
//
#include <iostream>
using namespace std;

double diameter (double radius) {
    return radius * 2;
}
double perimeter (double radius) {
    return radius * 2 * 3.14;
}

double area (double radius) {
    return radius * radius * 3.14;
}

int main () {
    double radius;
    cin >> radius;

    cout << "A circle with radius: " << radius << " has:" << endl;
    cout << "Diameter: " << diameter(radius) << "\nArea: "<< area(radius)<< "\nPerimeter: " << perimeter(radius);


    return 0;
}



