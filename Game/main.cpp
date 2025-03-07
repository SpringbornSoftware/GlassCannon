#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

#include "App.h"

_Use_decl_annotations_
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	runApplication();
	return 0;
}
