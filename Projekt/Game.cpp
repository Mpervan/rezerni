#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h> 
#include<windows.h>
#include <stdio.h>
#include "Game.h"

void Game::vozi()
{
	srand(time(NULL));
	int i1 = rand() % 2;
	Autic a1(i1);
	for(int i = 0; i < 40 + a1.getprostor(); i++)
	{
		for(int j = 0; j < a1.getprostor(); j++)
		{
			if(i - j >= 0)
			{
				m.draw_char(i - j, 11, a1.getavto(a1.getprostor() - 1 - j));
				m.setsmrt(i - j, 11);
			}
		}
	}
}

void Game::plutaj()
{
	Balvan b;
	for(int i = 39 + b.getprostor(); i >= 0; i--)
	{
		for(int j = b.getprostor(); j >= 0; j--)
		{
			if(j + i < 40)
			{
				m.draw_char(i + (i - j), 3, b.getbalvan(b.getprostor() - j));
				m.setzivot(i + (i - j), 3);
			}
		}
		m.printaj();
		m.clear();
		system("cls");
	}
}

void Game::skok()
{

	HANDLE hInput = GetStdHandle(STD_INPUT_HANDLE);
	DWORD NumInputs = 0;
	DWORD InputsRead = 0;
	bool running = true;

	INPUT_RECORD irInput;

	GetNumberOfConsoleInputEvents(hInput, &NumInputs);

	ReadConsoleInput(hInput, &irInput, 1, &InputsRead);

	switch (irInput.Event.KeyEvent.wVirtualKeyCode)
	{
	case VK_ESCAPE:
		break;

	case VK_LEFT:
		froggy.minusx();

	case VK_UP:
		froggy.minusy();

	case VK_RIGHT:
		froggy.plusx();

	case VK_DOWN:
		froggy.plusy();
	}
}
