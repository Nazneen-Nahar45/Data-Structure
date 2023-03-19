#include <stdio.h>
#include <stdlib.h>

// Define a structure for a linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a node at the end of the linked list
void insertAtEnd(struct Node** head_ref, int new_data) 
{
    // Allocate memory for new node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    
    // Assign data to the new node
    new_node->data = new_data;
    
    // Set the next pointer of the new node to NULL
    new_node->next = NULL;
    
    // If the linked list is empty, make the new node as the first node
    if (*head_ref == NULL) 
    {
        *head_ref = new_node;
        return;
    }
    
    // Otherwise, traverse the linked list to the last node
    struct Node* last = *head_ref;
    while (last->next != NULL) 
    {
        last = last->next;
    }
    
    // Link the last node to the new node
    last->next = new_node;
}

// Function to print the linked list
void printList(struct Node* node) 
{
    printf("Linked List: ");
    while (node != NULL) 
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

// Function to reverse the linked list
void reverseList(struct Node** head_ref) 
{
    struct Node *prev_node = NULL, *curr_node = *head_ref, *next_node = NULL;
    
    while (curr_node != NULL) 
    {
        next_node = curr_node->next;  // Store the next node
        curr_node->next = prev_node;  // Reverse the link of the current node
        prev_node = curr_node;        // Update the previous node to the current node
        curr_node = next_node;        // Update the current node to the next node
    }
    
    *head_ref = prev_node;  // Update the head of the linked list
}

int main() 
{
    struct Node* head = NULL;
    int data, n;
    
    printf("Enter the number of elements to insert: ");
    scanf("%d", &n);
    
    for (int i=1; i<=n; i++) 
    {
        printf("Enter element %d: ", i);
        scanf("%d", &data);
        insertAtEnd(&head, data);  // Insert the element at the end of the linked list
    }
    
    printList(head);  // Print the linked list
    
    reverseList(&head);  // Reverse the linked list
    
    printList(head);  // Print the reversed linked list
    
    return 0;
}
