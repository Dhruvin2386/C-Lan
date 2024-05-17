// #include<stdio.h>

// int main(){

//     int a, b, c, d, e, f, g, total;
//     float per;
    
//     printf("Gujarati :- ");
//     scanf("%d", &a);

//     printf("English :- ");
//     scanf("%d", &b);

//     printf("Maths :- ");
//     scanf("%d", &c);

//     printf("Sanskrit :- ");
//     scanf("%d", &d);

//     printf("Hindi :- ");
//     scanf("%d", &e);

//     printf("Science :- ");
//     scanf("%d", &f);

//     printf("Social Science :- ");
//     scanf("%d", &g);

//     total = a + b + c + d + e + f + g;
//     printf("Total Obtained Marks :- %d\n", total);

//     per = total / 7;
//     printf("Percentage = %.2f\n", per);

//     return 0;
// }

#include<stdio.h>

int main(){

    int p, r, n;
    float interest, total;

    printf("Enter Amount = ");
    scanf("%d", &p);

    printf("Enter Rate of Interest = ");
    scanf("%d", &r);

    printf("Enter Number of Year = ");
    scanf("%d", &n);

    interest = p * r * n / 100 ;

    printf("Total Interest = %.2f\n", interest);

    total = p + interest;

    printf("Total Amount With Interest = %.2f\n", total);

    return 0;
}