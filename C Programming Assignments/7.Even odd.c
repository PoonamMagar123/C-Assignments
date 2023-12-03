#include<stdio.h>

int main()
{
    int a, b, i, count;

    printf("Enter First Number: ");
    scanf("%d",&a);

    printf("Enter Second number: ");
    scanf("%d",&b);

    if(a > b)
    {
        i = a;
        a = b;
        b = i;
    }

    printf("Even Number between %d and %d are : \n",a,b);

    for(count = a; count<=b; count++)
    {
        if(count % 2 == 0)
        {
            printf("%d\n",count);
        }
       
    }

    return 0;

}