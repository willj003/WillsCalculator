#pragma once
#include "wx/wx.h"

class ButtonFactory
{
public:
	static std::vector<wxButton*> MakeCalculator(wxWindow* Main);
	static wxButton* createequalsbtn(wxWindow* Main);
	static wxButton* createbtn0(wxWindow* Main);
	static wxButton* createbtn1(wxWindow* Main);
	static wxButton* createbtn2(wxWindow* Main);
	static wxButton* createbtn3(wxWindow* Main);
	static wxButton* createbtn4(wxWindow* Main);
	static wxButton* createbtn5(wxWindow* Main);
	static wxButton* createbtn6(wxWindow* Main);
	static wxButton* createbtn7(wxWindow* Main);
	static wxButton* createbtn8(wxWindow* Main);
	static wxButton* createbtn9(wxWindow* Main);
	static wxButton* createdivideBtn(wxWindow* Main);
	static wxButton* createmultiplyBtn(wxWindow* Main);
	static wxButton* createaddBtn(wxWindow* Main);
	static wxButton* createsubtractBtn(wxWindow* Main);
	static wxButton* createmodBtn(wxWindow* Main);
	static wxButton* createbinBtn(wxWindow* Main);
	static wxButton* createdecimalBtn(wxWindow* Main);
	static wxButton* createhexBtn(wxWindow* Main);
	static wxButton* createclearBtn(wxWindow* Main);
};

