#include "pch.h"
#include "CppUnitTest.h"

#include "App.h"
#include "Window.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CoreUnitTest
{
	TEST_CLASS(CoreUnitTest)
	{
	public:
		
		TEST_METHOD(WindowCreation)
		{
			WindowData windowData = { };
			windowData.hInstance = GetModuleHandle(nullptr);
			windowData.name = L"Window";
			windowData.width = 800;
			windowData.height = 600;
			//createWindow(windowData.hInstance, windowData.hWnd, windowData.name, windowData.width, windowData.height);
			Assert::IsNotNull(windowData.hWnd);
		}
	};
}
