#include<stdio.h>
int main()
{
    int num1, num2;

    printf("Enter First number: ");
    scanf("%d",&num1);

    printf("Enter Second Number: ");
    scanf("%d",&num2);

    if(num2==0)
        printf("Can't divided by Zero.");
    else
        printf("Answer is : %d.", num1/num2);


    return 0;
}
