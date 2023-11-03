#include <iostream>

int main (){
    std::cout << "Enter a number\n";
    int value;
    std::cin >> value;
    if (value % 2 == 0){
        std::cout << "Even\n";
    }
    else{
        std::cout << "Odd\n";
    }
    return 0;
}