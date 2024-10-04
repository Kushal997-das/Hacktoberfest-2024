#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define size 10 // macro(in case of array)
int front, rear, A[size];
int front = -1;
int rear = -1; // QUEUE IS EMPTY

void enqueue()
{
    int item;
    // check overflow
    if (rear == size - 1)
    {
        printf("Overflow");
        exit(0);
    }
    else
    {
        printf("Enter the value to be inserted");
        scanf("%d", &item);
        rear = rear + 1;
        A[rear] = item;
        printf("Value inserted");
    }
}

void dequeue()
{
    int item;
     if ((front == -1)&(rear==-1))
  
    {
        printf("Underflow");
    }
    else
    {
        item = A[size];
        front++;
        if (front > rear)
        {
            front = rear = -1;
            printf("Deleted item is %d");
        }
    }
}

void display()
{
    for (int i = front; i <= rear; i++)
    {
        printf("%d", A[i]);
    }
}

void main()
{
    // int i;
    // enqueue(); //for insertion
    // dequeue();//for deletion
    int choice;
    while (true)
    {
        printf("Enter 1 for enqueue 2 for dequue, 3 for display, 4 for exit");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Entered wrong choice");
            break;
        }
    }
}