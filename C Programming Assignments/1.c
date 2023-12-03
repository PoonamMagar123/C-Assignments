#include<stdio.h>

int main()
{
    int No[5], arr[5], i, CubeOdd = 0, SquareEven = 0;

    printf("Enter 5 Numbers : \n");
    // scanf("%d", &No[i]);

    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &No[i]);
    }


    for(i = 0; i <= 4; i++)
    {
    
        // if (No[i] % 2 == 0)
        
            No[i]  = (No[i] * No[i]);
          
        
        // else
        // {
        //     CubeOdd = (No[i] * No[i]* No[i]);
        //     printf("cube of %d : %d \n",No[i],CubeOdd);
        // }
 
    }

    for ( i = 0; i < 5; i++)
    {
       printf("%d\n",No[i]);
    }
    
    
    return 0;
    
}