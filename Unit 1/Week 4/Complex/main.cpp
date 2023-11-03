#include <iostream>
#include <complex>
#include <cmath>

#define PI 3.14159265



int main(){
    std::cout << "Enter a frequency in Hertz\n";
    double freq;
    std::cin >> freq;
    std::cout << "Enter a capacitance in Farads\n";
    double cap;
    std::cin >> cap;

    std::complex<double> impedance(0.0, -1.0 / (2.0*freq*PI*cap));

    std::cout << "Real part of impedance (Z): " << impedance.real() << " ohms" << std::endl;
    std::cout << "Imaginary part of impedance (Z): " << std::abs(impedance.imag()) << " ohms" << std::endl;

    return 0;
}