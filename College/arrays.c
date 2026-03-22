#include<stdio.h>

int main(){
    int a[5],i;
    printf("Enter elements of Array");
    for(i=0;i<=4;i++)
    {
        scanf("%d", &a[i]);

    }
    printf("Array elements: ");
    for(i = 0;i<= 4;i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}