#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 10
int cq[MAXSIZE];
int rear=-1, front=-1;
void insert()
{
    if((rear+1)%MAXSIZE==front)
    {
        printf("The queue is empty");
    }
    else
    {
        int n;
        printf("Enter an element to be inserted");
        scanf("%d",&n);
        if(rear==-1 && front==-1)
        {
            rear=0;
            front=0;
        }
        else
        {
            rear=(rear+1)%MAXSIZE==front;
        }
          cq[rear]=n;
    }
}
void delete1()
{
    if(front==-1 && rear==-1)
    {
        printf("The stack is underflow");
    }
    else
    {
        int n;
        n=cq[front];
        if(front == rear)
        {
            rear=-1;
            front=-1;
        }
        else
        {
            front=(front+1)%MAXSIZE;
        printf("The deleted element is:%d",n);
        }
    }
}
void display()
{
    int i;
    if(rear==-1 && front==-1)
    {
        printf("The queue is underflow");
    }
    else
    {
        printf("element of queue are:");
        for(i=front; i!=rear; i=(i+1)%MAXSIZE)
        {
          printf("%d",cq[i]);
        }
        printf("%d",cq[i]); 
    }
}
int main()
{
    int choice;
    do
    {
    printf("\n 1.Insert \n 2.Delete \n 3.Display");
    printf("\n Enter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: insert();
        break;
        case 2: delete1();
        break;
        // case 3: display();
        // break;
       }
    } while(choice!=4);
}