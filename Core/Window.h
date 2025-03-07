#pragma once

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>


struct WindowData
{
	HINSTANCE hInstance;
	HWND hWnd;
	LPCWSTR name;
	int width;
	int height;
};

void createWindow(HINSTANCE& hInstance, HWND& hWnd, LPCWSTR windowName, int width, int height);
