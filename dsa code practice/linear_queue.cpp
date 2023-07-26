#include<stdio.h>
int q[5];
int front=-1,back=-1;
int size=sizeof(q)/4;

void enqueue();
void dequeue();
void print();

int main(){
	
	while(1){
		printf("Enter 1 for enqueue, 2 for dequeue, 3 for print :");
		int flag;
		scanf("%d",&flag);
		switch(flag){
			case 1:enqueue();
			break;
			case 2:dequeue();
			break;
			case 3:print();
			break;
			default:
				printf("Please enter a valid input.");
		}
	}
	return 0;
}
void enqueue(){
	if(back==size-1){
		printf("Queue is already full.");
		
	}
	else{
		printf("Enter the number what you want to insert :");
		int number;
		scanf("%d",&number);
		back++;
		if(front==-1){
			front++;
		}
		q[back]=number;
		
	}
}

void dequeue(){
	if(front==rear){
		printf("Queue is already Empty.");
	}
	else{
		front++;
	}
	
}
void print(){
	for(int i=front;i<=back;i++){
		printf("%d\n",q[i]);
		
	}
}
