#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <cmath>
#include "lexer.h"
#include "function.h"

#define BUFFER 128

void lex(std::string line, std::vector <std::string> &Token)
{
	std::string token, token_cache, skip;
	std::string _Exec, _Val;	

	// Stringstream for Tokenizing process
	std::stringstream checkLine(line);

	// Tokenizing the code for further processing
	while(checkLine.good())
	{
		std::getline(checkLine, token, ';');
		Token.push_back(token);
	}
	
	for(int i=0;i<Token.size();i++)
	{
		std::string PROC = Token[i];
		for(int j=0;j<PROC.length();j++)
		{
			if(PROC[j]==':')
			{
				_Exec=PROC.substr(0, j);
				_Val=PROC.substr(j+1, PROC.length());
				Process(_Exec, _Val, Token.size());
			}
		}
	}

	
	

}
