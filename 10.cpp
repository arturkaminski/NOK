#include<iostream>
#include<vector>
#include<string>

int main(){



    int n = 3;
    std::vector<int> x = { 2,3,3,1,3,4,5,2,1,4};
    for( int i : x){
        if(i > n){ 
        std::cout << i << " ";
        } 
    }
        std::cout << "\n";
        std::string vowel{"aeiou"};
        std::string a{"Trust me I am an engineer"};
        while (a.find_first_of(vowel) != std::string::npos){
            std::cout << a[a.find_first_of(vowel)]  ;
        }
        std::cout << "\n";


    return 0;
}
