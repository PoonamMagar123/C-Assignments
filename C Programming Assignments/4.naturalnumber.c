#include<stdio.h>

int main()
{
    int i , n;

    printf("Enter a Number\n");
    scanf("%d",&n);

    printf("Natural numbers 1 to %d: \n",n);

    for(i = 1; i<= n; i++)
    {
        printf("%d\n",i);
    }

    return 0;
}