#include <stdio.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    double S = 0;
    for (int i = 1; i <= n; i++) {
        S += 1.0 / i;
    }

    printf("Bai 7: S(n) = %.5lf\n", S);
    return 0;
}
