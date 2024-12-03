#include <stdio.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    int S = 0;
    for (int i = 1; i <= n; i++) {
        S += (i % 2 == 1 ? i : -i);
    }

    printf("Bai 4: S(n) = %d\n", S);
    return 0;
}
