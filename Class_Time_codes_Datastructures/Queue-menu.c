#include <stdio.h>
#define SIZEE 10

int enqueue(int, int, int[]);
int dequeue(int, int, int[]);
void display(int, int, int[]);

int pq[100];
int top[SIZEE];
int main()
{
    int front = -1, rear = -1;
    int Q[top];

    printf("1-Enqueue(P in p)\n2-Dequeue(C in c)\n3-Enqueue(P in c)\n4-Dequeue(C in p)\n5-Display\n6-Terminate operations on the queue\n");
    while (1)
    {
        int operation;
        printf("Enter operation\n");
        scanf("%d", &operation);
    switch(operation)
    {

        case 1:
            rear = enqueue1(front, rear, Q);
            break;
        case 2:
            front = dequeue1(front, rear, Q);
            break;
        case 3:
            rear = enqueue2(front, rear, Q);
            break;
        case 4:
            front = dequeue2(front, rear, Q);
            break;
        case 5:
            printf("Consumer:\n");
            display();
            printf("Producer:\n");
            display();
            break;
        case 6:
            printf("All operations on the queue have been terminated\n");
            exit(1);
        default:
            printf("Invalid command\n");
            break;
    }
    return 0;
}

/*int enqueue(int front, int rear, int Q[top])
{
    if (rear == top - 1)
    {
        printf("Queue is full\n");
    }

    else
    {
        rear++;
        printf("Enter element\n");
        scanf("%d", &Q[rear]);
        return rear;
    }
}

int dequeue(int front, int rear, int Q[top])
{
    if (front == rear)
    {
        printf("Queue is empty\n");
    }

    else
    {
        front++;
        printf("%d has been removed from the queue\n", Q[front]);
        return front;
    }
}
*/

void display()
{
        int i = front;
        printf("Elements of the queue from first to last\n");
        while (i != rear)
        {
            printf("%d ", Q[i]);
            i++;
        }
        printf("\n");
}
void enqueue1(int data) {
    if (pq->top == MAX_top) {
        perror("The producer queue is full.\n");
        return 0;
    }
    pq->queue[++pq->top] = data;  // Enqueue
}
void enqueue2(PQueue* pq, int data) {
    if (pq->top == MAX_top) {
        perror("The consumer queue is full.\n");
        return 0;
    }
    pq->queue[++pq->top] = data;  // Enqueue
}
void dequeue1()
{
    if (pq->top == -1)
    {
        perror("The Consumer queue is Empty.\n");
        return 0;
    }
    pq->top=pq->top-1;
    // dequeue
}
void dequeue2()
{
    if (pq->top == -1)
    {
        perror("The Producer queue is Empty.\n");
        return 0;
    }
    pq->top=pq->top-1;
    // dequeue
}
