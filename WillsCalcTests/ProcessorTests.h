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
	void Test4();
	void Test5();
	void Test6();
	void Test7();
	void Test8();
	void Test9();
	void Test10();
};

