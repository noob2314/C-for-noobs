#include <stdio.h>
void main()
{
    int c,b;
    
    printf("enter the value of c:");
    scanf("%d",&c);
    
    printf("enter the value of b:");
    scanf("%d",&b);
    
    c=c+b;
    b=c-b;
    c=c-b;
    
    printf("after swapping two values c = %d, b= %d",c,b);
}