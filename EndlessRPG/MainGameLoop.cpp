#include "Window.h"
#include "RenderManager.h"

RenderManager *gRenderManager;
Window *gWindow;

void MainLoop();

int main(int argc, char *args[])
{
	gWindow = new Window();
	gWindow->CreateWindow();

	gRenderManager = RenderManager::instance();
	gRenderManager->StartUp();

	MainLoop(); // The running gameplay loop

	gWindow->CloseWindow();
	gRenderManager->ShutDown();
	return 0;
}

void MainLoop()
{
	// Main loop flag
	bool quit = false;
	//Event handler
	SDL_Event e;

	while (!quit)
	{
		while (SDL_PollEvent(&e) != 0)
		{
			if (e.type == SDL_QUIT)
			{
				quit = true;
			}
		}
	}
}
