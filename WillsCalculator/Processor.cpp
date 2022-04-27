#include "Processor.h"



int Processor::equalsClicked(const std::string& txtbx)
{
	std::string left;
	std::string right;
	int answer = 0;
	
	
	if (txtbx.find("+")!=std::string::npos)
	{
		int n = txtbx.find("+");
		left = txtbx.substr(0, n);
		right = txtbx.substr(n + 1, txtbx.length());
		answer = std::atoi(left.c_str()) + std::atoi(right.c_str());
		
	}	
	else if (txtbx.find("-") != std::string::npos)
	{	
		int n = txtbx.find("-");
		left = txtbx.substr(0, n);
		right = txtbx.substr(n + 1, txtbx.length());
		answer = std::atoi(left.c_str()) - std::atoi(right.c_str());

	}
	else if (txtbx.find("X") != std::string::npos)
	{
		int n = txtbx.find("X");
		left = txtbx.substr(0, n);
		right = txtbx.substr(n + 1, txtbx.length());
		answer = std::atoi(left.c_str()) * std::atoi(right.c_str());

	}
	else if (txtbx.find("/") != std::string::npos)
	{
		int n = txtbx.find("/");
		left = txtbx.substr(0, n);
		right = txtbx.substr(n + 1, txtbx.length());
		answer = std::atoi(left.c_str()) / std::atoi(right.c_str());
		

	}
	else if (txtbx.find("%") != std::string::npos)
	{
		int n = txtbx.find("%");
		left = txtbx.substr(0, n);
		right = txtbx.substr(n + 1, txtbx.length());
		answer = std::atoi(left.c_str()) % std::atoi(right.c_str());
	}
	return answer;
}
