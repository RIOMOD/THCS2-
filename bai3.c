#include <stdio.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    int S = 0;
    for (int i = 1; i <= 2 * n + 1; i += 2) {
        S += i;
    }

    printf("Bai 3: S(n) = %d\n", S);
    return 0;
}
