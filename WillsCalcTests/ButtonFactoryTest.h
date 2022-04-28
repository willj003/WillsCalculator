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
	void test2();
	void test3();
	void test4();
	void test5();
	void test6();
	void test7();
	void test8();
	void test9();
	void test10();
};

