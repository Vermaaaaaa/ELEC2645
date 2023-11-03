#include <iostream>
#include <cmath> // Use <cmath> for mathematical functions
#define _USE_MATH_DEFINES

// Define M_PI if it's not defined
#ifndef M_PI
const double M_PI = 3.14159265358979323846;
#endif

int sum(const int a, const int b);
float area(const float r);
float bmi(const float height, const float weight);

int sum(const int a, const int b) {
    return a + b;
}

float area(const float r) {
    return M_PI * std::pow(r, 2.0); // Use std::pow from <cmath>
}

float bmi(const float height, const float weight) {
    return std::pow(height / 100.0f, 2.0f) / weight; // Convert height to meters
}

int main() {
    int choice;
    std::cout << "Enter a choice 1 - Add 2 - Area of Circle 3 - BMI\n";
    std::cin >> choice;

    switch (choice) {
    case 1: {
        std::cout << "Enter an integer number to sum:\n";
        int a, b;
        std::cin >> a;
        std::cout << "Now enter another integer number:\n";
        std::cin >> b;
        std::cout << "Yo\n";
        int my_sum = sum(a, b);
        std::cout << "The sum of the numbers is " << my_sum << std::endl;
        break;
    }
    case 2: {
        std::cout << "Enter a radius:\n";
        float radius;
        std::cin >> radius;
        float area1 = area(radius);
        std::cout << "The area of the circle is: " << area1 << std::endl;
        break;
    }
    case 3: {
        float weight;
        float height;
        std::cout << "Enter your height in cm:\n";
        std::cin >> height;
        std::cout << "Enter your weight in kg:\n";
        std::cin >> weight;
        std::cout << "Your BMI is: " << bmi(height,weight) << std::endl;
        break;
    }
    default:
        std::cout << "Invalid choice.\n";
        break;
    }

    return 0;
}
