#include<stdio.h>

int main(){

    int a=1,b=0,c=2,d=3,e=4;

    if (a>b)
    {
        if (a>c)
        {
            if (a>d)
            {
                if (a>e)
                {
                    printf("A is max\n");
                }
                else{
                    printf("E is max\n");
                }
                
            }
            else{
                printf("D is max\n");
            }
            
        }
        else{
            printf("C is max\n");
        }
        
    }
    else{
        if (b>c)
        {
            if (b>d)
            {
                if (b>e)
                {
                    printf("B is max\n");
                }
                else{
                    printf("E is max\n");
                }
                
            }
            else{
                printf("D is max\n");
            }
            
        }
        else{
            printf("C is max\n");
        }
        
    }
    

    return 0;
}