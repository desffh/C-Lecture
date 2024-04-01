#include <stdio.h>
#include <stdlib.h>

int main()
{
#pragma region 동적 할당
	//// 프로그램을 실행 중에 필요한 만큼 메모리를
	//// 할당하는 작업입니다.
	//
	//int* ptr = (int*)malloc(sizeof(int)); //4바이트만큼 할당
	//
	//printf("ptr이 가리키는 값: %d\n", *ptr);
	//
	//*ptr = 100;
	//
	//printf("ptr이 가리키는 값: %d\n", *ptr);
	//
	//// 동적 할당은 실행 시간에 가변적으로 메모리의
	//// 크기를 변경시킬 수 있으며, 동적으로 메모리의
	//// 크기를 할당할 때 바이트 단위로 반환합니다.
	//
	//// 메모리를 동적 할당할 때 주소를 범용 포인터로
	//// 반환하기 때문에 자료형을 반환한 다음 메모리에 
	//// 할당해야 합니다.
	//
	//free(ptr);
	//// free(ptr); 해제되었는지 확인 하는법
	//// 동적으로 할당한 메모리는 힙 영역에 보관되어 있으므로
	//// 사용이 끝나면 직접 해제해주어야 합니다.
#pragma endregion

#pragma region 댕글링 포인터
	// 이미 해제된 메모리 영역을 가리키는 포인터입니다.
	//
	//int* ptr1 = (int*)malloc(4);
	//
	//*ptr1 = 100;
	//
	//printf("ptr1이 가리키는 값: %d\n", *ptr1);
	//
	//free(ptr1); //메모리 해제하기
	//
	//ptr1 = NULL;
	//
	//// 해제된 메모리 공간에 접근하여 값을 저장하였습니다.
	////(하면안됨!!)
	//*ptr1 = 200;
	//
	//printf("ptr1이 가리키는 값: %d\n", *ptr1);

#pragma endregion

#pragma region 동적 배열
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
	//free(arrptr); // 해제해주고 배열 크기 바꿔보기
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