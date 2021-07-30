#include <iostream>
#include <cstring>
#include <algorithm>
#include<vector>
std::vector<std::string> morse  = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", ".-.-.-", "--..--", "..--..", ".----.", "-.-.--", "-..-.", "-.--.", "-.--.-", ".-...", "---...", "-.-.-.", "-...-", ".-.-.", "-....-", "..--.-", ".-..-.", "...-..-", ".--.-.", "...---..."};  
std::vector<std::string> ascii  = {"A",  "B",    "C",    "D",   "E", "F",    "G",   "H",    "I",  "J",    "K",   "L",    "M",  "N",  "O",   "P",    "Q",    "R",   "S",   "T", "U",   "V",    "W",   "X",    "Y",    "Z",    "0",     "1",     "2",     "3",     "4",     "5",     "6",     "7",     "8",     "9",     ".",      ",",      "?",      "'",      "!",      "/",     "(",     ")",      "&",     ":",      ";",      "=",     "+",     "-",      "_",      "\"",     "$",       "@",      "SOS"};

std::string decodeMorse(std::string morseCode){
    std::string temp;
    std::string decoded;
    std::vector<std::string>::iterator n = morse.begin();
    std::cout << "first n: " << &n << "\n";
    for( auto p : morseCode){
        //std::cout << p;
        if (p== ' '){
            try{ 
                n = std::find(morse.begin(), morse.end(), temp);
                if (n == morse.end()){
                    throw temp;
                }
                else{
                    int pos = std::distance(morse.begin(), n);
                    decoded.append(ascii[pos]);
                    temp.erase(temp.begin(), temp.end());
                }
            }
            catch(std::string t){
                t.erase(temp.begin(), t.end());
                std::cout << "wrong string\n";
            }
        }
        else{
            temp.push_back(p);
        }
    }
    int pos = std::distance(morse.begin(), n);
    decoded.append(ascii[pos]);
    temp.erase(temp.begin(), temp.end());
    std::cout << "\n";
    return decoded;
}
int main(){
    std::string OSO = {" --- ... ---   .- .-."};
    std::string OSX = {" .- .-. - ..- .-.    .-."};

    std::cout << "decoded \n";
    std::cout << decodeMorse(OSO) << '\n';
    std::cout << decodeMorse(OSX) << '\n';
}
