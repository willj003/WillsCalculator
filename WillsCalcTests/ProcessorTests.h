#pragma once
#include <iostream>
#include "../WillsCalculator/Processor.h"
#include "../WillsCalculator/cMain.h"

class ProcessorTests
{
	Processor* processorinstance = &Processor::GetInstance();
	cMain* testAddress = new cMain();
	public:
	void Test1();
	void Test2();
	void Test3();
};

