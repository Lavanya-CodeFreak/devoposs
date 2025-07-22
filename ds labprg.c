#include<stdio.h>
#include<stdlib.h>
#define size 5
void push( );
void pop( );
void display( );
int stack [size],top=-1;
void main( )
{
int ch;
printf("\n stack using array");
do
{
printf("\n1.push\n2.pop\n3.display\n4.exit");
printf("\n enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:push( );
       break;
case 2:pop( );
      break;
case 3:display( );
      break;
case 4:exit(0);
      break;
default:printf("invalid choice");
}
}while(ch<=4);
}
void push( )
{
int element;
if(top==size-1)
printf("stack is over flow");
else
{
printf("which element you want to insert: ");
scanf("%d",&element);
top=top+1;
stack [top]=element;
printf(" elements insert sucessfully ");
}
}
void pop( )
{
if(top==-1)
printf("stack is under flow");
else
printf("poped element is %d",stack[top]);
top=top-1;
}
void display( )
{
if(top==-1)
printf("stack is empty");
else
{
int i;
printf("element in stack are:\n");
for(i=top;i>=0;i--)
{
printf("%d\n",stack[i]);
}
}
}
