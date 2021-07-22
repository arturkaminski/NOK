#include <iostream>
#include <cstring>
#include<algorithm>
#include<vector>
std::vector<std::string> morse  = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", ".-.-.-", "--..--", "..--..", ".----.", "-.-.--", "-..-.", "-.--.", "-.--.-", ".-...", "---...", "-.-.-.", "-...-", ".-.-.", "-....-", "..--.-", ".-..-.", "...-..-", ".--.-.", "...---..."};  
std::string ascii [] = {"A",  "B",    "C",    "D",   "E", "F",    "G",   "H",    "I",  "J",    "K",   "L",    "M",  "N",  "O",   "P",    "Q",    "R",   "S",   "T", "U",   "V",    "W",   "X",    "Y",    "Z",    "0",     "1",     "2",     "3",     "4",     "5",     "6",     "7",     "8",     "9",     ".",      ",",      "?",      "'",      "!",      "/",     "(",     ")",      "&",     ":",      ";",      "=",     "+",     "-",      "_",      "\"",     "$",       "@",      "SOS"};

std::string decodeMorse(std::string morseCode) {
    // ToDo: Accept dots, dashes and spaces, return human-readable message
    auto n = morse.begin();
    std::string decoded;
    for( auto p : morseCode){
      
      if (p == ' '){
        
        std::cout << '\n';
      }
      else{
         n = std::find(morse.begin(), morse.end(), p);
        decoded.push_back(ascii[n]);
      }
    }
    std::cout << "\n";
    return decoded;
}
int main(){
    std::string OSO = {"--- ... ---   .- .-."};

  std::cout << "decoded \n";
  std::cout << 	decodeMorse(OSO) << '\n';
  //printf("%s\n", decode_morse(OSO));
}
