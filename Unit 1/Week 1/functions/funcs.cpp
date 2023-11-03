#include "funcs.hpp"
#define _USE_MATH_DEFINES
#include <cmath>



int sum(int a, int b);
float area(float r);
float bmi(float height, float weight);



int sum(int a, int b) {
    return a + b;
}

float area(float r) {
    return M_PI * pow(r, 2.0);
}

float bmi(float height, float weight) {
    return pow(height, 2.0) / weight;
}