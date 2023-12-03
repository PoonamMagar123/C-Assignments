#include<stdio.h>
#include<conio.h>

int main()
{
    int n = 0;

    printf("Enter A number : ");
    scanf("%d", &n);

    if(n > 0)
    {
        printf("It is Positive Number\n");
    }
    else if(n < 0)
    {
        printf("It is Negative Number\n");
    }
    return 0;
}