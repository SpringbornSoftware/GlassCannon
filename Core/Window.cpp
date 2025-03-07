#include "Window.h"

LRESULT CALLBACK wndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	switch (message)
	{
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	default:
		return DefWindowProc(hWnd, message, wParam, lParam);
	}
	return 0;
}

void createWindow(HINSTANCE& hInstance, HWND& hWnd, LPCWSTR windowName, int width, int height)
{
	WNDCLASSEX wcex		= { 0 };
	wcex.cbSize			= sizeof(WNDCLASSEX);
	wcex.style			= CS_HREDRAW | CS_VREDRAW;
	wcex.lpfnWndProc	= wndProc;
	wcex.hInstance		= hInstance;
	wcex.hCursor		= LoadCursor(nullptr, IDC_ARROW);
	wcex.lpszClassName	= windowName;
	RegisterClassEx(&wcex);

	RECT rc = { 0, 0, width, height };

	AdjustWindowRect(&rc, WS_OVERLAPPEDWINDOW, FALSE);

	hWnd = CreateWindow(windowName, 
						windowName, 
						WS_OVERLAPPEDWINDOW, 
						CW_USEDEFAULT, 
						CW_USEDEFAULT, 
						rc.right - rc.left, 
						rc.bottom - rc.top, 
						nullptr, 
						nullptr, 
						hInstance, 
						nullptr);

	ShowWindow(hWnd, SW_SHOW);
	UpdateWindow(hWnd);
}
