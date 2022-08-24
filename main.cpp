#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "nlohmann/json.hpp"

int main() {
    std::vector<std::string> names;
    names.push_back("The Shawshank Redemption");
    names.push_back("The Godfather");
    names.push_back( "A Space Odyssey");
    names.push_back( "Seven");
    names.push_back( "The Silence of the Lambs");
    std::ifstream file;
    nlohmann::json dict;
   // std::cout << "\nEnter actor: ";
    std::string temp = "Morgan Freeman";
  //  std::cin >> temp;
    file.open("file.json");
    file >> dict;
    for(int i = 0; i < 5; i++){
        if(dict[names[i]]["characters"] == temp)
            std::cout << dict[names[i]]["name"] << " ";
    }
    return 0;
}
