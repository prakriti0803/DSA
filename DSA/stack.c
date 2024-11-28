  #include<stdio.h>
  #include<conio.h>
  #include<stdlib.h>
  #define MAXSIZE 100
  int arr[MAXSIZE];
  int top=-1;
  void push()
  {
    int n;
    printf("Enter the element to be pushed");
    scanf("%d",&n);
    if(top==MAXSIZE-1)
    {
      printf("Stack is overflow");
    }
    else
    {
      top++;
      arr[top]=n;
    }
  }
  void pop()
  {
    int n;
    if(top==-1)
    {
      printf("The stack is Empty");
    }
    else
    {
    n=arr[top];
    top--;
    printf("The poped element is %d",n);
    }
  }
  void display()
  {
    if(top==-1)
    {
      printf("The stack is Empty");
    }
    else
    {
      printf("Elements of array are ");
      for (int i=0; i<=top; i++)
      {
        printf("\n %d", arr[i]);
      }
    }
  }
  void peek()
  {
    printf("The recent element is :%d",arr[top]);
  }
  int main()
  {
  int choice;
  do
  {
  printf("\n 1.Push \n 2.Pop \n 3.Peek \n 4. Display");
  printf("\nEnter your choice");
  scanf("%d",&choice);
  switch(choice)
  {
  case 1:push();
  break;
  case 2:pop();
  break;
  case 3:peek();
  break;
  case 4:display();
  break;  
  }
  }
    while (choice!=5);
  } 
  