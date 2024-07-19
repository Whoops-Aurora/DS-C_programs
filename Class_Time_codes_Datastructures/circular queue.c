#include <stdio.h>
#define size 10

int enqueue(int, int, int[]);
int dequeue(int, int, int[]);
void display(int, int, int[]);

int main()
{
    int front = -1, rear = -1;
    int Q[size];

    printf("1-Enqueue\n2-Dequeue\n3-Display\n4-Terminate operations on the queue\n");
    while (1)
    {
        int operation;
        printf("Enter operation\n");
        scanf("%d", &operation);

        switch(operation)
        {
            case 1:
                rear = enqueue(front, rear, Q);
                break;
            case 2:
                front = dequeue(front, rear, Q);
                break;
            case 3:
                display(front, rear, Q);
                break;
            case 4:
                printf("All operations on the queue have been terminated\n");
                break;
            default:
                printf("Invalid command\n");
                break;
        }
    }

    return 0;
}

int enqueue(int front, int rear, int Q[size])
{
    if (rear == size - 1)
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

int dequeue(int front, int rear, int Q[size])
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

void display(int front, int rear, int Q[size])
{
    if (front == rear)
    {
        printf("No elements to display\n");
    }

    else
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
}
