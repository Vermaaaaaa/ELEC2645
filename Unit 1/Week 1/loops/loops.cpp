#include <iostream>

int main(){
    std::cout << "Enter a  number\n";
    int value;
    std::cin >> value;
    for(int i = 0; i <= value; i++){
        std::cout << i << "\n";
    }


    return 0;
}