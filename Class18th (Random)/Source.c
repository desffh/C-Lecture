#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>


void ViewHP(int health)
{
    printf("HP = ");
    for (int i = 0; i < health; i++)
    {   
        printf(" �� ");
    }
    printf("\n");
}

int main()
{
#pragma region Rand() �Լ�  
    // time(NULL) : UCT �������� 1970�� 1�� 1�� 0�� 0�� 0�ʺ���
    // ����� �ð��� ��(sec)�� ��ȯ�ϴ� �Լ��Դϴ�. 

    //    srand(time(NULL)); // ���� �߻��⸦ �ʱ�ȭ�ϴ� �Լ��Դϴ�.
    //    
    //    for (int i = 0; i < 10; i++)
    //    {
    //        int result = rand() % 10 + 1; // 0 ~ 32767 ������ ������ �����ϴ� �Լ��Դϴ�.              
    //    
    //        printf("result ������ �� : %d\n", result);
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
   //    printf("���ڸ� �Է��ϼ���\n");
   //    scanf_s("%d", &answer);
   //    system("cls");
   //    printf("\n");
   //
   //    if (answer < computer)
   //    {
   //        printf("��ǻ�Ͱ� ������ �ִ� ������ �۽��ϴ�\n");
   //        life--;
   //    }
   //    else if (answer > computer)
   //    {
   //        printf("��ǻ�Ͱ� ������ �ִ� ������ Ů�ϴ�\n");
   //        life--;
   //    }
   //    else if (answer == computer)
   //    {
   //        break;
   //    }
   //}
   //if (life <= 0)
   //{
   //    printf("�й�\n");
   //}
   //else
   //{
   //    printf("�¸�\n");
   //}
//////////////////////////////
    //int flag = 5;
    //
    //for(int i = life; i < 0 ; i--)
    //{
    //    if (result > number)
    //    {
    //        printf("���� UP");
    //        printf("%d", flag - 1);
    //    }
    //    
    //    if (result < number)
    //    {
    //        printf("���� DOWN");
    //        printf("%d", flag - 1);
    //    }
    //
    //    if (result == number)
    //    {
    //        printf("����");
    //        printf("%d", flag);
    //        break;
    //    }
    //}




#pragma endregion

    return 0;
}