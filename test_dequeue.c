#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include"dequeue.h"
int size;
int main()
{
	int choice,operation,item;
	printf("\nEnter the size of the queue: ");
	scanf("%d",&size);
	setsize(size);
	do{
		printf("\n\n1. Insert element\n2. Delete element\n3. Check if queue is empty\n4. Check if queue is full\n5. Exit\n\nEnter your choice: ");
		scanf("%d",&operation);
		if(operation==1)
		{	
				printf("\nEnter element to insert: ");
				scanf("%d",&item);
				printf("\nWhere do you want to insert?\n1. Front\n2. Rear\n\nEnter you choice: ");
				scanf("%d",&choice);
				if(choice==1)
				{
								insert_front(item);
				}				
				else if(choice==2)
				{
						insert_rear(item);
				}	
				else
						printf("\nInvalid choice!!\n");
						
		}
		else if(operation==2)	
		{
			printf("\nWhere do you want to delete from?\n1. Front\n2. Rear\n\nEnter you choice: ");
			scanf("%d",&choice);
			if(choice==1)
							delete_front(item);
			else if(choice==2)
								delete_rear(item);
			else
			{
				printf("\nInvalid choice!!\n");
			}
		}
		else if(operation==3)
		{
			if(isempty())
						printf("Queue is empty\n");
			else
						printf("Queue is not empty\n");
		}
		else if(operation==4)
		{
					if(isfull(size))
								printf("Queue is full\n");
					else
								printf("Queue is not full\n");
		}
		else if(operation==5)
								exit(0);
		else
			printf("Enter a valid choice!");
	  }while(operation!=6);
	  return 0;
}	  
		
