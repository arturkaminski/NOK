#include <iostream>
#include <cstring>
#include<algorithm>
#include<vector>
std::vector<std::string> morse  = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", ".-.-.-", "--..--", "..--..", ".----.", "-.-.--", "-..-.", "-.--.", "-.--.-", ".-...", "---...", "-.-.-.", "-...-", ".-.-.", "-....-", "..--.-", ".-..-.", "...-..-", ".--.-.", "...---..."};  
std::vector<char> ascii  = {"A",  "B",    "C",    "D",   "E", "F",    "G",   "H",    "I",  "J",    "K",   "L",    "M",  "N",  "O",   "P",    "Q",    "R",   "S",   "T", "U",   "V",    "W",   "X",    "Y",    "Z",    "0",     "1",     "2",     "3",     "4",     "5",     "6",     "7",     "8",     "9",     ".",      ",",      "?",      "'",      "!",      "/",     "(",     ")",      "&",     ":",      ";",      "=",     "+",     "-",      "_",      "\"",     "$",       "@",      "SOS"};

std::string decodeMorse(std::string morseCode) {
    // ToDo: Accept dots, dashes and spaces, return human-readable message
    std::string temp;
    auto n = morse.begin();
    std::string decoded;
    for( const char p : morseCode){
      
      if (p == ' '){
        n = std::find(morse.begin(), morse.end(), temp);
        decoded.push_back(ascii[n];
        temp.erase(temp.begin(), temp.end());
        std::cout << '\n';
      }
      else{
          temp.push_back(p);
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
