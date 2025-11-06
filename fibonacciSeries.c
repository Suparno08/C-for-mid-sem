#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms:\n");
    scanf("%d", &n);

    printf("Fibonacci Series:\n");

    for (int i = 1; i <= n; i++) {
        printf("%d ", t1);   // print current term
        nextTerm = t1 + t2;  // calculate next term
        t1 = t2;             // shift terms
        t2 = nextTerm;
    }

    return 0;
}
