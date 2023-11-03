//ELEC/XJEL2645
// Dr Craig A. Evans and Dr Tim J. Amsdon


#include <iostream>
#include "funcs.hpp"


int main() {
    int choice;
    std::cout << "Enter a choice 1 -Add 2-Area of Circle 3-BMI \n";
    std::cin >> choice;

    switch (choice)
    {
    case 1:
    {
        std::cout << "Enter an integer number to sum: \n";
        int a, b;
        std::cin >> a;
        std::cout << "Now enter another integer number: \n";
        std::cin >> b;
        int my_sum = sum(a, b);
        std::cout << "The sum of the numbers is " << my_sum << std::endl;
        break;
    }
    case 2:
    {
        std::cout << "Enter a radius\n";
        float radius;
        std::cin >> radius;
        float area1 = area(radius);
        std::cout << "The area of the circle is: " << area1 << std::endl;
        break;
    }
    case 3:
    {
        float weight;
        float height;
        std::cout << "Enter your height in cm\n";
        std::cin >> height;
        std::cout << "Enter your height in kg\n";
        std::cin >> weight;
        float bmi1 = bmi(height, weight);
        std::cout << "Your BMI is: " << bmi1 << std::endl;
        break;
       
    }
    }
    return 0;

}
