#include<iostream>
#include <map>
#include <string>

std::map<char, unsigned> count(const std::string& string) {
    std::map<char, unsigned> M;
    size_t sLength = string.length();
    for(size_t i =0; i < sLength; i++){
    if(M.find(string[i])== M.end()){
        M.insert(std::make_pair(string[i], 1));
    } 
    else{
        M[string[i]]++;
    }
  }  
  return M;
}
int main(){
    count("aba");
    
    for(auto elem : count("aba")){
            
            std::cout << elem.first << " "  << elem.second << "\n";
            }
            
}
