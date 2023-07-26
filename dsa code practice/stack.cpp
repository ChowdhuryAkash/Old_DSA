#include<stdio.h>
#include<conio.h>
int top=-1;
	int stack[10];
	int size=sizeof(stack)/4;
	
void push();
void pop();
void print();
int main(){
	
	while(1){
		printf("Enter 1 for push, 2 for pop, 3 to print the stack:");
		int flag;
		scanf("%d",&flag);
		switch(flag){
			case 1:
			push();
			break;
			
			case 2:
			pop();
			break;
			
			case 3:
			print();
			break;
			
			default:
				printf("Please enter a valid input.");
		}
	}
	
	return 0;
}

void push(){
	if(top==size-1){
		printf("Stack is already full.");
	}
	else{
		top++;
		printf("Enter the number you want to insert.");
		int number;
		scanf("%d",&number);
		stack[top]=number;
		
	}
	
}
void pop(){
	if(top==-1){
		printf("Stack is already empty.");
	}
	else{
		top--;
	}
}
void print(){
	for(int i=0;i<=top;i++){
		printf("%d\n",stack[i]);
	}
}
