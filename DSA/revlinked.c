#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *add;
}; struct node *start=NULL, *temp,*new1, *prev=NULL, *next=NULL;
void create()
{
    int n;
    char ch;
     printf("Enter the first element to be inserted");
  scanf("%d",&n);
    start=(struct node*) malloc (sizeof(struct node*));
   start->data=n;
   start->add=NULL;
   temp=start;
   printf("Want to continue?");
   scanf(" %s",&ch);
   while(ch=='Y'|| ch=='y')
   {
    printf("Enter the next element");
     scanf("%d",&n);
     new1=(struct node*) malloc(sizeof(struct node));
     new1->data=n;
     new1->add=NULL;
     temp->add=new1;
     temp= temp->add;
     printf("Want to continue?");
     scanf(" %s",&ch);
   }
} 
  void display()
  {
    if(start==NULL)
    {
        printf("List not found");
    }
    else
    {
      temp = start;
      printf("The elements of list are:");
      while(temp!=NULL)
      {
        printf("\n %d", temp->data);
        temp=temp->add;
      }
      printf("\n");
    }
}
void rev() {

    if (start == NULL) {
        printf("List is empty, cannot reverse.\n");
        return;
    }

    temp = start;
    while (temp != NULL) 
    {
        next = temp->add;
        temp->add = prev;
        prev = temp;
        temp = next;
    }
    start = prev;

    printf("List has been reversed.\n");
}

int main()
{
    create();
    display();
    rev();
    display();
}