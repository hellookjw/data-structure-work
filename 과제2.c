#include<stdio.h>

int main(void) {
   char s1[100];
   printf("문자열을 입력하세요:\n");
   gets(s1);
   printf("입력된 문자열은\n\"%s\"\n입니다.\n", s1);

   printf("입력된 문자열 길이 = %d", strlen(s1));

}
