#include <iostream>
#include <unordered_map> 
#include <string>

int main(){
    std::unordered_map<std::string, int> map;
    map["Simpson"] = 39;
    map["Gainsborough"] = 65;
    map["Burran"] = 80;
    map["Soppit"] = 56;
    map["Truelove"] = 12;
    map["Murphy"] = 47;

    std::unordered_map<std::string, int>::iterator it = map.begin();
    int cval = 0;
     for (auto x : map){if(x.second > cval){cval = x.second;}}
     std::cout << "The biggest value is:" << cval << std::endl;
    return 0;
}
