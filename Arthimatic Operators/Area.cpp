#include <iostream>
using namespace std;
int main ()
{
    // Area of rectangle
    int length, breadth, area;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;
    area = length * breadth;
    cout << "The area of the rectangle is: " << area << endl;

    // Area of Circle
    int radius;
    float areaCircle;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    areaCircle = 3.14 * radius * radius;
    cout << "The area of the circle is: " << areaCircle << endl;

    // Area of Triangle
    int base, height;
    float areaTriangle;
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;
    areaTriangle = 0.5 * base * height;
    cout << "The area of the triangle is: " << areaTriangle << endl;

    // Area of Square
    int side;
    cout << "Enter the side of the square: ";
    cin >> side;
    cout << "The area of the square is: " << side * side << endl;

    // Area of Parallelogram
    int baseParallelogram, heightParallelogram;
    float areaParallelogram;
    cout << "Enter the base of the parallelogram: ";
    cin >> baseParallelogram;
    cout << "Enter the height of the parallelogram: ";
    cin >> heightParallelogram;
    areaParallelogram = baseParallelogram * heightParallelogram;
    cout << "The area of the parallelogram is: " << areaParallelogram << endl;

    // Area of Rhombus
    int diagonal1, diagonal2;
    float areaRhombus;
    cout << "Enter the first diagonal of the rhombus: ";
    cin >> diagonal1;
    cout << "Enter the second diagonal of the rhombus: ";
    cin >> diagonal2;
    areaRhombus = 0.5 * diagonal1 * diagonal2;
    cout << "The area of the rhombus is: " << areaRhombus << endl;

    // Area of Trapezium
    int base1, base2, heightTrapezium;
    float areaTrapezium;
    cout << "Enter the first base of the trapezium: ";
    cin >> base1;
    cout << "Enter the second base of the trapezium: ";
    cin >> base2;
    cout << "Enter the height of the trapezium: ";
    cin >> heightTrapezium;
    areaTrapezium = 0.5 * (base1 + base2) * heightTrapezium;
    cout << "The area of the trapezium is: " << areaTrapezium << endl;
    
    return 0;
}