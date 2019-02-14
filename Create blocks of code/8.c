#include<stdio.h>
int main()
{
    int answer;

    printf("What is 10+14=?\n");
    scanf("%d",&answer);

    if(answer == 10+14)
        printf("Right!");
    else
    {
        printf("Sorry, You're wrong.");
        printf("The answer is 24");
    }

    return 0;
}
