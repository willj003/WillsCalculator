#include "ProcessorTests.h"

void ProcessorTests::Test1()
{
	std::string equation = "5X6+4-10";
	processorinstance->addToOperators('X');
	processorinstance->addToOperators('+');
	processorinstance->addToOperators('-');
	int answer = processorinstance->equalsClicked(equation);
	if (answer == 24)
	{
		std::cout << "Processor Test 1 Pass" << std::endl;
	}
	
}

void ProcessorTests::Test2()
{
	std::string temp = testAddress->DecToHex("1264");
	if (temp == "0x4F0") {
		std::cout << "Processor Test 2 Passed" << std::endl;
	}
	else {
		std::cout << temp << std::endl;
	}
}

void ProcessorTests::Test3()
{
	std::string temp = testAddress->HexToDec("0xF23");
	if (temp == "3875") {
		std::cout << "Processor Test 3 Passed" << std::endl;
	}
	else {
		std::cout << temp << std::endl;
	}
}
