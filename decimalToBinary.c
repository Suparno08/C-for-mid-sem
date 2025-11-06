#include <stdio.h>

int main() {
    int n ;
    int ans = 0, pow = 1, rem = 0;
    printf("Enter a number:\n");
    scanf("%d",&n);

    while (n > 0) {
        rem = n % 2;
        n = n / 2;
        ans = ans + (rem * pow);
        pow = pow * 10;
    }

    printf("%d", ans);
    return 0;
}
