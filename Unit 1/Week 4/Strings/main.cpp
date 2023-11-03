#include <iostream>
#include <string>




int main(){
    std::cout << "Enter a String" << std::endl;
    int counter  = 0;
    std::string in;
    std::cin >> in;
    const char *cstr = in.c_str();
    char str[] = "aeiou";
   
   for(int i = 0; i < strlen(cstr); i++ ){for(int j =0; j < strlen(str); j++){if(cstr[i] == str[j]){counter++;}}}
   std::cout << "The number of vowels is:" << counter << std::endl;

    cstr = nullptr;


    return 0;
}

