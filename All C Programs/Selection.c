#include<stdio.h>
#include<stdbool.h>

// %Mod
//== Equality


 bool CheckEven(int iNo)
{
	if((iNo % 2) == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
   int iValue = 0;
   bool bRet = false;
   
   printf("Enter one number\n");
   scanf("%d", &iValue);
   
   bRet = CheckEven(iValue);
   if(bRet == true)
   {
	   printf("it is even number\n");
	   
   }
   else
   {
	   printf("it is odd number\n");
   }
   
   
   
   return 0;
}