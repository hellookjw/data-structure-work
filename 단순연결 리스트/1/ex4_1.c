#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "InsertLinkedList.h"

int main(void) {
	linkedList_h* L;
	L = createLinkedList_h();
	printf("(1) 공백 리스트 생성하기! \n");
	printList(L);

	printf("\n(2) 리스트에 [수] 노트 삽입하기! \n");
	insertFirstNode(L, "수");
	printList(L);

	printf("\n(3) 리스트 마지막에 [금] 노트 삽입하기! \n");
	insertLastNode(L, "금");
	printList(L);

	printf("\n(4) 첫번째에 [월] 노트 삽입하기! \n");
	insertFirstNode(L, "월");
	printList(L);

	printf("\n(5) 리스트공간을 해제하여 공백리스트로 만들기! \n");
	freeLinkedList_h(L);
	printList(L);

	getchar(); return 0;
}
