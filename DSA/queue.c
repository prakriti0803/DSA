#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
int arr[MAXSIZE];
int front=0, rear=-1;
void insert()
{
    if(rear==MAXSIZE-1)
    {
        printf("The queue is overflow");
    }
    else
    {
        int n;
        printf("Enter the element to be inserted");
        scanf("%d",&n);
        rear++;
        arr[rear]=n;
    }
}
void display()
{
   if(rear==-1)
    {
        printf("The queue is empty");
    } 
    else
    {
        int i;
        for(i=front; i<=rear; i++)
        {
           printf("\n%d",arr[i]);
        } 
    }
}
void delete1()
{
    if(front>rear)
    {
        printf("The queue is empty");
    }
    else
    {
        int n;
        n=arr[front];
        printf("The deleted element is:%d",arr[front]);
        front++;
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
        case 3: display();
        break;
       }
    } while(choice!=4);
}