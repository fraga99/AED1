#include <stdio.h>

void printRuler(int n) {
    if (n == 0) {
        printf("-\n");
        return;
    }

    printRuler(n - 1);

    for (int i = 0; i < (1 < n); i++) {
        for (int j = 0; j < n; j++) {
            printf("-");
        }
        printf("\n");
    }

    printRuler(n - 1);
}

int main() {
    int n;
    printf("Digite a ordem da régua: ");
    scanf("%d", &n);

    printRuler(n);

    return 0;
}
