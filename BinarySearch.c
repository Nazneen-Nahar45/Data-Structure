#include<stdio.h>
int main()
{
  int array[100 ] , x , n ,i ;
      scanf("%d", &n) ;

      for(i=0 ; i<n ; i++){
        scanf("%d" , &array[i]) ;
      }

  int low =0 , high = n-1 ;
  printf("enter the element : ") ;
  scanf("%d",&x) ;

  while (high - low >1)
  {
      int mid = (low+high)/2 ;
      if(array[mid]==x) {
        printf("%d\n" , mid);
        break ;
      }
      else if (array[mid]<x)
        low = mid +1 ;
      else
        high= mid ;
  }


  return -1 ;
  }

