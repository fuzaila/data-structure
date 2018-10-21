#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include"dequeue.h"
int front=-1, rear=-1;
int *queue;
int size;
void setsize(int a)
{
		size=a;
		queue=malloc(sizeof(size));
}
bool isempty()
{
		if(front==-1)
									return true;
		else
			return false;
}
bool isfull(int size)
{	
	if((front==0 && rear==size-1)||front==rear+1)
					                                return true;
	else
		return false;
}
void insert_rear(int item)
{	
    if(isfull(size))
	{
								printf("\nOverflow\n");
								return;
	}
	else if(rear==-1)
	{
				rear++;
				front++;
	}
	else if(rear==size-1 && front>0)
									rear=0;
	else
	{
		rear++;
		queue[rear]=item;
		printf("Inserted %d",item);
	}	
}
void delete_front()
{
	if(isempty())
	{
					printf("Queue empty");
					return;
	}					
	else
	{
		printf("%d deleted",queue[front]);
		front++;
	}	
}
void insert_front(int item)
{
    if(isfull(size))
	{
								printf("\nOverflow\n");
								return;
	}
	else if(isempty())
	{
				rear=0;
				front=0;
	}								
	else
	{
		if(front==0)
					front=size-1;
		else
			front=front-1;
		
	}	
	queue[front]=item;
	printf("Inserted %d",item);
}
void delete_rear()
{
	if(isempty())
	{
					printf("Queue empty");
					return;
	}			
	printf("%d deleted.\n",queue[rear]);	
	if(front==rear)
	{
				front=-1;
				rear=-1;
	}			
	else
	{
		if(rear==0)
					rear=size-1;
		else
				rear--;		
	}	
}					
