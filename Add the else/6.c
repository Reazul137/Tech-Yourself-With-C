#include<stdio.h>
int main()
{
    int a, b, op;

    printf("Enter first number: ");
    scanf("%d",&a);

    printf("Enter Second number: ");
    scanf("%d",&b);

    printf("Enter 0 to add, 1 to multiply : ");
    scanf("%d",&op);

    if(op==0)
        printf("%d",a+b);
    else
        printf("%d", a*b);


    return 0;
}
