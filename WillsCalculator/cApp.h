#pragma once
#include "wx/wx.h"
#include "cMain.h"


class cApp: public wxApp
{
public:
	cApp();//constructor
	~cApp();//deconstructor

private:
	cMain* m_frame1 = nullptr;

public:

	virtual bool OnInit();
};

