#include <stdio.h>

int level = 1;

void Stage()
{
	level += 1;
}
int itemCode;

void Score()
{
	// ���� ������ �� �� ���� �ʱ�ȭ�� 
	// �̷������ �����Դϴ�.
	static int score = 0; //�ʱ�ȭ
	score++; // +1
	printf("score������ ��: %d\n", score); // 1�� ����
	// �ٽ� main���� �ҷ������� �ʱ�ȭ�� ���̻� ����
}

int main()
{
#pragma region ���� ����
	// �Լ� ���ο��� ����� ������ { } �������� ����
	// �� �� ������, {  }�� ����� �Ǹ� �޸𸮿��� �������
	// Ư¡�� ������ �ֽ��ϴ�.

	//int data = 100;
	//{
	//	int data = 200;
	//	// ���� ����� ��ġ�� �ִ� data ������ �����մϴ�.
	//	printf("%d\n", data); // 200
	//}
	//printf("%d", data); // 100
#pragma endregion

#pragma region ���� ����
	// �Լ� �ܺο� ����� ������, ��𿡼����� ������
	// �����ϸ�, ���α׷��� ����� �� �����ǰ�,
	// ���α׷��� ����� �� �޸𸮿��� �����Ǵ� Ư¡�� ������ 
	// �ִ� �����Դϴ�.
	//Stage();
	//printf("level������ ��:%d\n",level);
	//printf("itemCode ������ ��: %d\n", itemCode);

#pragma endregion

#pragma region ���� ����
	// static�̶�� Ű���带 ����ϰ�
	// ���� ������ Ư���� �����鼭, 
	// ���� ������ Ư¡�� ������ �ִ� �����Դϴ�.
	//Score();
	//Score();
	//Score();

#pragma endregion

#pragma region ���μ� ����
	int n = 0;

	printf("���� �Է�: ");
	scanf_s("%d", &n);

	for (int i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n /= i;
			printf("%d ", i);
			i--;
		}

	}

#pragma endregion


	return 0;
}