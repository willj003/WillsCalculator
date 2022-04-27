#include "cMain.h"

#include <vector>
wxBEGIN_EVENT_TABLE(cMain, wxFrame)
EVT_BUTTON(wxID_ANY, OnButtonClicked)
wxEND_EVENT_TABLE();

wxString txtbx;
cMain::cMain() :wxFrame(nullptr, wxID_ANY, "Wills Calculator!", wxPoint(30, 30), wxSize(275, 400))
{
	m_txtbx = new wxTextCtrl(this, 10011, "0", wxPoint(5, 5), wxSize(253, 150));
	ButtonFactory::MakeCalculator(this);	
};

cMain::~cMain()
{
		
}


void cMain::OnButtonClicked(wxCommandEvent& evt)
{
	
	if (firstClick && m_txtbx->GetLabelText() == "0")
	{
		m_txtbx->SetLabelText("");
	}
	if (evt.GetId() == 10020)
	{
		m_txtbx->AppendText("+");
		txtbx.append("+");
	}
	else if (evt.GetId() == 10007)
	{
		m_txtbx->AppendText("7");
		txtbx.append("7");
	}
	else if (evt.GetId() == 10008)
	{
		m_txtbx->AppendText("8");
		txtbx.append("8");
	}
	else if (evt.GetId() == 10009)
	{
		m_txtbx->AppendText("9");
		txtbx.append("9");
	}
	else if (evt.GetId() == 10006)
	{
		m_txtbx->AppendText("6");
		txtbx.append("6");
	}
	else if (evt.GetId() == 10005)
	{
		m_txtbx->AppendText("5");
		txtbx.append("5");
	}
	else if (evt.GetId() == 10004)
	{
		m_txtbx->AppendText("4");
		txtbx.append("4");
	}
	else if (evt.GetId() == 10003)
	{
		m_txtbx->AppendText("3");
		txtbx.append("3");
	}
	else if (evt.GetId() == 10002)
	{
		m_txtbx->AppendText("2");
		txtbx.append("2");
	}
	else if (evt.GetId() == 10001)
	{
		m_txtbx->AppendText("1");
		txtbx.append("1");
	}
	else if (evt.GetId() == 10010)
	{
		equalsclicked();
	}
	else if (evt.GetId() == 10021)
	{
		m_txtbx->AppendText("-");
		txtbx.append("-");
	}
	else if (evt.GetId() == 10012)
	{
		m_txtbx->AppendText("X");
		txtbx.append("X");
	}
	else if (evt.GetId() == 10013)
	{
		m_txtbx->AppendText("/");
		txtbx.append("/");
	}
	else if (evt.GetId() == 10017)
	{
		m_txtbx->AppendText("%");
		txtbx.append("%");
	}
	else if (evt.GetId() == 10016)
	{
		m_txtbx->SetLabelText("0");
		txtbx.clear();
	}
	else if (evt.GetId() == 10000)
	{
		m_txtbx->AppendText("0");
		txtbx.append("0");		
	}

	m_txtbx->SetLabelText(txtbx);
}
void cMain::equalsclicked() 
{
	txtbx = std::to_string(processorinstance->equalsClicked(txtbx.ToStdString()));
	
		
}


