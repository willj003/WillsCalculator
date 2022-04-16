#pragma once
#include "wx/wx.h"

class cMain:public wxFrame
{
public: 
	cMain();
	~cMain();
public:
	wxButton* equalsBtn = nullptr;
	wxTextCtrl* m_txtbx = nullptr;
	wxButton* btn0 = nullptr;
	wxButton* btn1 = nullptr;
	wxButton* btn2 = nullptr;
	wxButton* btn3 = nullptr;
	wxButton* btn4 = nullptr;
	wxButton* btn5 = nullptr;
	wxButton* btn6 = nullptr;
	wxButton* btn7 = nullptr;
	wxButton* btn8 = nullptr;
	wxButton* btn9 = nullptr;
	wxButton* divideBtn = nullptr;
	wxButton* multiplyBtn = nullptr;
	wxButton* addBtn = nullptr;
	wxButton* subtractBtn = nullptr;
	wxButton* modBtn = nullptr;
	wxButton* binBtn = nullptr;
	wxButton* decimalBtn = nullptr;
	wxButton* hexBtn = nullptr;
	wxButton* clearBtn = nullptr;
	void OnButtonClicked(wxCommandEvent& evt);
	bool firstClick = true;
	void equalsclicked();
	wxString txtbx;
	wxDECLARE_EVENT_TABLE();


	
};

