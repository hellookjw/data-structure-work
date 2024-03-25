#include <stdio.h>

int main() 
{
	int i, j, k;
	char c[2][3][20];

	for (i = 0; i < 2; i++) {
		printf("\n 학생 %d의 이름: ", i + 1);
		gets(c[i][0]);
		printf(" 학생 %d의 학과: ", i + 1);
		gets(c[i][1]);
		printf(" 학생 %d의 학번: ", i + 1);
		gets(c[i][2]);
	}

	for (i = 0; i < 2; i++) {
		printf("\n\n 학생%d", i + 1);
		for (j = 0; j < 3; j++) {
			printf("\n\t");
			for (k = 0; c[i][j][k] != '\0'; k++) {
				printf("%c", c[i][j][k]);
			}
		}
	}
	getchar();
}
