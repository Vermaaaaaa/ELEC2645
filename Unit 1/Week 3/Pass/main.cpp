//ELEC/XJEL2645
// Dr Craig A. Evans and Dr Tim J. Amsdon

#include <cmath>
#include <iostream>

const double PI = 3.14159265359;

void circular(double radius, double &area, double &volume);
void currency_convert(float gbp, float &usd, float &eur, float &cny, float &ngn, float &rub);

int main() {
  double area, volume;
  float usd, eur, cny, ngn, rub;
  circular(1.0, area, volume);
  std::cout << "Area = " << area << ", Volume = " << volume << std::endl;

  std::cout << "Enter a value to be converted";
  float gbp;
  std::cin >> gbp;
  currency_convert(gbp, usd, eur, cny, ngn, rub);
  std::cout << gbp << " " << usd << " " << eur << " " << cny<< " " << " " << ngn << " " << rub << "\n";
}

void circular(double radius, double &area, double &volume) {
  area = PI * pow(radius, 2.0);
  volume = (4.0 / 3.0) * PI * pow(radius, 3.0);
}

void currency_convert(float gbp, float &usd, float &eur, float &cny, float &ngn, float &rub){
    usd = gbp*1.22f;
    eur = gbp*1.16f;
    cny = gbp*8.90f;
    ngn = gbp*926.51f;
    rub = gbp*121.73f;
}