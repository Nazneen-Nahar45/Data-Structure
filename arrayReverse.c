#include<stdio.h>
int main()
{
     printf("Enter the array size : ") ;
     int size ,  i;

    scanf("%d" , &size) ;

    int  array[size] ;

    for(i=0 ; i<size ; i++)
    {
        scanf("%d" , &array[i]);
    }
     for(i=size-1 ; i>=0 ; i--)
     {
         printf("%d\t" , array[i]) ;

     }

    return 0 ;

}
