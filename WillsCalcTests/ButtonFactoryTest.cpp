#include "ButtonFactoryTest.h"

void ButtonFactoryTest::test1()
{
	testButton = testFactory.createaddBtn(testAddress);
	if (testButton->GetId() == 10020)
	{
		std::cout << "Button Factory Test 1 Pass" << std::endl;
	}
}

void ButtonFactoryTest::test2()
{
	testButton = testFactory.createsubtractBtn(testAddress);
	if (testButton->GetId() == 10021)
	{
		std::cout << "Button Factory Test 2 Passed" << std::endl;
	}
}

void ButtonFactoryTest::test3()
{
	testButton = testFactory.createhexBtn(testAddress);
	if (testButton->GetId() == 10014)
	{
		std::cout << "Button Factory Test 3 Passed" << std::endl;
	}
}

void ButtonFactoryTest::test4()
{
	testButton = testFactory.createdivideBtn(testAddress);
	if (testButton->GetId() == 10013)
	{
		std::cout << "Button Factory Test 4 Passed" << std::endl;
	}
}

void ButtonFactoryTest::test5()
{
	testButton = testFactory.createclearBtn(testAddress);
	if (testButton->GetId() == 10016)
	{
		std::cout << "Button Factory Test 5 Passed" << std::endl;
	}
}

void ButtonFactoryTest::test6()
{
	testButton = testFactory.createmodBtn(testAddress);
	if (testButton->GetId() == 10017)
	{
		std::cout << "Button Factory Test 6 Passed" << std::endl;
	}
}

void ButtonFactoryTest::test7()
{
	testButton = testFactory.createequalsbtn(testAddress);
	if (testButton->GetId() == 10010)
	{
		std::cout << "Button Factory Test 7 Passed" << std::endl;
	}
}

void ButtonFactoryTest::test8()
{
	testButton = testFactory.createbtn5(testAddress);
	if (testButton->GetId() == 10005)
	{
		std::cout << "Button Factory Test 8 Passed" << std::endl;
	}
}

void ButtonFactoryTest::test9()
{
	testButton = testFactory.createbtn3(testAddress);
	if (testButton->GetId() == 10003)
	{
		std::cout << "Button Factory Test 9 Passed" << std::endl;
	}
}

void ButtonFactoryTest::test10()
{
	testButton = testFactory.createbtn0(testAddress);
	if (testButton->GetId() == 10000)
	{
		std::cout << "Button Factory Test 10 Passed" << std::endl;
	}
}
