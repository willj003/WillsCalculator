#pragma once
#include <string>
#include "IBaseCommand.h"
#include <vector>

class Processor
{
public:
	Processor(Processor const&) = delete;
	static Processor& GetInstance() 
	{
		static Processor instance;
		return instance;
	}
	int equalsClicked(const std::string& txtbx);
	std::vector<char> operators;
	
	void addToOperators(char op);
	bool OperatorCheck(const std::string& txtbx);
private:
	Processor() {};
	
};

