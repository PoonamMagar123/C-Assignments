#include<stdio.h>

int main()
{
    int num, result = 0, remainder, original;
    
    printf("Enter Number : ");

    scanf("%d",&num);

    original = num;

    while(original != 0)
    {
        remainder = original % 10;

        result = ( remainder * remainder * remainder) + result;

        original = original / 10;
    }

    if(result == num)
    {
        printf("The Given Number Is Armstrong Number");
    }
    else
    {
        printf("The Given Number Is Not Armstrong Number");
    }
    
    return 0;
}