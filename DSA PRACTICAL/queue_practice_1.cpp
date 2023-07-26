#include<stdio.h>
#include<stdlib.h>
int size;
int arr[100];
int front=-1,back=-1;


void insert(){
	if(back>=size-1){
		printf("Queue is already full.\n");
	}
	else{
		printf("Enter the number u want to insert :");
		int input;
		scanf("%d",&input);
		back++;
		arr[back]=input;
		
	}
	
}
void delet(){
	if(front==back){
		printf("The queue is already empty.\n");
	}
	else{
		front++;
	}
}
void print(){
	if(front==back){
		printf("The queue is already empty.");
		
	}
	else{
		printf("Stored values are :  ");
		for(int i=front+1;i<=back;i++){
			printf("%d\t",arr[i]);
		}
	}
	printf("\n");
}
int main(){
	printf("Enter the max size of the queue :");
	scanf("%d",&size);
	while(1){
		printf("Enter 1 to insert, 2 to delete, 3 to print :");
		int flag;
		scanf("%d",&flag);
		switch(flag){
			case 1:insert();
			break;
			case 2:delet();
			break;
			case 3:print();
			break;
			default:printf("Please enter a valid input.");
			
		}
		
	}
	
	
	
	
	
	
	return 0;
}
