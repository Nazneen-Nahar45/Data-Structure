#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* insert_at_end(struct Node *ptr, int newkey)
{
    struct Node *newNode;
    
    newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = newkey;
    newNode->next = NULL;
    
    ptr->next = newNode;
    
    return newNode;
}

struct Node* delete_first(struct Node *head)
{
    if(head == NULL)
    {
        printf("The list is already empty.\n");
    }
    else
    {
       struct Node *temp;
        temp = head;
        
        head = head->next;
        free(temp);
        temp = NULL;
    }
    
    return head;
}

void print_data(struct Node* head)
{
    printf("elements are:\n");
    struct Node* ptr = head;
    while(ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct Node* head = NULL;
    head = (struct Node*) malloc(sizeof(struct Node));
    
    head->data = 45;
    head->next = NULL;
    
    // printf("%d\n", head->data);
    
    struct Node* ptr = head;
    ptr = insert_at_end(ptr, 98);
    ptr = insert_at_end(ptr, 3);
       
    ptr = head;
    print_data(ptr);
    
    head = delete_first(head);
    
    printf("After Deleting First Node: \n");
    ptr = head;
    print_data(ptr);

    return 0;
}
