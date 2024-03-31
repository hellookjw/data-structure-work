#include <stdio.h>

void hanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        printf("원반 %d을 %c에서 %c로 옮김\n", n, from, to);
        return;
    }
    hanoi(n - 1, from, aux, to);
    printf("원반 %d을 %c에서 %c로 옮김\n", n, from, to);
    hanoi(n - 1, aux, to, from);
}

int main() {
    int num_disks = 3; // 원반의 개수
    hanoi(num_disks, 'A', 'C', 'B'); 
    return 0;
}
