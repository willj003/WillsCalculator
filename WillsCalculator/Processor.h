#pragma once
#include <string>

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

private:
	Processor() {};
	
	
};

