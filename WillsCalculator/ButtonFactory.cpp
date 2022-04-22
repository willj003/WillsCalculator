#include "ButtonFactory.h"

std::vector<wxButton*> ButtonFactory::MakeCalculator(wxWindow* Main)
{
	std::vector<wxButton*>calculator;
	calculator.push_back(createbtn0(Main));
	calculator.push_back(createbtn1(Main));
	calculator.push_back(createbtn2(Main));
	calculator.push_back(createbtn3(Main));
	calculator.push_back(createbtn4(Main));
	calculator.push_back(createbtn5(Main));
	calculator.push_back(createbtn6(Main));
	calculator.push_back(createbtn7(Main));
	calculator.push_back(createbtn8(Main));
	calculator.push_back(createbtn9(Main));
	calculator.push_back(createdivideBtn(Main));
	calculator.push_back(createmultiplyBtn(Main));
	calculator.push_back(createaddBtn(Main));
	calculator.push_back(createsubtractBtn(Main));
	calculator.push_back(createmodBtn(Main));
	calculator.push_back(createbinBtn(Main));
	calculator.push_back(createhexBtn(Main));
	calculator.push_back(createdecimalBtn(Main));
	calculator.push_back(createclearBtn(Main));
	calculator.push_back(createequalsbtn(Main));
	return calculator;
}

wxButton* ButtonFactory::createequalsbtn(wxWindow* Main)
{
	wxButton* equalsBtn = nullptr;
	equalsBtn = new wxButton(Main, 10010, "=", wxPoint(105, 305), wxSize(50, 50));
	equalsBtn->SetBackgroundColour(wxColor(0, 255, 0));
	return equalsBtn;
}

wxButton* ButtonFactory::createbtn0(wxWindow* Main)
{
	wxButton* btn0 = nullptr;
	btn0 = new wxButton(Main, 10000, "0", wxPoint(55, 305), wxSize(50, 50));
	btn0->SetBackgroundColour(wxColor(51, 255, 255));
	return btn0;
}

wxButton* ButtonFactory::createbtn1(wxWindow* Main)
{
	wxButton* btn1 = nullptr;
	btn1 = new wxButton(Main, 10001, "1", wxPoint(5, 255), wxSize(50, 50));
	btn1->SetBackgroundColour(wxColor(51, 255, 255));
	return btn1;
}

wxButton* ButtonFactory::createbtn2(wxWindow* Main)
{	
	wxButton* btn2 = nullptr;
	btn2 = new wxButton(Main, 10002, "2", wxPoint(55, 255), wxSize(50, 50));
	btn2->SetBackgroundColour(wxColor(51, 255, 255));
	return btn2;
}

wxButton* ButtonFactory::createbtn3(wxWindow* Main)
{
	wxButton* btn3 = nullptr;
	btn3 = new wxButton(Main, 10003, "3", wxPoint(105, 255), wxSize(50, 50));
	btn3->SetBackgroundColour(wxColor(51, 255, 255));
	return btn3;
}

wxButton* ButtonFactory::createbtn4(wxWindow* Main)
{
	wxButton* btn4 = nullptr;
	btn4 = new wxButton(Main, 10004, "4", wxPoint(5, 205), wxSize(50, 50));
	btn4->SetBackgroundColour(wxColor(51, 255, 255));
	return btn4;
}

wxButton* ButtonFactory::createbtn5(wxWindow* Main)
{
	wxButton* btn5 = nullptr;
	btn5 = new wxButton(Main, 10005, "5", wxPoint(55, 205), wxSize(50, 50));
	btn5->SetBackgroundColour(wxColor(51, 255, 255));
	return btn5;
}

wxButton* ButtonFactory::createbtn6(wxWindow* Main)
{
	wxButton* btn6 = nullptr;
	btn6 = new wxButton(Main, 10006, "6", wxPoint(105, 205), wxSize(50, 50));
	btn6->SetBackgroundColour(wxColor(51, 255, 255));
	return btn6;
}

wxButton* ButtonFactory::createbtn7(wxWindow* Main)
{
	wxButton* btn7 = nullptr;
	btn7 = new wxButton(Main, 10007,"7", wxPoint(5, 155), wxSize(50, 50));
	btn7->SetBackgroundColour(wxColor(51, 255, 255));
	return btn7;

}

wxButton* ButtonFactory::createbtn8(wxWindow* Main)
{
	wxButton* btn8 = nullptr;
	btn8 = new wxButton(Main, 10008, "8", wxPoint(55, 155), wxSize(50, 50));
	btn8->SetBackgroundColour(wxColor(51, 255, 255));
	return btn8;
}

wxButton* ButtonFactory::createbtn9(wxWindow* Main)
{
	wxButton* btn9 = nullptr;
	btn9 = new wxButton(Main, 10009, "9", wxPoint(105, 155), wxSize(50, 50));
	btn9->SetBackgroundColour(wxColor(51, 255, 255));
	return btn9;
}

wxButton* ButtonFactory::createdivideBtn(wxWindow* Main)
{
	wxButton* divideBtn = nullptr;
	divideBtn = new wxButton(Main, 10013, "/", wxPoint(205, 205), wxSize(50, 50));
	divideBtn->SetBackgroundColour(wxColor(255, 255, 51));
	return divideBtn;
}

wxButton* ButtonFactory::createmultiplyBtn(wxWindow* Main)
{
	wxButton* multiplyBtn = nullptr;
	multiplyBtn = new wxButton(Main, 10012, "X", wxPoint(155, 205), wxSize(50, 50));
	multiplyBtn->SetBackgroundColour(wxColor(255, 255, 51));
	return multiplyBtn;
}

wxButton* ButtonFactory::createaddBtn(wxWindow* Main)
{
	wxButton* addBtn = nullptr;
	addBtn = new wxButton(Main, 10020, "+", wxPoint(155, 155), wxSize(50, 50));
	addBtn->SetBackgroundColour(wxColor(255, 255, 51));
	return addBtn;
}

wxButton* ButtonFactory::createsubtractBtn(wxWindow* Main)
{
	wxButton* subtractBtn = nullptr;
	subtractBtn = new wxButton(Main, 10021, "-", wxPoint(205, 155), wxSize(50, 50));
	subtractBtn->SetBackgroundColour(wxColor(255, 255, 51));
	return subtractBtn;
}

wxButton* ButtonFactory::createmodBtn(wxWindow* Main)
{
	wxButton* modBtn = nullptr;
	modBtn = new wxButton(Main, 10017, "%", wxPoint(155, 305), wxSize(50, 50));
	modBtn->SetBackgroundColour(wxColor(255, 255, 51));
	return modBtn;
}

wxButton* ButtonFactory::createbinBtn(wxWindow* Main)
{
	wxButton* binBtn = nullptr;
	binBtn = new wxButton(Main, 10015, "Bin", wxPoint(155, 255), wxSize(50, 50));
	binBtn->SetBackgroundColour(wxColor(255, 255, 51));
	return binBtn;
}

wxButton* ButtonFactory::createdecimalBtn(wxWindow* Main)
{
	wxButton* decimalBtn = nullptr;
	decimalBtn = new wxButton(Main, 10019, "Dec", wxPoint(205, 305), wxSize(50, 50));
	decimalBtn->SetBackgroundColour(wxColor(255, 255, 51));
	return decimalBtn;
}

wxButton* ButtonFactory::createhexBtn(wxWindow* Main)
{
	wxButton* hexBtn = nullptr;
	hexBtn = new wxButton(Main, 10014, "Hex", wxPoint(205, 255), wxSize(50, 50));
	hexBtn->SetBackgroundColour(wxColor(255, 255, 51));
	return hexBtn;
}

wxButton* ButtonFactory::createclearBtn(wxWindow* Main)
{
	wxButton* clearBtn = nullptr;
	clearBtn = new wxButton(Main, 10016, "Clear", wxPoint(5, 305), wxSize(50, 50));
	clearBtn->SetBackgroundColour(wxColor(255, 51, 51));
	return clearBtn;
}
