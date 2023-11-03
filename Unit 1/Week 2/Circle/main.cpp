//ELEC/XJEL2645
// Dr Craig A. Evans and Dr Tim J. Amsdon

#include <iostream>
#include "circle.h"

int main() {
  circle circle;
  float area = circle.get_area();
  float circumference = circle.get_circumference();
  std::cout << "The circle has an area of " << area << " m^2.\n";
  std::cout << "The circle has a circumference of " << circumference << " m.\n";
  return 0;
}