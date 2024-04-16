#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Character.h" // ����� ���� �������

#define WIDTH 11
#define HEIGHT 11
// ��Ʈ�����δ� ����2ĭ, 00 2ĭ �ؾ��� windows10
// ����ũž���δ� ����1ĭ, 0 1ĭ �ؾ��� windows11

char maze[WIDTH][HEIGHT];

void Initialize()
{
    strcpy(maze[0], "1111111111");
    strcpy(maze[1], "0000000001");
    strcpy(maze[2], "1111111101");
    strcpy(maze[3], "1111011101");
    strcpy(maze[4], "1100000001");
    strcpy(maze[5], "1101111101");
    strcpy(maze[6], "1101100001");
    strcpy(maze[7], "1001101111");
    strcpy(maze[8], "1111101101");
    strcpy(maze[9], "2000000001");
    strcpy(maze[10],"1111111111");
}

void Renderer()
{
    for (int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < WIDTH; j++)
        {
            if (maze[i][j] == '0')
            {
                printf("  ");
            }
            else if (maze[i][j] == '1')
            {
                printf("��");
            }
            else if (maze[i][j] == '2')
            {
                printf("��");
            }
        }

        printf("\n");
    }
}

int main()
{
    Character character = { 1, 1, "��" };

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