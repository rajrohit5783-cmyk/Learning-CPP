#include <stdio.h>

int main() {
    int n, i, num, j, fact;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {

        printf("Enter number %d: ", i);
        scanf("%d", &num);

        fact = 1;  
        for (j = 1; j <= num; j++) {  
            fact = fact * j;
        }

        printf("Factorial of %d is %d\n", num, fact);
    }

    return 0;
}
