#include<stdio.h>

int main(void) {
    char* address1[] = { "korea", "seoul", "mapo", "152번지 2/3" };
    char* address2[] = { "korea", "seoul", "jongno", "152번지 2/3" };

    for (int i = 0; i < 4; i++) {
        printf("%s\n", address1[i]);
    }

    printf("\n"); 

    for (int j = 0; j < 4; j++) {
        printf("%s\n", address2[j]);
    }

    return 0;
}
