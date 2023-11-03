#include <iostream>


class square {
    public:
    float get_area();
    float get_perimeter();
    square();
    private:
    float _area;
    float _perimeter;
    float _length;
};


square::square(){
    std::cout << "Enter the length of the square\n";
    int length;
    std::cin >> length;
    _length = length;
}

float square::get_area(){
    _area = _length * _length;
    return _area;
}

float square::get_perimeter(){
    _perimeter = _length * 4.0f;
    return _perimeter;
}

int main(){
    square square;
    std::cout << "The area of the square is: " << square.get_area() << std::endl;
    std::cout << "The perimeter of the square is: " << square.get_perimeter() << std::endl;
    
}