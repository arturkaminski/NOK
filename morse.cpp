#include <iostream>
#include <cstring>
#include <algorithm>
#include<vector>
#include<bits/stdc++.h>
std::vector<std::string> morse  = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", ".-.-.-", "--..--", "..--..", ".----.", "-.-.--", "-..-.", "-.--.", "-.--.-", ".-...", "---...", "-.-.-.", "-...-", ".-.-.", "-....-", "..--.-", ".-..-.", "...-..-", ".--.-.", "...---..."};  
std::vector<std::string> ascii  = {"A",  "B",    "C",    "D",   "E", "F",    "G",   "H",    "I",  "J",    "K",   "L",    "M",  "N",  "O",   "P",    "Q",    "R",   "S",   "T", "U",   "V",    "W",   "X",    "Y",    "Z",    "0",     "1",     "2",     "3",     "4",     "5",     "6",     "7",     "8",     "9",     ".",      ",",      "?",      "'",      "!",      "/",     "(",     ")",      "&",     ":",      ";",      "=",     "+",     "-",      "_",      "\"",     "$",       "@",      "SOS"};
std::string word(std::string morseCode);
std::string decodeMorse(std::string morseCode);


int main(){
    std::string OSO = {" --- ... ---   .- .-. - ..- .-.   .-."};
    std::string OSX = {" .- .-. - ..- .-.   .-. "};

   // std::cout << "decoded \n";
   // std::cout << decodeMorse(OSO) << '\n';
   // std::cout << decodeMorse(OSX) << '\n';
   std::cout << word(OSO) << "\n";
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
   //std::cout << decoded << "\n";
    return decoded;
}
std::string word(std::string morseCode){
    size_t pos =0;
    std::string word;
    std::string space = "   ";
    std::string returnSentence;
    while(( pos= morseCode.find(space)) != std::string::npos){     // find first position of the space 
        word = morseCode.substr(0, pos);                           // first word is from 0 till space
        word = word.append(" ");                                   // adding space for decoder to work properly
       // std::cout << word << '\n';
        returnSentence.append(decodeMorse(word));                   // creating return string
        returnSentence.append(" ");                                 // adding space betwen words in the return string
        morseCode.erase(0, pos + space.length());                   // deleting already translated word from initial string
    }
    morseCode.append(" ");                                          // adding space for decoder to last word in the string
    std::cout << morseCode << "\n";
    returnSentence.append(decodeMorse(morseCode));                  // adding last decoded word to returned string
    return returnSentence;
}

