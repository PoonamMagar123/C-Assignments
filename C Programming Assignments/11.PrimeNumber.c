#include<stdio.h>

int main()
{
    int No = 0, i, COUNT= 0;

    printf("Enter Any Number: ");
    scanf("%d", &No);

    for (i = 2; i <= No/2; i++)
    {
        if (No%i==0)
        {
            COUNT=1;
            break;

        }  
    }


    // for (i = 2; i <= No/2; i++)
    // {
    //     for ( j = 2; j <= No/2; j++)
    //     {
    //         if (COUNT==0)
    //     {
    //         printf("%d \n",No);
    //     }
    //     else
    //     {
    //         printf("%d",No);
    //     }
    //     }
        
    // }
    
       if(No==1)
        {
            printf("It is A number", No);
        }
        else
        {
            if (COUNT==0)
        {
            printf("Prime Number ",No);
        }
        else 
        {
            printf("Not Prime Number ",No);
        } 
        }
        
    
return 0;
    
}