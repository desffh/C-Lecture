#include <stdio.h>

#define SIZE 5

void main()
{
#pragma region �ڷ��� ��ȯ
	// ���� �ٸ� �ڷ����� ������ �ִ� ��������
	// ������ �̷���� �� ������ �����ߴ� �ڷ�����
	// �ٸ� �ڷ������� ��ȯ�ϴ� �����Դϴ�.

#pragma region �Ϲ��� ����ȯ
	// ���� �ٸ� �ڷ������� ������ �̷���� ��
	// �ڷ����� ũ�Ⱑ ū �ڷ������� ��ȯ�Ǵ� �����Դϴ�.

	//	int  data = 10;
	//	
	//	float storage = 7.5f;
	//	
	//	printf("data + storage�� ������ �� : %f\n", data + storage);
	//	
	//	data = storage;
	//	printf("data�� �� : %d\n", data); // �����κи� ��. �Ҽ��� �κ� ����

	// ǥ�� ������ ���� �����Ϳ� ǥ�� ������ ū �����͸� �����ϰ�
	// �Ǹ� �Ϲ������� ������ �ս��� �߻��մϴ�.

#pragma endregion

#pragma region ����� ����ȯ
	// ������ �̷������ ���� ����ڰ� ���� �ڷ�����
	// ��ȯ�ϴ� �����Դϴ�.

	//	int health = 10;
	//	int armor = 3;
	//	
	//	//���� �Ѱ��� ����ȯ �ص� �ȴ�
	//	
	//	float result = (float) health / armor; //���� 3.3333 //������ ��3.000000
	//	printf("result ������ �� : %f\n",result);
	// ������ �������� ������ �����ϰ� �Ǹ� ������
	// ��� ���� ���� �� �ֽ��ϴ�. 

#pragma endregion

#pragma endregion

#pragma region ��ũ��
	// ���α׷� ������ Ư���� �����Ͱ� ���ڿ��� ����
	// �ǰ� ó���Ǵ� �����Դϴ�.

	//	printf("SIZE ��ũ���� �� : %d\n", SIZE);

	// ��ũ���� ��� �ڷ����� �������� �����Ƿ� ���
	// ������ ������ ���� �ʽ��ϴ�.

	// ��ũ���� ������ ������ ������ ����Ǹ�, �� ��ũ�ΰ�
	// ����� �� ��ũ���� ��ü ����� �־�� �ϹǷ� ���α׷���
	// ũ�Ⱑ Ŀ���� �˴ϴ�.

#pragma endregion

#pragma region ���� �� ���
	// ù ��° �μ��� ���� �����ϱ⿡ �������
	// ������ �� ��° �μ��� ����ϴ� �κ���
	// �������� ���� ����Դϴ�.

	//	int x = 1;
	//	int y = 2;
	//	
	//	if (x == 0 && y++)
	//	{
	//		printf("AND�� ������ '��' �Դϴ�. \n");
	//	}
	//	printf("y�� �� : %d\n", y); //������ �����̶�� if�� ������ �ٷ� �����
	        

#pragma endregion

#pragma region (1)���� (10)������ ��

	//	int result = 0;
	//	
	//	for (int x = 1; x <= 10; x++)
	//	{
	//		result += x;
	//	}
	//	printf("result�� �� : %d\n", result);


#pragma endregion


#pragma region Star

	//*
	//**
	//***
	//****
	//*****
	int result = 0;
	for (int x = 0; x < 5; x++)
	{
		for (int y = 0; y <= x; y++)
		{
			printf("*");
		}
		printf("\n");
	}

#pragma endregion

}