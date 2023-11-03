    #include "circle.h"
#include <iostream>


// mutator method to set radius
void circle::set_radius(float radius) { _radius = radius; }
// accessor method to get area
float circle::get_area() {
  _area = PI * _radius * _radius;
  return _area;
}
float circle::get_circumference(){
    _circumference = 2.0f * PI * _radius;
    return _circumference;
}

circle::circle(){
    std::cout << "Enter the radius of the circle\n";
    float radius;
    std::cin >> radius;
    _radius = radius;
}