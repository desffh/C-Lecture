#include <stdio.h>
#include <stdlib.h>

int main()
{
#pragma region ���� �Ҵ�
	//// ���α׷��� ���� �߿� �ʿ��� ��ŭ �޸𸮸�
	//// �Ҵ��ϴ� �۾��Դϴ�.
	//
	//int* ptr = (int*)malloc(sizeof(int)); //4����Ʈ��ŭ �Ҵ�
	//
	//printf("ptr�� ����Ű�� ��: %d\n", *ptr);
	//
	//*ptr = 100;
	//
	//printf("ptr�� ����Ű�� ��: %d\n", *ptr);
	//
	//// ���� �Ҵ��� ���� �ð��� ���������� �޸���
	//// ũ�⸦ �����ų �� ������, �������� �޸���
	//// ũ�⸦ �Ҵ��� �� ����Ʈ ������ ��ȯ�մϴ�.
	//
	//// �޸𸮸� ���� �Ҵ��� �� �ּҸ� ���� �����ͷ�
	//// ��ȯ�ϱ� ������ �ڷ����� ��ȯ�� ���� �޸𸮿� 
	//// �Ҵ��ؾ� �մϴ�.
	//
	//free(ptr);
	//// free(ptr); �����Ǿ����� Ȯ�� �ϴ¹�
	//// �������� �Ҵ��� �޸𸮴� �� ������ �����Ǿ� �����Ƿ�
	//// ����� ������ ���� �������־�� �մϴ�.
#pragma endregion

#pragma region ��۸� ������
	// �̹� ������ �޸� ������ ����Ű�� �������Դϴ�.
	//
	//int* ptr1 = (int*)malloc(4);
	//
	//*ptr1 = 100;
	//
	//printf("ptr1�� ����Ű�� ��: %d\n", *ptr1);
	//
	//free(ptr1); //�޸� �����ϱ�
	//
	//ptr1 = NULL;
	//
	//// ������ �޸� ������ �����Ͽ� ���� �����Ͽ����ϴ�.
	////(�ϸ�ȵ�!!)
	//*ptr1 = 200;
	//
	//printf("ptr1�� ����Ű�� ��: %d\n", *ptr1);

#pragma endregion

#pragma region ���� �迭
	//int dynamicArraySize = 5;
	//
	//int* arrptr = (int*)malloc(sizeof(int) * dynamicArraySize);
	//
	//int size = (sizeof(int) * dynamicArraySize) / sizeof(int);
	//
	//
	//for (int i = 0; i < size; i++)
	//{
	//	arrptr[i] = i + 1;
	//	printf("arrptr[%d] : %d\n", i, arrptr[i]);
	//}
	//free(arrptr); // �������ְ� �迭 ũ�� �ٲ㺸��
	//
	//dynamicArraySize = 10;
	//
	//arrptr = (int*)malloc(sizeof(int) * dynamicArraySize);
	//
	//size = (sizeof(int) * dynamicArraySize) / sizeof(int);
	//
	//printf("\n");
	//
	//for (int i = 0; i < size; i++)
	//{
	//	arrptr[i] = i + 1;
	//	printf("arrptr[%d] : %d\n", i, arrptr[i]);
	//}
	//free(arrptr);
#pragma endregion


	return 0;
}