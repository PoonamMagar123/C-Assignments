#include<stdio.h>

int main()
{
    int i = 0;

    int startn = 0;

    int endn = 0;

    printf("Enter First Number");
    scanf("%d",&startn);

    printf("Enter Second Number");
    scanf("%d",&endn);

    for(i = startn; i <= endn; i++)
    {
        printf("%d\n",i);
    }
    
}