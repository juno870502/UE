#pragma once
class Engine
{
public:
	Engine();
	~Engine();

	void Run();

	bool bIsRunning;

private:
	int Input();
	void Process(int KeyCode);
	void Render();
};

