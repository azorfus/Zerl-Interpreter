#include <iostream>
#include "function.h"

namespace proc
{
	std::string print="print";
	std::string input="input";
	std::string var="var";
	std::string _if="if";
	std::string elif="elif";
	std::string _else="else";
	std::string loop="loop";
}

namespace op
{
	char new_line = '\n';
	char tab = '\t';
	char add = '+';
	char sub = '-';
	char multiply = '*';
	char divide = '/';
	char srt_rp = '(';
	char end_rp = ')';
	char srt_cp = '{';
	char end_cp = '}';
}

void Process(std::string _Exec, std::string _Val, size_t ARR_size)
{
	if(_Exec==proc::print)
	{	
		if(_Val[0]=='"'&&_Val[_Val.length()-1]=='"')
		{
			std::string _ValSTR = _Val.substr(1, (_Val.length()-2));
			for(int i=0;i<_ValSTR.length();i++)
			{
				if(_ValSTR[i]==op::new_line)
				{
					std::cout<<"\n";
				}
				else if(_ValSTR[i]==op::tab)
				{
					std::cout<<"\t";
				}
				else
				{
					std::cout<<_Val[i];
				}
			}
		}
		else
		{
			std::cout<<_Val<<" : Not declared\n";
		}
	}
	else if(_Exec==proc::input)
	{

	}
	else
	{
		std::cout<<"\nKey Error\n";
	}

}
