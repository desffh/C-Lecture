#pragma once
#include "Character.h"
#include <conio.h>

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

#define WIDTH 11
#define HEIGHT 11

void Input(char maze[WIDTH][HEIGHT], Character* character)
{
	if (maze[character->y][character->x / 2] == '2')
	{
		exit(1);
	}

	if (_kbhit())
	{
		char key = _getch();



		switch (key)
		{
		case 32: break;
		case UP: // maze[행][열] x칸 이동은 2칸씩이라 2 4 6 8 이지만
							  // 벽에 충돌하려면 1 3 5 7 9 여야해서 /2
			if (maze[character->y - 1][character->x/2] != '1')
			{
				character->y--;
				break;
			}
		case LEFT:
			if (maze[character-> y][character->x / 2 - 1] != '1')
			{
				character->x -= 2;
				break;
			}
		case RIGHT:
			if (maze[character-> y][character->x / 2 + 1] != '1')
			{
				character->x += 2;
				break;
			}
		case DOWN:
			if (maze[character->y + 1][character->x / 2] != '1')
			{
				character->y++;
				break;
			}
		}
	}
}