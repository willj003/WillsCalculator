#include "cMain.h"
wxBEGIN_EVENT_TABLE(cMain, wxFrame)
EVT_BUTTON(wxID_ANY, OnButtonClicked)
wxEND_EVENT_TABLE();

cMain::cMain() :wxFrame(nullptr, wxID_ANY, "Wills Calculator!", wxPoint(30, 30), wxSize(275, 400))
{
	equalsBtn = new wxButton(this, 10010, "=", wxPoint(105, 305), wxSize(50, 50));
	equalsBtn->SetBackgroundColour(wxColor(0, 255, 0));
	m_txtbx = new wxTextCtrl(this, 10011, "0", wxPoint(5, 5), wxSize(253, 150));
	btn7 = new wxButton(this, 10007, "7", wxPoint(5, 155), wxSize(50, 50));
	btn7->SetBackgroundColour(wxColor(51, 255, 255));
	btn8 = new wxButton(this, 10008, "8", wxPoint(55, 155), wxSize(50, 50));
	btn8->SetBackgroundColour(wxColor(51, 255, 255));
	btn9 = new wxButton(this, 10009, "9", wxPoint(105, 155), wxSize(50, 50));
	btn9->SetBackgroundColour(wxColor(51, 255, 255));
	addBtn = new wxButton(this, 10020, "+", wxPoint(155, 155), wxSize(50, 50));
	addBtn->SetBackgroundColour(wxColor(255, 255, 51));
	subtractBtn = new wxButton(this, 10021, "-", wxPoint(205, 155), wxSize(50, 50));
	subtractBtn->SetBackgroundColour(wxColor(255, 255, 51));
	btn4 = new wxButton(this, 10004, "4", wxPoint(5, 205), wxSize(50, 50));
	btn4->SetBackgroundColour(wxColor(51, 255, 255));
	btn5 = new wxButton(this, 10005, "5", wxPoint(55, 205), wxSize(50, 50));
	btn5->SetBackgroundColour(wxColor(51, 255, 255));
	btn6 = new wxButton(this, 10006, "6", wxPoint(105, 205), wxSize(50, 50));
	btn6->SetBackgroundColour(wxColor(51, 255, 255));
	multiplyBtn = new wxButton(this, 10012, "X", wxPoint(155, 205), wxSize(50, 50));
	multiplyBtn->SetBackgroundColour(wxColor(255, 255, 51));
	divideBtn = new wxButton(this, 10013, "/", wxPoint(205, 205), wxSize(50, 50));
	divideBtn->SetBackgroundColour(wxColor(255, 255, 51));
	btn1 = new wxButton(this, 10001, "1", wxPoint(5, 255), wxSize(50, 50));
	btn1->SetBackgroundColour(wxColor(51, 255, 255));
	btn2 = new wxButton(this, 10002, "2", wxPoint(55, 255), wxSize(50, 50));
	btn2->SetBackgroundColour(wxColor(51, 255, 255));
	btn3 = new wxButton(this, 10003, "3", wxPoint(105, 255), wxSize(50, 50));
	btn3->SetBackgroundColour(wxColor(51, 255, 255));
	binBtn = new wxButton(this, 10015, "Bin", wxPoint(155, 255), wxSize(50, 50));
	binBtn->SetBackgroundColour(wxColor(255, 255, 51));
	hexBtn = new wxButton(this, 10014, "Hex", wxPoint(205, 255), wxSize(50, 50));
	hexBtn->SetBackgroundColour(wxColor(255, 255, 51));
	clearBtn = new wxButton(this, 10016, "Clear", wxPoint(5, 305), wxSize(50, 50));
	btn0 = new wxButton(this, 10000, "0", wxPoint(55, 305), wxSize(50, 50));
	btn0->SetBackgroundColour(wxColor(51, 255, 255));
	modBtn = new wxButton(this, 10017, "%", wxPoint(155, 305), wxSize(50, 50));
	modBtn->SetBackgroundColour(wxColor(255,255,51));
	decimalBtn = new wxButton(this, 10019, "Dec", wxPoint(205, 305), wxSize(50, 50));
	decimalBtn->SetBackgroundColour(wxColor(255, 255, 51));
	clearBtn->SetBackgroundColour(wxColor(255, 51, 51));
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
}

void cMain::equalsclicked()
{
	wxString left;
	wxString right;
	int answer;
	if (txtbx.Contains("+"))
	{
		int n = txtbx.find("+");
		left = txtbx.SubString(0, n);
		right = txtbx.SubString(n+1, txtbx.length());
		answer = wxAtoi(left) + wxAtoi(right);
		m_txtbx->SetLabelText(std::to_string(answer));
	}
	else if (txtbx.Contains("-"))
	{
		int n = txtbx.find("-");
		left = txtbx.SubString(0, n);
		right = txtbx.SubString(n + 1, txtbx.length());
		answer = wxAtoi(left) - wxAtoi(right);
		m_txtbx->SetLabelText(std::to_string(answer));
	}
	else if (txtbx.Contains("X"))
	{
		int n = txtbx.find("X");
		left = txtbx.SubString(0, n);
		right = txtbx.SubString(n + 1, txtbx.length());
		answer = wxAtoi(left) * wxAtoi(right);
		m_txtbx->SetLabelText(std::to_string(answer));
	}
	else if (txtbx.Contains("/"))
	{
		int n = txtbx.find("/");
		left = txtbx.SubString(0, n);
		right = txtbx.SubString(n + 1, txtbx.length());
		answer = wxAtoi(left) / wxAtoi(right);
		m_txtbx->SetLabelText(std::to_string(answer));
	}
	if (txtbx.Contains("%"))
	{
		int n = txtbx.find("%");
		left = txtbx.SubString(0, n);
		right = txtbx.SubString(n + 1, txtbx.length());
		answer = wxAtoi(left) % wxAtoi(right);
		m_txtbx->SetLabelText(std::to_string(answer));
	}
	
}
