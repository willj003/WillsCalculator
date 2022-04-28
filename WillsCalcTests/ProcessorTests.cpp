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
void ProcessorTests::Test4()
{
	std::string temp = testAddress->BinaryToDec("100010");
	if (temp == "34") {
		std::cout << "Processor Test 4 Passed" << std::endl;
	}
	else {
		std::cout << temp << std::endl;
	}
}
void ProcessorTests::Test5()
{
	std::string temp = testAddress->DecToBinary("2452");
	if (temp == "100110010100") {
		std::cout << "Processor Test 5 Passed" << std::endl;
	}
	else {
		std::cout << temp << std::endl;
	}
}
void ProcessorTests::Test6()
{
	std::string equation = "19+23X42-15";
	processorinstance->addToOperators('+');
	processorinstance->addToOperators('X');
	processorinstance->addToOperators('-');
	int answer = processorinstance->equalsClicked(equation);
	if (answer == 1749)
	{
		std::cout << "Processor Test 6 Passed" << std::endl;
	}

}
void ProcessorTests::Test7()
{
	std::string equation = "36/12";
	processorinstance->addToOperators('/');
	int answer = processorinstance->equalsClicked(equation);
	if (answer == 3)
	{
		std::cout << "Processor Test 7 Passed" << std::endl;
	}

}
void ProcessorTests::Test8()
{
	std::string equation = "46+23/3";
	processorinstance->addToOperators('+');
	processorinstance->addToOperators('/');
	
	int answer = processorinstance->equalsClicked(equation);
	if (answer == 23)
	{
		std::cout << "Processor Test 8 Passed" << std::endl;
	}

}
void ProcessorTests::Test9()
{
	std::string equation = "46-23X3";
	processorinstance->addToOperators('-');
	processorinstance->addToOperators('X');

	int answer = processorinstance->equalsClicked(equation);
	if (answer == 69)
	{
		std::cout << "Processor Test 9 Passed" << std::endl;
	}

}
void ProcessorTests::Test10()
{
	std::string equation = "6+4X9-10";
	processorinstance->addToOperators('+');
	processorinstance->addToOperators('X');
	processorinstance->addToOperators('-');
	int answer = processorinstance->equalsClicked(equation);
	if (answer == 80)
	{
		std::cout << "Processor Test 10 Passed" << std::endl;
	}

}