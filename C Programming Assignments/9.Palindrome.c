#include<stdio.h>

int main()
{
    int no, r, sum = 0, c;

    printf("Enter a number : ");
    scanf("%d", &no);
    c = no;

    while(no>0)
    {
        r = no % 10;

        sum= r + (sum * 10);

        no = no / 10;

    }
    if (c == sum)
    {
        printf("Number is palindrome");
    }
    else
    {
        printf("Number is not palindrome");
    }

    return 0;
    
}