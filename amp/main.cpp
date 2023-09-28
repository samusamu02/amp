#include <DxLib.h>

int WINAPI WinMain(HINSTANCE,HINSTANCE,LPSTR,int)
{
	ChangeWindowMode(true);
	if (!DxLib_Init())
	{
		return -1;
	}
	SetDrawScreen(DX_SCREEN_BACK);
	while (ProcessMessage() == 0)
	{
		ScreenFlip();
		ClearDrawScreen();
	}

	return 0;
}