#include "Processor.h"



int Processor::equalsClicked(const std::string& txtbx)
{
	std::string left;
	std::string right;
	std::string tempTxtBox = txtbx;
	int answer = 0;
	for (size_t i = 0; i < operators.size(); i++)
	
	{
		if (operators[i] == '+')
		{
			AddCommand* add = new AddCommand();
			answer = add->execute(tempTxtBox);
			tempTxtBox = add->eraseFront(tempTxtBox);
			if (OperatorCheck(tempTxtBox)) {
				tempTxtBox = std::to_string(answer) + tempTxtBox;
			}
		}
		else if (operators[i] == '-')
		{
			SubtractCommand* sub = new SubtractCommand();
			answer = sub->execute(tempTxtBox);
			tempTxtBox = sub->eraseFront(tempTxtBox);
			if (OperatorCheck(tempTxtBox)) {
				tempTxtBox = std::to_string(answer) + tempTxtBox;
			}

		}
		else if (operators[i] == 'X')
		{
			MultCommand* mult = new MultCommand();
			answer = mult->execute(tempTxtBox);
			tempTxtBox = mult->eraseFront(tempTxtBox);
			if (OperatorCheck(tempTxtBox)) {
				tempTxtBox = std::to_string(answer) + tempTxtBox;
			}

		}
		else if (operators[i] == '/')
		{
			DivCommand* div = new DivCommand();
			answer = div->execute(tempTxtBox);
			tempTxtBox = div->eraseFront(tempTxtBox);
			if (OperatorCheck(tempTxtBox)) {
				tempTxtBox = std::to_string(answer) + tempTxtBox;
			}

		}
		else if (operators[i] == '%')
		{
			ModCommand* mod = new ModCommand();
			answer = mod->execute(tempTxtBox);
			tempTxtBox = mod->eraseFront(tempTxtBox);
			if (OperatorCheck(tempTxtBox)) {
				tempTxtBox = std::to_string(answer) + tempTxtBox;
			}
		}
		
}
	operators.clear();
	return answer;
}

void Processor::addToOperators(char op)
{
	operators.push_back(op);
}

bool Processor::OperatorCheck(const std::string& txtbx)
{
	if (txtbx.find("+") != std::string::npos || txtbx.find("-") != std::string::npos
		|| txtbx.find("X") != std::string::npos || txtbx.find("/") != std::string::npos
		|| txtbx.find("%") != std::string::npos)
	{
		return true;
	}
	return false;
}
