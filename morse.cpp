#include <iostream>
#include <string>
#include <map>
const char *morse[55] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", ".-.-.-", "--..--", "..--..", ".----.", "-.-.--", "-..-.", "-.--.", "-.--.-", ".-...", "---...", "-.-.-.", "-...-", ".-.-.", "-....-", "..--.-", ".-..-.", "...-..-", ".--.-.", "...---..."};  
const char *ascii[55] = {"A",  "B",    "C",    "D",   "E", "F",    "G",   "H",    "I",  "J",    "K",   "L",    "M",  "N",  "O",   "P",    "Q",    "R",   "S",   "T", "U",   "V",    "W",   "X",    "Y",    "Z",    "0",     "1",     "2",     "3",     "4",     "5",     "6",     "7",     "8",     "9",     ".",      ",",      "?",      "'",      "!",      "/",     "(",     ")",      "&",     ":",      ";",      "=",     "+",     "-",      "_",      "\"",     "$",       "@",      "SOS"};

std::string decode_morse(const char* morse_code) {

    //  <----  hajime!
 
std::string word(morse_code);
std::string ascii_return;
//char *ascii_return = new (sizeof (char )* 100);
  std::size_t found = word.find_first_of(*morse);
  for(found != std::string::npos){
	  std::cout << *it;
   // found = word.find_first_of(*morse, found + 1);
  }
  printf("\n");
//printf("ascii return %s\n", ascii_return); 
 return ascii_return;
}
int main(){
	const char* OSO = "--- ... ---   .- .-.";
	decode_morse(OSO);
  //printf("%s\n", decode_morse(OSO));
}
