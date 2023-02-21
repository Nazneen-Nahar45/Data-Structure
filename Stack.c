#include<stdio.h>
#include<stdlib.h>
int i,n=10;
int  stack[10];
int top=-1;
void push();
void pop();
void display();
int option;
int main(){
        do{
            printf("\nEnter 1 to push: \nEnter 2 for pop: \nEnter 3 for display: \nEnter 0 for exit\n: ");
            printf("Enter option ");
            scanf("%d",&option);
            switch(option){
                case 1:
                    push();
                    break;
                case 2:
                    pop();
                    break;
                    case 3:
                    display();
                    break;
                    case 4:
                    exit;
                    break;
    }
        }
        while(option!=4);
        return 0;

}
void push(){
        int element;
        if(top==n-1)
        {

            printf("stack overflow");
        }
        else{
            printf("enter thr element\n");
            scanf("%d",&element);
            top++;
            stack[top]=element;
        }
}
void pop()
{

    int element;
    if(top==-1){
        printf("stack underflow");
    }
    else{
        element=stack[top];
        top--;
    }
}
void display()
{


    if(top==-1)
    {
        printf("stack is empty\n");
        for(i=top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
    }
}
