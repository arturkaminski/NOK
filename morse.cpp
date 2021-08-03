#include <iostream>
#include <cstring>
#include <algorithm>
#include<vector>
#include<bits/stdc++.h>
std::vector<std::string> morse  = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", ".-.-.-", "--..--", "..--..", ".----.", "-.-.--", "-..-.", "-.--.", "-.--.-", ".-...", "---...", "-.-.-.", "-...-", ".-.-.", "-....-", "..--.-", ".-..-.", "...-..-", ".--.-.", "...---..."};  
std::vector<std::string> ascii  = {"A",  "B",    "C",    "D",   "E", "F",    "G",   "H",    "I",  "J",    "K",   "L",    "M",  "N",  "O",   "P",    "Q",    "R",   "S",   "T", "U",   "V",    "W",   "X",    "Y",    "Z",    "0",     "1",     "2",     "3",     "4",     "5",     "6",     "7",     "8",     "9",     ".",      ",",      "?",      "'",      "!",      "/",     "(",     ")",      "&",     ":",      ";",      "=",     "+",     "-",      "_",      "\"",     "$",       "@",      "SOS"};
std::string word(std::string morseCode){
    size_t pos =0;
    std::string word;
    std::string space = "   ";
    std::string token = morseCode.substr(0, morseCode.find(space));
    std::cout << token << '\n';
    morseCode.erase(0, morseCode.find(space) + space.length());
    return word;
}

std::string decodeMorse(std::string morseCode){
    std::string temp;
    std::string decoded;
    std::vector<std::string>::iterator n = morse.begin();
    for( auto p : morseCode){
        if (p== ' '){
            n = std::find(morse.begin(), morse.end(), temp);
            if (n == morse.end()){
                temp.erase(temp.begin(), temp.end());
            }
            else{
                int pos = std::distance(morse.begin(), n);
                decoded.append(ascii[pos]);
                temp.erase(temp.begin(), temp.end());
            }
            
        }
        else{
            temp.push_back(p);
        }
    }
    std::cout << "\n";
    return decoded;
}
int main(){
    std::string OSO = {" --- ... ---   .- .-. "};
    std::string OSX = {" .- .-. - ..- .-.   .-. "};


   // std::cout << "decoded \n";
   // std::cout << decodeMorse(OSO) << '\n';
   // std::cout << decodeMorse(OSX) << '\n';
    word(OSO);

}
