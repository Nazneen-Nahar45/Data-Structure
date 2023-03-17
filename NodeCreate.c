#include<stdio.h>
#include<stdlib.h>

struct node{
int data ;
struct node *next ;
};

int main(){

  struct node *head = NULL ;
  head = (struct node *)malloc(sizeof(struct node));
  head->data = 45 ;
  head-> next = NULL ;

  struct node *current = malloc(sizeof(struct node));
     current -> data = 98 ;
     current -> next = NULL ;
     head -> next = current ;

     struct node *current2 = malloc(sizeof(struct node ));
     current2 -> data = 35 ;
     current2 -> next = NULL ;
     current -> next = current2 ;

     printf("%d %d %d", head-> data ,current -> data , current2 ->data);
  return 0 ;




  }
