#include<iostream>
#include <string>


std::string rot13(std::string msg){
    std::string newMsg;
    int l = msg.length();
    int i=0;
    while (i < l){
        int x = msg.at(i);
        if (x >= 'a'){
            x = x + 13;
            if(x > 'z'){
                x = x - 26; 
                char c(x);
                std::cout << "if "<< c << '\n';
                newMsg.push_back(c);
            }
            else{
                char c(x);
                std::cout << "if "<< c << '\n';
                newMsg.push_back(c);
            }
        }
        else if (x > 'A'){
            x = x + 13;
            if(x>'Z'){
                x = x -26;
                char c(x);
                std::cout << "if "<< c << '\n';
                newMsg.push_back(c);
            }
            else{
            char c(x);
            newMsg.push_back(c);
            }
        }
        else {
            char c(x);
            newMsg.push_back(c);
        }
        i++;
    }
    return newMsg;
}
int main(){
    std::cout << rot13("Ruby is cool!") << "\n";
    std::cout << rot13("Test") << "\n";
}
