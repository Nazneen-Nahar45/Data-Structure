#include <stdio.h>
#include <stdlib.h>

// Define a structure for a linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a node at the beginning of the linked list
void insertAtBeginning(struct Node** head_ref, int new_data) 
{
    // Allocate memory for new node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    
    // Assign data to the new node
    new_node->data = new_data;
    
    // Link the new node to the first node of the linked list
    new_node->next = *head_ref;
    
    // Make the new node as the first node of the linked list
    *head_ref = new_node;
}

// Function to delete the first node of the linked list
void deleteFirstNode(struct Node** head_ref) 
{
    struct Node* temp = *head_ref;
    
    // If the linked list is empty, do nothing
    if (*head_ref == NULL) 
    {
        return;
    }
    
    // Make the second node as the first node of the linked list
    *head_ref = (*head_ref)->next;
    
    // Delete the first node of the linked list
    free(temp);
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
        insertAtBeginning(&head, data);  // Insert the element at the beginning of the linked list
    }
    
    printList(head);  // Print the initial linked list
    
    deleteFirstNode(&head);  // Delete the first node of the linked list
    
    printList(head);  // Print the final linked list
    
    return 0;
}
