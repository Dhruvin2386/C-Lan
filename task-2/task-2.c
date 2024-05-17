#include<stdio.h>

int main(){

    int a = 10;
    int b = 20;
    float c = 30.50;

    int add = a + b;
    float f_add = a + b + c;

    int sub = a - b;
    float f_sub = c - b + a;

    int mul = a * b;
    float f_mul = c * a;

    int div = b / a;
    float f_div = c / a;

    int per = b % a ;

    char latter = 'a';

    printf("Add = %d\n", add);
    printf("Float Add = %.2f\n\n",f_add);

    printf("Sub = %d\n", sub);
    printf("Float Sub = %.2f\n\n",f_sub);

    printf("Mul = %d\n", mul);
    printf("Float Mul = %.2f\n\n",f_mul);

    printf("Div = %d\n", div);
    printf("Float Div = %.2f\n\n",f_div);

    printf("Per = %d\n\n", per);

    printf("Surname = %c\n", latter);
    printf("value = %d\n", latter);
    return 0;
}