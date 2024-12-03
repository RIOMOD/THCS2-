#include <stdio.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    double S = 1.0, factorial = 1.0;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
        S += 1.0 / factorial;
    }

    printf("Bai 8: S(n) = %.5lf\n", S);
    return 0;
}
