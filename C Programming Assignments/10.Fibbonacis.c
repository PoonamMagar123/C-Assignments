#include<stdio.h>

int main()
{
    int a, i, No1= 1, No2 = 0, s;

    printf("Enter A Number :  ");
    scanf("%d", &a);


    for (i = 1; i <= a; i++)
    {
        printf("%d", No1);

        s = No1 + No2;

        No1=No2;

        No2=s;

    }
    return 0;
    
}