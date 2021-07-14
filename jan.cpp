#include<iostream>

int main(){
    std::string a = "Trust me I am an engineer";
std::size_t found = a.find_first_of("aeiou");
        while (found!=std::string::npos)
        {
            std::cout << a[found];
            found=a.find_first_of("aeiou",found+1);
        }
}

