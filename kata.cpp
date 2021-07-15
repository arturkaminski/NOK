#include<iostream>
#include <string>
#include<algorithm>
std::string disemvowel(const std::string& str) {
    // return
    char e;
    std::string newStr(str);
    std::cout << newStr << "\n";
    std::size_t it = newStr.find_first_of("aeiouAEIOU");
    while(it != std::string::npos){
        
        newStr[it] = '*';
      // newStr.erase(it);
       // std::cout << newStr << "\n";


     it = newStr.find_first_of("aeiouAEIOU", it + 1);
    }
      newStr.erase(std::remove(newStr.begin(), newStr.end(), '*'), newStr.end());
    return newStr;
}

int main(){


    std::string test= "This website is for losers LOL!";
    //disemvowel(test);
    std::cout << disemvowel(test) << "\n";

    std::string testA("sC&xU?]K$ze{<sq56Moh=K7[&!$X-'>D[#`"xL32l:`_D*V+zwzqo5=l.[#x]?0(@[K,P1:y3Nc_SgewaUf"(,eaz'r0*KS*A`XsWz1V");
    std::cout << disemvowel(testA) << "\n";
}
