#include<stdio.h>
int main(){
    int n ;
    printf("enter array size\n") ;
    scanf("%d",&n) ;

     int arr[n] , i =0;
     for(i = 0 ; i<n ; i++){
        scanf("%d",&arr[i]) ;

     }
     int j , temp =0 ;
     for(i=0 ; i<n-1 ; i++)
     {
         for(j=0 ; j<n-1-i ; j++){
             if(arr[j]>arr[j+1])
             {
                 temp = arr[j] ;
                 arr[j] = arr[j+1];
                 arr[j+1]= temp ;
             }
         }
     }
     for(i=0 ; i<n ; i++){
        printf("%d ", arr[i]);
     }

     return 0 ;

     }
