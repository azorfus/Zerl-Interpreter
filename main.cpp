#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <regex>
#include "lexer.h"

#define BUFFER 128

std::vector <std::string> Token = {};
std::vector <std::string> STRINGprnt = {};
std::string FileIL;


int main(int argc, char* argv[])
{

	std::string fileString;

	std::string input;

	/*std::fstream FileSTR(argv[1], std::fstream::in);
	std::getline(FileSTR, FileIL, '\0');*/

	std::ifstream file(argv[1]); //taking file as inputstream
    std::string FileIL;
    if(file) {
       std::ostringstream ss;
       ss << file.rdbuf(); // reading data
       FileIL = ss.str();
    }
      
    std::regex newlines_re("\n+");
    std::string result = std::regex_replace(FileIL, newlines_re, "");
	lex(result, Token);

	//FileSTR.close();

	return 0;
}
