#include "Engine.h"
#include <iostream>

using namespace std;


Engine::Engine()
{
	cout << "엔진 생성자" << endl;
	bIsRunning = true;
}


Engine::~Engine()
{
	cout << "엔진 소멸자" << endl;
}

void Engine::Run()
{
	while (bIsRunning)
	{
		cout << "Running" << endl;
		int keyCode = Input();
		Process(keyCode);
		Render();
	}
}

int Engine::Input()
{
	return 0;
}

void Engine::Process(int KeyCode)
{
}

void Engine::Render()
{
}
