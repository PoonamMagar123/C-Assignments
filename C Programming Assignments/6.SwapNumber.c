#include<stdio.h>

int main()
{
   int a;
   int b;
   int c;-
   
// try to swap without 3rd variable

    printf("Enter a first Number\n");
    scanf("%d",&a);

    printf("Enter a Second Number\n");
    scanf("%d",&b);

    // c = a;
    // a = b;
    // b = c;

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping :a = %d\n",a);
    printf("After swapping :b = %d",b);


    return 0;
}