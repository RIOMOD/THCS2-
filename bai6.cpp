#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    long long S = 0;
    for (int i = 1; i <= n; i++) {
        S += pow(i, i);
    }

    printf("Bai 6: S(n) = %lld\n", S);
    return 0;
}
