#include <DxLib.h>

int WINAPI WinMain(HINSTANCE,HINSTANCE,LPSTR,int)
{
	int testSound;
	int testSoftSound;

	ChangeWindowMode(true);
	if (DxLib_Init() == -1)
	{
		return -1;
	}

	testSoftSound = LoadSoftSound(L"Sound/Peak_test_A.wav");
	testSound = LoadSoundMemFromSoftSound(testSoftSound);

	// �T�E���h�̍Đ�
	PlaySoundMem(testSound, DX_PLAYTYPE_LOOP);

	SetDrawScreen(DX_SCREEN_BACK);
	while (ProcessMessage() == 0)
	{
		ScreenFlip();
		ClearDrawScreen();

	}
	DxLib_End();
	return 0;
}