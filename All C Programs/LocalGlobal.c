#include<stdio.h>

int X = 10; 

void Demo()
{

  int B = 30;

  printf("Value Of A from Demo :%d\n", B);
  printf("Value Of X from Demo :%d\n", X);

}

int main()
{
  int A = 20;

  printf("Value Of A from main: %d\n", A);
  printf("Value Of X from main: %d\n", X);
    

  Demo();

return 0;
}