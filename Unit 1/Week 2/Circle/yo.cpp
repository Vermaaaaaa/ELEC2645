#define PI 3.14159265
#include <iostream>

class circle {
 public:
  // only accessors and mutators are public in this example
  circle();
  void set_radius(float radius);
  float get_area();
  float get_circumference();
 private:
  // member variables are private and set/get via accessor/mutator
  float _radius;
  float _area;
  float _circumference;
};

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


int main() {
  circle circle;
  float area = circle.get_area();
  float circumference = circle.get_circumference();
  std::cout << "The circle has an area of " << area << " m^2.\n";
  std::cout << "The circle has a circumference of " << circumference << " m.\n";
  return 0;
}