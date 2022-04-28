// WillsCalcTests.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../WillsCalculator/cMain.h"
#include "../WillsCalculator/cApp.h"
#include "../WillsCalculator/ButtonFactory.h"
#include "../WillsCalculator/IBaseCommand.h"
#include "../WillsCalculator/Processor.h"
#include "ButtonFactoryTest.h"
#include "ProcessorTests.h"

int main()
{
    ProcessorTests tester = ProcessorTests();
    ButtonFactoryTest buttonTest = ButtonFactoryTest();

    tester.Test1();
    tester.Test2();
    tester.Test3();
    tester.Test4();
    tester.Test5();
    tester.Test6();
    tester.Test7();
    tester.Test8();
    tester.Test9();
    tester.Test10();
    buttonTest.test1();
    buttonTest.test2();
    buttonTest.test3();
    buttonTest.test4();
    buttonTest.test5();
    buttonTest.test6();
    buttonTest.test7();
    buttonTest.test8();
    buttonTest.test9();
    buttonTest.test10();    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
