#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

void GotoXY(int x, int y)
{
    // x축과 y축 좌표 설정
    COORD position = { x, y };

    // 커서 이동 함수
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);

    // GetStdHandle(STD_OUTPUT_HANDLE) : 표준 출력 핸들을 가져옵니다.
    // SetConsoleCursorPosition : 콘솔창의 커서를 이동합니다.
}

//int main()
//{
//    char key = 0;
//
//    int x = 2;
//    int y = 5;
//
//    GotoXY(x, y);
//    printf("★");
// 
//
//    while (1)
//    {   
//        if (_kbhit())
//        {
//        
//            key = _getch(); // 키보드의 입력을 받습니다.
//            system("cls");
//        
//            if (key == -32)
//        
//            {
//                key = _getch();
//            }
//            switch (key)
//            {
//            case UP: if (y > 0) { y--; }
//                break;
//            case LEFT: if (x > 0) { x -= 2; }
//                break;
//            case RIGHT: if (x < 118) { x += 2; }
//                break;
//            case DOWN: if (y < 29) { y++; }
//                break;
//            }
//            GotoXY(x, y);
//            printf("★");
//
//
//        }   
//    }
//
//    // 120 30
//    return 0;
//}