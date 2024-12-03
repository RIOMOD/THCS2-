#include <stdio.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    double S = 1.0, factorial = 1.0;
    int summation = 0;

    for (int i = 1; i <= n; i++) {
        summation += i;
        factorial *= i;
        S += (double)summation / factorial;
    }

    printf("Bai 9: S(n) = %.5lf\n", S);
    return 0;
}
