#include <stdio.h>

struct Node
{
	int data;
	struct Node* next;

};



int main()
{
#pragma region ASCII 코드
	// 미국 정보 교환 표준부호(ASKII)는  7비트로 문자를
	// 표현하는 표준 코드입니다. 

	// printf("%d", 'A'); //65

	//for (int i = 65; i < 91; i++)
	//{
	//	printf("%c ", i);
	//}

	//for (int i = 0; i < 26; i++)
	//{
	//	printf("%c ", 'A' + i);
	//}


#pragma endregion

#pragma region 자기 참조 구조체


	//struct Node node1 = { 10, NULL };
	//struct Node node2 = { 20, NULL };
	//struct Node node3 = { 30, NULL };
	//
	//node1.next = &node2;
	//node2.next = &node3;
	//node3.next = NULL;
	//
	//struct Node * currentPtr = &node1;
	//
	//while (currentPtr != NULL)
	//{
	//	printf("%d\n", currentPtr->data);
	//	currentPtr = currentPtr->next;
	//}


#pragma endregion




	return 0;
}