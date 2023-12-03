#include<stdio.h>
#include<conio.h>

int main()
{
    int a = 0;

    printf("Enter A Number\n");
    scanf("%d", &a);

     if(a % 2 == 0)
    {
    printf("Given Number is Even",a);
    }
   else
    {
    printf("Given Number is Odd",a);
    }

return 0;
}
