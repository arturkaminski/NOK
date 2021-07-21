#include <iostream>
#include <string>
#include <vector>
#include <map>
std::string morse [] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", ".-.-.-", "--..--", "..--..", ".----.", "-.-.--", "-..-.", "-.--.", "-.--.-", ".-...", "---...", "-.-.-.", "-...-", ".-.-.", "-....-", "..--.-", ".-..-.", "...-..-", ".--.-.", "...---..."};  
std::vector<std::string> ascii = {"A",  "B",    "C",    "D",   "E", "F",    "G",   "H",    "I",  "J",    "K",   "L",    "M",  "N",  "O",   "P",    "Q",    "R",   "S",   "T", "U",   "V",    "W",   "X",    "Y",    "Z",    "0",     "1",     "2",     "3",     "4",     "5",     "6",     "7",     "8",     "9",     ".",      ",",      "?",      "'",      "!",      "/",     "(",     ")",      "&",     ":",      ";",      "=",     "+",     "-",      "_",      "\"",     "$",       "@",      "SOS"};

std::string decode_morse(std::string morse_code) {

    //  <----  hajime!
 
std::string word(morse_code);
std::string ascii_return;
//char *ascii_return = new (sizeof (char )* 100);
   auto found = word.find_first_of(*morse); 
  
  if(found != std::string::npos ){
	  //std::cout << *it;
    std::cout << found << '\n';
    found = word.find_first_of(*morse, found +1);
    //ascii_return.push_back(ascii[it]);
  }
  printf("\n");
//printf("ascii return %s\n", ascii_return); 
 return ascii_return;
}
int main(){
	std::string OSO = {"--- ... ---   .- .-."};
	decode_morse(OSO);
  //printf("%s\n", decode_morse(OSO));
}
