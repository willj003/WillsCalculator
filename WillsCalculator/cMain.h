#pragma once
#include "wx/wx.h"
#include "ButtonFactory.h"
#include "Processor.h"

class cMain:public wxFrame
{
public: 
	cMain();
	~cMain();
public:
	Processor* processorinstance = &Processor::GetInstance();
	wxTextCtrl* m_txtbx = nullptr;
	void OnButtonClicked(wxCommandEvent& evt);
	bool firstClick = true;
	void equalsclicked();
	void setTxtbx(std::string& _txtbx);
	wxDECLARE_EVENT_TABLE();
public:
	std::string DecToHex(std::string _txtbox);
	std::string HexToDec(std::string _txtbx);
	std::string DecToBinary(std::string _txtbx);
	std::string BinaryToDec(std::string _txtbx);
};

