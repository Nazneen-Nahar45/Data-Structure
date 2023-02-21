#include <stdio.h>

 int n = 10 ;
int stack[10];
int top;
int i;
int option;
int top=-1;
void push(); 
void pop(); 
void display(); 

int main()
{




//top = -1; // Initializing top to -1 indicates that it is empty
do
{

printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n\n");
printf("Enter your option:");
scanf("%d",&option);

switch(option)
{
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
exit(0);
break;

}
} while(option!=4);
return 0;
}

void push()
{
int element;
if(top == n- 1)
{
printf("Stack overflow\n");
}
else
{
printf("Enter the element to be inserted:");
scanf("%d", &element);
top++;
stack[top]=element;
}
}

void pop()
{
int element;
if(top == -1)
{
printf("Stack underflow\n");
}
else
{
element=stack[top];
printf("The deleted item is %d\n",stack[top]);
top--; // The element below the topmost element is deleted
}
}

void display()
{
if(top == -1)
{
printf("Stack underflow\n"); // Stack is empty
}
else if(top >= 0)
{
printf("The elements of the stack are:\n");
for(i = top; i >= 0; i--) // top to bottom traversal
{
printf("%d\n",stack[i]);
}
}
}
