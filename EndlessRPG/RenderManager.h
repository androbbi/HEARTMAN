#pragma once
class RenderManager
{
public:
	RenderManager()
	{
		// do nothing
	}
	~RenderManager()
	{
		// do nothing
	}

	static RenderManager * instance()
	{
		static RenderManager render;
		return &render;
	}

	void StartUp();

	void ShutDown();
};

