#include <iostream>
#include <vector>

    int main(){
    

    std::vector<std::pair<int, std::string>> output;
    
    output.push_back(std::make_pair(1,"victor"));
    output.push_back(std::make_pair(2,"gabriel"));
    output.push_back(std::make_pair(3,"martins"));
   
    
    for(int i = 0; i < output.size(); i++)
    {
     std::cout << output[i].first << ", " << output[i].second << std::endl;
    }
    }
