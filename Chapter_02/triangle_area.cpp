// Geometry: area of a triangle) Write a program that prompts the user to enter the
// three points (x1, y1), (x2, y2), and (x3, y3) of a triangle and displays its area.
// The formula for computing the area of a triangle is s = (side1 + side2 + side3) / 2
// Area = sqrt(s(s-side1)(s-side2)(s-side3))
// Example: Enter three points for a triangle: 1.5, -3.4, 4.6, 5, 9.5, -3.4 
// The area of the triangle is 33.6
#include <iostream>
#include <cmath> 
int main() {
    double a, b, c;
    std::cout <<"Enter three sides: ";
    std::cin >> a >> b >> c;
    if(a + b > c && a + c > b && b + c > a) {
        double s = (a + b + c) / 2.0;
        double area = std::sqrt(s * (s - a) * (s - b) * (s - c));
        std::cout << "The area is: " << area << std::endl;

    }
    else{
        std::cout << "Invalid triangle sides!" << std::endl;
    }
    return 0;
}
