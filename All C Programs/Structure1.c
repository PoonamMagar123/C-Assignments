#include<stdio.h>

// structure  Declaration
// There is NO memory allocation at this point
struct Demo
{
   int i;           //4
   float f;         //4
   int j;           //4
   double d;        //8
};
   
int main()
{
	// structure object / variables creation
	// memory gets allocated at this point
   struct Demo obj1;
   struct Demo obj2;
   struct Demo obj3;
   
   //Member initialization
   obj1.d = 11.0;
   obj2.i = 21;
   obj3.j = 51;
   
   printf("Size of obj1 is : %d\n",sizeof(obj1));
   printf("Size of obj2 is : %d\n",sizeof(obj2));
   printf("i of obj2 is : %d\n",obj2.i);
	
   return 0;
}




