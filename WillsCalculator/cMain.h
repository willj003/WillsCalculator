#pragma once
#include "wx/wx.h"
#include "ButtonFactory.h"

class cMain:public wxFrame
{
public: 
	cMain();
	~cMain();
public:
	
	wxTextCtrl* m_txtbx = nullptr;
	void OnButtonClicked(wxCommandEvent& evt);
	bool firstClick = true;
	void equalsclicked();
	wxString txtbx;
	wxDECLARE_EVENT_TABLE();
		
};

