#include "ButtonFactoryTest.h"

void ButtonFactoryTest::test1()
{
	testButton = testFactory.createaddBtn(testAddress);
	if (testButton->GetId() == 10020)
	{
		std::cout << "Button Factory Test 1 Pass" << std::endl;
	}
}
