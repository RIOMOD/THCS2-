#include <stdio.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    long long P = 1;
    for (int i = 1; i <= 2 * n + 1; i += 2) {
        P *= i;
    }

    printf("Bai 2: P(n) = %lld\n", P);
    return 0;
}
