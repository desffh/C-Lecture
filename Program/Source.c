#include <stdio.h>
//void Awake()
//{
//	printf("Awake\n");
//
//	Awake();
//}

void Recursive(int count)
{
	if (count >= 4)
	{
		return;
	}
	printf("count ������ ��:%d\n", count);

	Recursive(count + 1);
}
inline void Process(int data)
{
	printf("%d%%��ŭ �����Ͱ� ó���Ǿ����ϴ�.", data);

	// �ζ��� �Լ��� ������ ������ Ȯ��Ǹ�, ������ ��
	// �¶��� �Լ��� �����ϴ��� ��Ȳ�� ���� �Ϲ� �Լ���
	// ��ȯ�Ǳ⵵ �մϴ�.
}

int main()
{
#pragma region ��� �Լ�
	// � �Լ����� �ڽ��� �ٽ� ȣ���Ͽ� �۾���
	// �����ϴ� �Լ��Դϴ�. 
	//	Awake();
	// ��� �Լ��� �Լ��� ��� ȣ���ϱ� ������ 
	// ���� ������ �޸𸮰� ��� ���̰� �ǹǷ�
	// ���� �����÷ο찡 �߻��մϴ�.
	//Recursive(1);

	// ��� �Լ��� ��� Ư���� �������� �Լ���
	// ��ȯ�ؾ� �ϸ�, ��������� ȣ���� �Լ���
	// ���� �����ӿ� ���� �������� ȣ��� �Լ�
	// ���� ���ʴ�� ���� �������� �����˴ϴ�.

#pragma endregion

#pragma region �ִ񰪰� �ּڰ�
//int count[] = { 6,11,1,2,8 };
//int max = count[0];
//int min = count[0];
//for (int i = 1; i < 5; i++)
//{
//	if (count[i] > max)
//	{
//		max = count[i];
//	}
//	if (count[i] < min)
//	{
//		min = count[i];
//	}
//}
//printf("�ִ밪: %d\n", max);
//printf("�ּڰ�: %d", min);



#pragma endregion

#pragma region �ζ��� �Լ�
	// �Լ��� ȣ���ϴ� ��� �Լ��� ȣ��Ǵ� ��ġ����
	// �Լ��� �ڵ带 �����Ͽ� �����ϴ� ����� �Լ� �Դϴ�.

	//Process(75);

	// �ζ��� �Լ��� �Լ��� ȣ���ϴ� ������ �����Ƿ�
	// ó�� �ӵ��� ��������, �ζ��� �Լ��� ���� ����ϰ� �Ǹ�
	// �Լ��� �ڵ尡 ����Ǳ� ������ ���� ������
	// ũ�Ⱑ Ŀ���� �˴ϴ�. (�Լ���ġ�� ���°� �ƴ϶� ��°�� �����ؼ� 
	// main�Լ��� �������� ������ ���� ũ�� Ŀ��)

#pragma endregion

#pragma region �Ҽ�
	printf("�����Է�:");

	int count = 0;
	scanf_s("%d", &count);
	int flag = 0;

	for (int i = 2; i <= count; i++)
	{
		if (count % i == 0);
		{
			flag++;
		}
		
	}
	if (flag == 1)
	{	
		printf("Prime Number");
	}
	else
	{
		printf("Not Prime Number");
	}

#pragma endregion


	return 0;
}