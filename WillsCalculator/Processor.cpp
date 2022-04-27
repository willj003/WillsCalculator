#include "Processor.h"

//Processor Processor::s_Instance;

int Processor::equalsClicked(const std::string& txtbx)
{
	std::string left;
	std::string right;
	int answer;
	
	
	if (txtbx.find("+"))
	{
		int n = txtbx.find("+");
		left = txtbx.substr(0, n);
		right = txtbx.substr(n + 1, txtbx.length());
		answer = std::atoi(left.c_str()) + std::atoi(right.c_str());
		
	}	
	else if (txtbx.find("-"))
	{	
		int n = txtbx.find("-");
		left = txtbx.substr(0, n);
		right = txtbx.substr(n + 1, txtbx.length());
		answer = std::atoi(left.c_str()) - std::atoi(right.c_str());

	}
	else if (txtbx.find("X"))
	{
		int n = txtbx.find("X");
		left = txtbx.substr(0, n);
		right = txtbx.substr(n + 1, txtbx.length());
		answer = std::atoi(left.c_str()) * std::atoi(right.c_str());

	}
	else if (txtbx.find("/"))
	{
		int n = txtbx.find("/");
		left = txtbx.substr(0, n);
		right = txtbx.substr(n + 1, txtbx.length());
		answer = std::atoi(left.c_str()) / std::atoi(right.c_str());
		

	}
	if (txtbx.find("%"))
	{
		int n = txtbx.find("%");
		left = txtbx.substr(0, n);
		right = txtbx.substr(n + 1, txtbx.length());
		answer = std::atoi(left.c_str()) % std::atoi(right.c_str());
	}
	return answer;
}
