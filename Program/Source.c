#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Character.h" // 사용자 정의 헤더파일

#define WIDTH 11
#define HEIGHT 11


char maze[WIDTH][HEIGHT];

void Initialize()
{
    strcpy(maze[0], "1111111111");
    strcpy(maze[1], "1001101001");
    strcpy(maze[2], "1101100011");
    strcpy(maze[3], "1100001111");
    strcpy(maze[4], "1111011111");
    strcpy(maze[5], "1101000011");
    strcpy(maze[6], "1100011101");
    strcpy(maze[7], "1111000001");
    strcpy(maze[8], "1111111011");
    strcpy(maze[9], "1200000011");
    strcpy(maze[10], "1111111111");
}

void Renderer()
{
    for (int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < WIDTH; j++)
        {
            if (maze[i][j] == '0')
            {
                printf(" ");
            }
            else if (maze[i][j] == '1')
            {
                printf("■");
            }
            else if (maze[i][j] == '2')
            {
                printf("◎");
            }
        }

        printf("\n");
    }
}

int main()
{
    Character character = { 3, 3, "★" };

    Initialize();

    while (1)
    {
        Renderer();

        GotoXY(character.x, character.y);
        printf("%s", character.shape);

        system("cls");
    }

    return 0;
}