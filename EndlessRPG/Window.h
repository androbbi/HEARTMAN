#pragma once
//Using SDL and standard IO
#include <../include/SDL2/SDL.h>
#include <stdio.h>


class Window
{
public:

	//Screen dimension constants
	const int SCREEN_WIDTH = 640;
	const int SCREEN_HEIGHT = 480;

	Window();
	~Window();

	void CreateWindow();
	void CloseWindow();

private:
	
};

