#pragma once
#include <string>

class IBaseCommand
{public:
	virtual int execute(const std::string& txtbx) = 0;
	virtual std::string eraseFront(const std::string& txtbx) = 0;
protected:

	std::string left;
	std::string right;
	int answer = 0;
};
class AddCommand :public IBaseCommand
{
public:
	int execute(const std::string& txtbx)
	{
		int n = txtbx.find("+");
		left = txtbx.substr(0, n);
		right = txtbx.substr(n + 1, txtbx.length());
		answer = std::atoi(left.c_str()) + std::atoi(right.c_str());
		return answer;
	}
	std::string eraseFront(const std::string& txtbx)
	{
		std::string temp = txtbx;
		int n = txtbx.find("+");
		temp.erase(0, n+1);
		if (temp.find("+") != std::string::npos) {
			n = temp.find("+");
			temp.erase(0, n);
		}
		else if(temp.find("-") != std::string::npos) {
			n = temp.find("-");
			temp.erase(0, n);
		}
		else if(temp.find("X") != std::string::npos) {
			n = temp.find("X");
			temp.erase(0, n);
		}
		else if (temp.find("/") != std::string::npos) {
			n = temp.find("/");
			temp.erase(0, n);
		}
		else if (temp.find("%") != std::string::npos) {
			n = temp.find("%");
			temp.erase(0, n);
		}
		
		return temp;
	}
};
class SubtractCommand :public IBaseCommand
{
public:
	int execute(const std::string& txtbx)
	{
		int n = txtbx.find("-");
		left = txtbx.substr(0, n);
		right = txtbx.substr(n + 1, txtbx.length());
		answer = std::atoi(left.c_str()) - std::atoi(right.c_str());
		return answer;
	}
	std::string eraseFront(const std::string& txtbx)
	{
		std::string temp = txtbx;
		int n = txtbx.find("-");
		temp.erase(0, n + 1);
		if (temp.find("+") != std::string::npos) {
			n = temp.find("+");
			temp.erase(0, n);
		}
		else if (temp.find("-") != std::string::npos) {
			n = temp.find("-");
			temp.erase(0, n);
		}
		else if (temp.find("X") != std::string::npos) {
			n = temp.find("X");
			temp.erase(0, n);
		}
		else if (temp.find("/") != std::string::npos) {
			n = temp.find("/");
			temp.erase(0, n);
		}
		else if (temp.find("%") != std::string::npos) {
			n = temp.find("%");
			temp.erase(0, n);
		}

		return temp;
	}
	
};
class MultCommand :public IBaseCommand
{
public:
	int execute(const std::string& txtbx)
	{
		int n = txtbx.find("X");
		left = txtbx.substr(0, n);
		right = txtbx.substr(n + 1, txtbx.length());
		answer = std::atoi(left.c_str()) * std::atoi(right.c_str());
		return answer;
	}
	std::string eraseFront(const std::string& txtbx)
	{
		std::string temp = txtbx;
		int n = txtbx.find("X");
		temp.erase(0, n + 1);
		if (temp.find("+") != std::string::npos) {
			n = temp.find("+");
			temp.erase(0, n);
		}
		else if (temp.find("-") != std::string::npos) {
			n = temp.find("-");
			temp.erase(0, n);
		}
		else if (temp.find("X") != std::string::npos) {
			n = temp.find("X");
			temp.erase(0, n);
		}
		else if (temp.find("/") != std::string::npos) {
			n = temp.find("/");
			temp.erase(0, n);
		}
		else if (temp.find("%") != std::string::npos) {
			n = temp.find("%");
			temp.erase(0, n);
		}
		return temp;
	}
};
class DivCommand :public IBaseCommand
{
public:
	int execute(const std::string& txtbx)
	{
		int n = txtbx.find("/");
		left = txtbx.substr(0, n);
		right = txtbx.substr(n + 1, txtbx.length());
		answer = std::atoi(left.c_str()) / std::atoi(right.c_str());
		return answer;
	}
	std::string eraseFront(const std::string& txtbx)
	{
		std::string temp = txtbx;
		int n = txtbx.find("/");
		temp.erase(0, n + 1);
		if (temp.find("+") != std::string::npos) {
			n = temp.find("+");
			temp.erase(0, n);
		}
		else if (temp.find("-") != std::string::npos) {
			n = temp.find("-");
			temp.erase(0, n);
		}
		else if (temp.find("X") != std::string::npos) {
			n = temp.find("X");
			temp.erase(0, n);
		}
		else if (temp.find("/") != std::string::npos) {
			n = temp.find("/");
			temp.erase(0, n);
		}
		else if (temp.find("%") != std::string::npos) {
			n = temp.find("%");
			temp.erase(0, n);
		}

		return temp;
	}
};
class ModCommand :public IBaseCommand
{
public:
	int execute(const std::string& txtbx)
	{
		int n = txtbx.find("%");
		left = txtbx.substr(0, n);
		right = txtbx.substr(n + 1, txtbx.length());
		answer = std::atoi(left.c_str()) % std::atoi(right.c_str());
		return answer;
	}
	std::string eraseFront(const std::string& txtbx)
	{
		std::string temp = txtbx;
		int n = txtbx.find("%");
		temp.erase(0, n + 1);
		if (temp.find("+") != std::string::npos) {
			n = temp.find("+");
			temp.erase(0, n);
		}
		else if (temp.find("-") != std::string::npos) {
			n = temp.find("-");
			temp.erase(0, n);
		}
		else if (temp.find("X") != std::string::npos) {
			n = temp.find("X");
			temp.erase(0, n);
		}
		else if (temp.find("/") != std::string::npos) {
			n = temp.find("/");
			temp.erase(0, n);
		}
		else if (temp.find("%") != std::string::npos) {
			n = temp.find("%");
			temp.erase(0, n);
		}

		return temp;
	}
};