#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct  node *add;
}; struct node *start = NULL, *temp, *new1,*pre,*next;
void create()
{
    int n;
    char ch;
    printf("Enter the first element");
    scanf("%d",&n);
     start=(struct node*) malloc(sizeof(struct node));
     start-> data=n;
     start-> add=NULL;
     temp = start;
     printf("Want to continue");
     scanf(" %s",&ch);
     while(ch=='Y'||ch=='y')
     {
        printf("Enter the next element");
        scanf("%d",&n);
        new1=(struct node*) malloc(sizeof(struct node));
        new1-> data=n;
        new1-> add=NULL;
        temp-> add=new1;
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
void ins_first()
{
    int n;
if(start==NULL)
{
    printf("No List Found");
}
else
{
    printf("Enter the new element for insertion");
    scanf("%d", &n);
    new1=(struct node*) malloc (sizeof(struct node));
    new1->data=n;
    new1->add=NULL;
    new1->add=start;
    start=new1;
}
}
void ins_last()
{
    int n;
    if(start==NULL)
    {
        printf("List is not found");
    }
    else
    {
      printf("Enter the new element to be inserted at last");
      scanf("%d", &n);
      new1=(struct node*) malloc (sizeof(struct node));
      new1->data=n;
      new1->add=NULL;
      temp=start;
      while(temp->add!=NULL)
      {
        temp=temp->add;
      }
      temp->add=new1;
    }
}
void ins_pos()
{
    int n;
    int pos;
    int i=1;
    if(start==NULL)
    {
        printf("List not found");
    }
    else
    {
        printf("Enter the element to be inserted");
        scanf("%d",&n);
         new1=(struct node*) malloc (sizeof(struct node));
        new1->data=n;
      new1->add=NULL;
     printf("Enter the postion");
     scanf("%d",&pos);
     next = start;
     while(i<pos)
     {
        pre=next;
        next= next->add;
        i++;
     }
     pre->add=new1;
     new1->add=next;
     new1->data=n;
    }
}
void del_first()
{
    if(start==NULL)
    {
        printf("List is empty");
    }
    else
    {
        temp = start;
        start= start->add;
        printf("Deleted node is %d",temp->data);
        free(temp);
    }
}
void del_last()
{
    if(start==NULL)
    {
        printf("List is empty");
    }
    else
    {
     temp=start;
     while(temp->add!=NULL)
     {
      pre=temp;
      temp=temp->add; 
     }
     pre->add=NULL; 
     printf("Deleteed node is %d",temp->data);
     free(temp);
    }
}
void del_pos()
{
    int pos,i=1;
    if(start==NULL)
    {
        printf("List not found");
    }
    else
    {
      printf("Enter the position to be deleted");
      scanf("%d",&pos);
      temp=start;
      while(i<pos)
      {
       pre=temp;
       temp=temp->add;
       i++;
      }
      next=temp->add;
      pre->add=next;
      printf("Deleted element is %d",temp->data);
      free(temp);
    }
}
void count()
{
    int count=0;
    if(start==NULL)
    {
        printf("List is emplty");
 
   }
   else
   {
    temp=start;
    while(temp!=NULL)
    {
        count++;
        temp=temp->add;
    }
    printf("Number of elements in linked list is %d",count);
   }
}
int main()
{
     int choice;
 do
{
 printf("\n 1.Create the list \n 2.Insert on first \n 3.Insert on last \n 4.Insert at certain position \n 5.Delete from first \n 6.Delete from last \n 7.Delete from certain position \n 8.Display");
 printf("\n Enter your Choice");
 scanf("%d",&choice);
 switch(choice)
 {
    case 1:create();
    break;
    case 2:ins_first();
    break;
    case 3:ins_last();
    break;
    case 4:ins_pos();
    break;
     case 5:del_first();
    break;
     case 6:del_last();
    break;
     case 7:del_pos();
    break;
     case 8:display();
    break;
    case 9: count();
    break;
 }
}
while (choice!=10);
} 