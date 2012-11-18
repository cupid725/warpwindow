#include "DerivedWindow.h"

LRESULT CALLBACK CDerivedWindow::WinMsgHandler(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{
	case WM_PAINT:
		PAINTSTRUCT ps;
		HDC hdc;

		hdc = BeginPaint(hwnd, &ps); 

		TextOut(hdc, 0, 0, "This is a TEST!!!", 17);

		EndPaint(hwnd, &ps);
		break;
	case WM_DESTROY:
		bWindowClosed = TRUE;
		break;
	default:
		return DefWindowProc(hwnd, uMsg, wParam, lParam);
	}
	return 0;
} 