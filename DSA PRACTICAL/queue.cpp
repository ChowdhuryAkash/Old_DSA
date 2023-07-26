#include<stdio.h>

int arr[100];
int size;
int front=-1,back=-1;
void create(){
	if(back==size-1){
		printf("Queue is almost full...!");
	}
	else{
		back++;
	printf("Enter the number u want to insert :");
	int val;
	scanf("%d",&val);
	arr[back]=val;
	
}
	
}
void delet(){
	if(front>=back){
		printf("Queue is already empty...!");
	}
	front++;
}
void display(){
	printf("Values are :");
	for(int i=front+1;i<=back;i++){
		printf("%d\t",arr[i]);
	}
}

int main(){
	
	printf("Enter the maximum capacity of the queue :");
	scanf("%d",&size);
	
	while(1){
	 printf("Enter 1 to insert, 2 to delete 3 to display :");
	 int flag;
	 scanf("%d",&flag);
	 switch(flag){
	 	case 1:create();
	 	break;
	 	case 2:delet();
	 	break;
	 	case 3:display();
	 	break;
	 }
	 
}
}
