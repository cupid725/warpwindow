#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include "DerivedWindow.h"

int APIENTRY WinMain(HINSTANCE hInstance,
	                 HINSTANCE hPrevInstance,
                     LPSTR     lpCmdLine,
                     int       nCmdShow)
{

	DWORD dwError = 0;
 	// create an instance of the derived window class (inherited from CBaseWindow)
	CDerivedWindow mainWnd(hInstance);	
	if (mainWnd.RegisterWindow())
	{				
		if (mainWnd.Create())
		{
			// message loop			
			mainWnd.MsgLoop();			
		}
		else
			dwError = GetLastError();
	}
	dwError = GetLastError();
	return dwError;
} 