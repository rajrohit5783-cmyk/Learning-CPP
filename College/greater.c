#include<stdio.h>

int main(){
     int a1, a2;
     printf("Enter the Value oof a1 and a2: \n");
     scanf("%d %d", &a1 , &a2);

     if(a1>a2){

         printf("%d is greater than %d\n", a1 , a2);
     }                                                      
        

     if (a1 != a2){

         printf("%d is not equal to %d\n", a1, a2);
     }

     if(a1 <= a2){

         printf("%d is less than equal to %d\n", a1 , a2);
     }

    return 0;
}