#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>


void ViewHP(int health)
{
    printf("HP = ");
    for (int i = 0; i < health; i++)
    {   
        printf(" ♥ ");
    }
    printf("\n");
}

int main()
{
#pragma region Rand() 함수  
    // time(NULL) : UCT 기준으로 1970년 1월 1일 0시 0분 0초부터
    // 경과된 시간을 초(sec)로 반환하는 함수입니다. 

    //    srand(time(NULL)); // 난수 발생기를 초기화하는 함수입니다.
    //    
    //    for (int i = 0; i < 10; i++)
    //    {
    //        int result = rand() % 10 + 1; // 0 ~ 32767 사이의 난수를 생성하는 함수입니다.              
    //    
    //        printf("result 변수의 값 : %d\n", result);
    //    }    
#pragma endregion

#pragma region UP - DOWN GAME

   while (1)
   {
       ViewHP(5);
       system("cls");
   }

   //int computer;
   //int answer;
   //int life = 5;
   //
   //srand(time(NULL));
   //
   //computer = rand() % 31;
   //
   //while (life > 0)
   //{
   //    ViewHP(life);
   //
   //    printf("숫자를 입력하세요\n");
   //    scanf_s("%d", &answer);
   //    system("cls");
   //    printf("\n");
   //
   //    if (answer < computer)
   //    {
   //        printf("컴퓨터가 가지고 있는 값보다 작습니다\n");
   //        life--;
   //    }
   //    else if (answer > computer)
   //    {
   //        printf("컴퓨터가 가지고 있는 값보다 큽니다\n");
   //        life--;
   //    }
   //    else if (answer == computer)
   //    {
   //        break;
   //    }
   //}
   //if (life <= 0)
   //{
   //    printf("패배\n");
   //}
   //else
   //{
   //    printf("승리\n");
   //}
//////////////////////////////
    //int flag = 5;
    //
    //for(int i = life; i < 0 ; i--)
    //{
    //    if (result > number)
    //    {
    //        printf("실패 UP");
    //        printf("%d", flag - 1);
    //    }
    //    
    //    if (result < number)
    //    {
    //        printf("실패 DOWN");
    //        printf("%d", flag - 1);
    //    }
    //
    //    if (result == number)
    //    {
    //        printf("성공");
    //        printf("%d", flag);
    //        break;
    //    }
    //}




#pragma endregion

    return 0;
}