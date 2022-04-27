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
	wxDECLARE_EVENT_TABLE();
		
};

