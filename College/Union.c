#include<stdio.h>

union student{
    int roll;
    float marks;
    char name[20];

};

int main(){
    union student s;
    s.roll = 25;
    printf("Roll = %d\n",s.roll);
    s.marks = 88.5;
    printf("marks =%.2f\n",s.marks);
    printf("Roll after storing marks = %d\n",s.roll);

    return 0;
}