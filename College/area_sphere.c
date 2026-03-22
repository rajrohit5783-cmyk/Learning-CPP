#include<stdio.h>

int main(){
    float r, area;
    printf("Enter the radius of Sphere: ");
    scanf("%f", &r);
    area = 4 * 3.14 * r * r;
    printf("Area of sphere = %f", area);
    return 0;
}