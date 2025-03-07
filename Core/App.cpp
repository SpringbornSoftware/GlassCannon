#include "App.h"

#include "Window.h"

bool runApplication()
{
	WindowData windowData = { };
	windowData.hInstance = GetModuleHandle(nullptr);
	windowData.name = L"Window";
	windowData.width = 800;
	windowData.height = 600;
	createWindow(windowData.hInstance, windowData.hWnd, windowData.name, windowData.width, windowData.height);

	MSG message = { };
	while (message.message != WM_QUIT)
	{
		if (PeekMessage(&message, nullptr, 0, 0, PM_REMOVE))
		{
			TranslateMessage(&message);
			DispatchMessage(&message);
		}
	}

	return true;
}
