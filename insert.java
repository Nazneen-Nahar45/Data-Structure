#include<stdio.h>
void  InsertElement(int a[],int sz,int element,int pos);

int main(){
    int n;
    scanf("%d",&n);///6
    ///array initialization
    int arr[n+1];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);///1,2,3,4,5,6
    }
    /// Last index put 0

    arr[n] = 0;///1,2,3,4,5,6,0

    ///input element & Position
    int element,pos;
    scanf("%d %d",&element,&pos);
    ///Function call which insert element given position
    InsertElement( arr, n+1, element, pos);
    ///print updated array
    for(int i=0;i< n + 1 ;i++){
        printf("%d ",arr[i]);
    }

}
void InsertElement(int a[],int sz,int element, int pos){


    for(int i=sz-1;i>pos;i--){
        ///a[6]=0;
        ///a[6] = a[6-1]
        ///a[6] = 6;
        a[i] = a[i-1];
    }
    a[pos] = element;

}

