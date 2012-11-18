// this is a window derived form CBaseWindow
// just to show that inheritance is possible

#ifndef _DERIVEDWINDOW_H_
#define _DERIVEDWINDOW_H_
#include "BaseWindow.h"

class CDerivedWindow : public CBaseWindow
{
public:	
	CDerivedWindow(HINSTANCE hInst, CONST WNDCLASSEX* wcx = NULL) 
		:CBaseWindow(hInst, wcx)
	{ 
		SetWindowTitle("Derived Window");
	};

protected:
	// the message handler for this window
	LRESULT CALLBACK WinMsgHandler(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);	
};

#endif 