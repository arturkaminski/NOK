#include<iostream>
#include <map>
#include <string>
#include<algorithm>

std::map<char, unsigned> count(const std::string& string) {
  int strS = string.length();
  std::map<char, unsigned> listL;
  char c;
  unsigned int x =0;
  for (int i = 64 ; i < 122 ;i++){
    c = i;
    //std::cout << c << "\n";
    x = std::count(string.begin(), string.end(), c);
    if(x){
        listL[c]=x; 
        std::cout << x << " : " << c << "\n";
    }
    
  }  
  return listL;
}
int main(){
    count("aba");
    // to co skomentowane na dole powinno wydrukowac map ale pokazuje blad, program dziala na stronie z testami tylko nie umie tego wydrukowac
    /*
    for(std::map<char, unsigned>::const_iterator it = count("aba").begin(); it != count("aba").end(); ++it){
        std::cout << it->first << " " << it->second.first << "\n";
    }
    */
    //druga metoda drukowania tez nie diala
    /*
    for(auto elem : count("aba"){
            
            std::cout << elem.first << " "  << elem.second.first << "\n";
            }
            */
}
