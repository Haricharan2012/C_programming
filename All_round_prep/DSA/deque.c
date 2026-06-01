#include<stdio.h>

#define MAX 10

void add_front(int*,int,int*,int*);
void add_rear(int*,int,int*,int*);
int del_front(int*,int*,int*);
int del_rear(int*,int*,int*);
void disp(int*,int,int);
int count(int*);

int main()
{
	int arr[MAX]; //array to store deque elements
	int front,rear; //front and rear pointers 
	int i,n;
	int choice;
	
	front=rear=-1; // deque empty
	
	for(i=0;i<MAX;i++)
	{
		arr[i]=0; //initialize all elements to zero
	}
	
	while(1)
	{
		printf("\n------------Dequeue implementation----------------");
		printf("\n------------1. Insert_front-----------------------");
		printf("\n------------2. Insert_rear------------------------");
		printf("\n------------3. Delete_front-----------------------");
		printf("\n------------4. Delete_rear-----------------------");
		printf("\n------------5. Display elements-------------------");
		printf("\n------------6. exit ------------------------------");
		printf("\n");
		
		printf("\n enter your choice: ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1 : printf("\n------------Add_front---------------");
				 int ele;
				 printf("\n enter the element to be inserted: ");
				 scanf("%d",&ele);
				 add_front(arr,ele,&front,&rear);
				 break;
				 
			
	                case 2 : printf("\n------------Add_rear-----------------");
		       		int ele2;
		       		printf("\n enter the element to be inserted: ");
		       		scanf("%d",&ele2);
		       		add_rear(arr,ele2,&front,&rear);
		       		break;
		       		
		        case 3 : printf("\n-----------delete_front--------------");
		       		int del;
		       		del=del_front(arr,&front,&rear);
		       		printf("\n the element deleted is %d",del);
		       		break;
		       		
		      case 4 : printf("\n-----------delete_rear----------------");
		       	       int del2;
		       	       del2=del_rear(arr,&front,&rear);
		       	       printf("\n the deleted element is %d",del2);
		       	       break;
		       	       
		      case 5 : printf("\n -----------Display--------------------");
		       	       disp(arr,front,rear);
		       	       break;
		       	       
		      case 6 : return 0;
		       	       
		     default : printf("\n invalid choice try again");
		      	       break;
		      	       
		 }
        }
  
}

void add_front(int *arr,int item,int *pfront,int *prear)
{
	
	int cn;
	int tm;
	
	//check if queue is full
	
	if(*pfront==0 && *prear==MAX-1)
	{
		printf("\n dequeue is full");
		return;
	}

	// if queue is empty
	
	if( *pfront==-1)
	{
		*pfront=*prear=0; //both front and rear point to first index of array
		arr[*pfront]=item; //element entered in first index
		return;
	}
	
	//if there is space at rear side 
	
	if(*prear!=MAX-1)
	{
		
		
		cn=count(arr);//count array elements
		tm=*prear+1; //start from next rear position
		
		//shift elements 1 step right
		
		for(int i=*prear;i>=*pfront;i--)
		{
			arr[i+1]=arr[i];
			
		}
		
		//arr[xtm]=item;
		
		arr[*pfront]=item; //update front position
		
		
		(*prear)++; //increase rear index
		
	}
	
	else
	{
		//if space exists before front 
		
		(*pfront)--; //decrement front pointer
		arr[*pfront]=item; // add element to front position 
	
	}
}

void add_rear(int *arr, int item,int *pfront,int *prear)
{
	//check if dequeu is full
	
	if(*pfront==0 && *prear==MAX-1)
	{
		printf("\n deque is full");
	}
	
	//check if deque is empty
	
	if(*pfront==-1)
	{
		*pfront=0;
		*prear=0;
		arr[*prear]=item;
		return;
	}
	
	//if rear is full
	
	if(*prear==MAX-1)
	{
		//start shifting elements 1 step left
		
		int tm=*pfront-1;
		int i;
		
		//shift elements left 
		
		for(i=*pfront-1;i<*prear;i++)
		{
			tm=i;
			
			//clear last position 
			
			if(tm==MAX-1)
			{
				arr[tm]=0; //clearing position
			}
			else
			{
				arr[tm]=arr[tm+1];
			}
		}
		
		//move rear  left 
		(*prear)--;
		//move front left
		(*pfront)--;
	}
		
		(*prear)++; //move rear forward for inserting element
		
		arr[*prear]=item; // add item to the rear pos
}

int del_front(int *arr,int *pfront,int *prear)
{
	//check if deque is empty
	
	if(*pfront==-1)
	{
		printf("\n deque is empty");
		return 0;
	}
	
	//store  item to be deleted
	
	int item=arr[*pfront];
	
	//clear array position
	
	arr[*pfront]=0;
	
	//if only one element exists
	if(*pfront==*prear)
	{
		arr[*pfront]=0;
		*pfront=*prear=-1;
		
	}
	else
	{
	
	//move pointer forward
	arr[*pfront]=0;
	(*pfront)++;
	}
	return item;
}

int del_rear(int *arr,int *pfront,int *prear)
{
	//check if deque is empty
	
	if(*pfront==-1)
	{
		printf("\n deque is empty");
		return 0;
	}
	
	//store item to be deleted 
	
	int item=arr[*prear];
	
	//clear rear position to zero
	
	//arr[*prear]=0;
	
	if(*pfront==*prear)
	{
		arr[*prear]=0;
		*pfront=-1;
		*prear=-1;
	}
	else
	{
		arr[*prear]=0;
		(*prear)--;
	}
	
	return item;
}

void disp(int *arr,int front,int rear)
{
	
	printf("\n");
	for(int i = front; i <= rear; i++)
	{
		
		printf(" |%d|", arr[i]);
	}
	
	printf("\n");
	
	printf("\n front:%d ",front );
	printf("\n %d :rear",rear );
}

int count(int *arr)
{
	int c=0,i;
	
	for(i=0;i<MAX;i++)
	{
		if(arr[i]!=0)
		{
			c=c+1;
		}
		
	}
	return c;
}
	
	
	
	
	
		
		
		
		
		
		       		
		
	


