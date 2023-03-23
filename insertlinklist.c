#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

//display the list
void printList()
{
    struct node *ptr = head;
    printf("\n[ ");

    //start from the beginning
    while(ptr != NULL)
    {
        printf("(%d) ",ptr->data);
        ptr = ptr->next;
    }

    printf(" ]");
}

struct node* insert_at_pos(struct node *head, int newkey, int pos)
{
    struct node *newNode;

    newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = newkey;
    newNode->next = NULL;

    struct node *ptr = head;

    for(int i=1; i<pos-1; i++)
    {
        ptr = ptr->next;
    }

    newNode->next = ptr->next;
    ptr->next = newNode;

    return head ;
}
struct node* insert_end( int newkey)
{
    struct node *prev = head ;
    struct node *newnode;

    newnode = (struct node*) malloc(sizeof(struct node));
    newnode->data = newkey;
    newnode->next = NULL;
 prev->next = newnode;

    return newnode;
}


//insert link at the first location
void insertFirst( int data)
{
    //create a link
    struct node *link = (struct node*) malloc(sizeof(struct node));
    link->data = data;

    //point it to old first node
    link->next = head;

    //point first to new first node
    head = link;
}

void main()
{

    insertFirst(10);
      insert_end(120);
    insertFirst(20);
    insertFirst(30);

    insertFirst(1);
    insertFirst(40);

    insertFirst(56);

    printList();
    struct node  *ptr = head ;
    printf("after inserting at pos");
    int pos = 3;
    head = insert_at_pos(head, 100, pos);

    ptr = head;
    printList();




    printf("Original List: ");

    //print list
    printList();
    return 0;


}
