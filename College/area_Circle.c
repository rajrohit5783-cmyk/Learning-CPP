#include<stdio.h>

int main(){
    float r, area;
    printf("Enter the radius of circle: ");
    scanf("%f", &r);
    area = 3.14 * r * r;
    printf("Area of circle = %f", area);
    return 0;
}