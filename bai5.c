#include <stdio.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    long long S = 0, product = 1;
    for (int i = 1; i <= n; i++) {
        product *= i;
        S += product;
    }

    printf("Bai 5: S(n) = %lld\n", S);
    return 0;
}
