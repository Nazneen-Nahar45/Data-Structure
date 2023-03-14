#include <stdio.h>
#include <stdbool.h>

#define MAX_QUEUE_SIZE 5

int queue[MAX_QUEUE_SIZE];
int front = -1;
int rear = -1;

bool isEmpty() {
    return front == -1;
}

bool isFull() {
    return (rear+1)%MAX_QUEUE_SIZE == front;
}

void enqueue(int data) {
    if (isFull()) {
        printf("Error: Queue is full\n");
        return;
    }
    if (isEmpty()) {
        front = 0;
        rear = 0;
    } else {
        rear = (rear+1)%MAX_QUEUE_SIZE;
    }
    queue[rear] = data;
    printf("Enqueued %d\n", data);
}

void dequeue() {
    if (isEmpty()) {
        printf("Error: Queue is empty\n");
        return;
    }
    printf("Dequeued %d\n", queue[front]);
    if (front == rear) {
        front = -1;
        rear = -1;
    } else {
        front = (front+1)%MAX_QUEUE_SIZE;
    }
}
void display(){
     int i;

    for(i=front;i<=rear; i++)
    {
        printf("%d  ",queue[i]);
    }
   }

int main() {
    int choice, data;
    while (true) {
        printf("\nCircular Queue Menu\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
         printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to enqueue: ");
                scanf("%d", &data);
                enqueue(data);
                break;
            case 2:
                dequeue();
                break;
            case 3 :
                display();
                break ;
            case 4:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}
