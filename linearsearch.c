#include<stdio.h>
int main()
{
    int   i=0  , n ;
    printf("Enter array size\n") ;
    scanf("%d" , &n) ;
    int arr[n] ;
    for(i = 0 ; i<n ; i++)
    {
      scanf("%d", &arr[i]) ;
    }
    int key ;
    int flag = 0 ;
    scanf("%d", &key);
    for(i=0 ; i<n ; i++) {

            if(arr[i]==key){
                flag = 1 ;
                break ;
            }

    }
    if(flag==1){
        printf("%d",i );
    }
else {
    printf("item not found");

}

return 0 ;





}
