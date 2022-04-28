#pragma once
#include "../WillsCalculator/ButtonFactory.h"
#include "../WillsCalculator/cMain.h"
#include <iostream>

class ButtonFactoryTest
{
	wxButton* testButton = nullptr;
	cMain* testAddress = new cMain();
	ButtonFactory testFactory = ButtonFactory();
public:
	void test1();
};

