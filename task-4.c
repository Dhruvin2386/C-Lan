#include<stdio.h>

int main(){
    
    int a;

    printf("Enter Your Marks : ");
    scanf("%d", &a);

    if (a >= 90)
    {
        printf("Your Grade is A1\n");
    }else if (a >=80)
    {
        printf("your Grade is A\n");
    }else if (a >=70)
    {
        printf("your Grade is B1\n");
    }else if (a >=60)
    {
        printf("your Grade is B\n");
    }else if (a >=50)
    {
        printf("your Grade is C\n");
    }else{
        printf("You Are Fail. Try Next Year\n");
    }

    return 0;
}