#include <stdio.h>

int main() {
    int numbers[5];
    int sum = 0;

    printf("Nhap 5 so nguy�n:\n");
    for (int i = 0; i < 5; i++) {
        printf("S? th? %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 != 0) {
            sum += numbers[i];
        }
    }
    printf("Tong c�c so le trong da duoc nhap l�: %d\n", sum);

    return 0;
}

