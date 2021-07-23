#include <iostream>
#include <cstring>
#include<algorithm>
#include<vector>
#include<map>
std::vector<std::string> morse  = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", ".-.-.-", "--..--", "..--..", ".----.", "-.-.--", "-..-.", "-.--.", "-.--.-", ".-...", "---...", "-.-.-.", "-...-", ".-.-.", "-....-", "..--.-", ".-..-.", "...-..-", ".--.-.", "...---..."};  
std::vector<std::string> ascii  = {"A",  "B",    "C",    "D",   "E", "F",    "G",   "H",    "I",  "J",    "K",   "L",    "M",  "N",  "O",   "P",    "Q",    "R",   "S",   "T", "U",   "V",    "W",   "X",    "Y",    "Z",    "0",     "1",     "2",     "3",     "4",     "5",     "6",     "7",     "8",     "9",     ".",      ",",      "?",      "'",      "!",      "/",     "(",     ")",      "&",     ":",      ";",      "=",     "+",     "-",      "_",      "\"",     "$",       "@",      "SOS"};

std::string decodeMorse(std::string morseCode) {
    // ToDo: Accept dots, dashes and spaces, return human-readable message
    std::string temp;
    //size_t n = morse.begin();
    std::string decoded;
    /*std::map<std::string, std::string> myMorse;
    std::transform(morse.begin(),morse.end(),ascii.begin(),std::inserter(myMorse, myMorse.end()), [] (std::string a, std::string b){
       std::make_pair(a,b);
    });
    */
   for( auto p : morseCode){
      
      if (p == ' '){
        auto n = std::find(morse.begin(), morse.end(), temp);
        int pos = std::distance(morse.begin(), n);
        decoded.append(ascii[pos]);
        temp.erase(temp.begin(), temp.end());
    
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
  std::cout << decodeMorse(OSO) << '\n';
  //printf("%s\n", decode_morse(OSO));
}
