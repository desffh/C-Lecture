#include <stdio.h>
#include <string.h>
struct Goblin
{
	char grade;
	int health;
	const char* name;

};
struct GameObject
{
	short z;
	int x; //4
	double y; //8 

	// ����ü�� ũ���� ��� ��� ������ ������ ���� �޸���
	// ũ�Ⱑ �ٸ��� ������ �� ������, ����ü ũ�⸦ �����ϴ�
	// ���´� �⺻ �ڷ������θ� �����˴ϴ�.

};


int main()
{
#pragma region ����ü
	// ���� ���� ������ �ϳ��� �������� ����ȭ��
	// ���� �ϳ��� ��ü�� �����ϴ� ���Դϴ�.

	//struct Goblin goblin1;
	//
	//goblin1.grade = 'A';
	//goblin1.health = 100;
	//goblin1.name = "������ ���";
	//
	//printf("goblin�� �ּ� : %p\n", &goblin1); //������
	//

	//printf("goblin1.grade�� �� : %c\n", goblin1.grade);
	//printf("goblin1.health�� �� : %d\n", goblin1.health);
	//printf("goblin1.name�� �� : %s\n", goblin1.name);

	// ����ü�� �����ϱ� ���� ����ü�� �޸� ������
	// �������� �����Ƿ�, ����ü ���ο� �ִ� �����͸�
	// �ʱ�ȭ�� �� �����ϴ�.

	//struct Goblin goblin2 = {'S',200,"��ȭ�� ���"}; //�ʱ�ȭ
	//�������� �ѹ��� �ʱ�ȭ �ϴ¹��
	//printf("goblin2.grade�� �� : %c\n", goblin2.grade);
	//printf("goblin2.health�� �� : %d\n", goblin2.health);
	//printf("goblin2.name�� �� : %s\n", goblin2.name);


	// ����ü�� �����͸� �ʱ�ȭ�� �� �ʱ�ȭ ����Ʈ�� ����Ͽ�
	// �ʱ�ȭ�� �� ������, ���ʿ������� ���������� ������� �ʱ�ȭ�մϴ�.

#pragma endregion

#pragma region ����Ʈ �е�
	// ��� ������ �޸𸮿��� CPU�� ���� �� �� ���� ���� �� 
	// �ֵ���, �����Ϸ��� ���������� ��Ͽ� ���߾� ����Ʈ��
	// �е����ִ� ����ȭ �۾��Դϴ�. 
	//struct GameObject gameobject;
	//printf("GameObject�� ũ��: %d\n", sizeof(gameobject)); //16����Ʈ

	// ����ü�� ũ��� ����ü�� �����ϴ� ��� �߿��� ũ�Ⱑ
	// ���� ū �ڷ����� ����� �ǵ��� �����մϴ�. //ex) 8 16 ...


#pragma endregion

#pragma region ȸ��
	//const char* string = "level";
	//
	//int size = strlen(string);
	//int flag = 0;
	//
	//printf("size�� ��: %d\n", size); //NULL���� �����ϰ� 5 ����
	//
	//for (int i = 0; i <= size/2; i++)
	//{
	//	if (string[i] != string[size - 1 - i])
	//	{
	//		flag++;
	//		break;
	//	}
	//}
	//if (flag == 1)
	//{
	//	printf("ȸ���� �ƴմϴ�\n");
	//}
	//else
	//{
	//	printf("ȸ���� �½��ϴ�\n");
	//}


#pragma endregion

	return 0;
}