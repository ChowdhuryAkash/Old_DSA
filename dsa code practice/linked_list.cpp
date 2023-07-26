#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node{
	int number;
	struct node *next_node_address;
};
struct node *first_node=0, *current_node, *last_node;
void insert();
void deletee();
void display();
int main(){
	while(1){
		printf("Enter 1 to insert, 2 to delete, 3 to display :");
		int flag;
		scanf("%d",&flag);
		switch(flag){
			case 1:insert();
			break;
			case 2:deletee();
			break;
			case 3:display();
			break;
			default:printf("Please enter a proper input.\n");
		}
		 
	}
	
}

void insert(){

	
	
	current_node=(struct node *)malloc(sizeof(struct node));
	printf("Enter the number you want to insert:");
	int input;
	scanf("%d",&input);
	current_node->number=input;
	current_node->next_node_address=0;
	//last_node=current_node;
	if(first_node==0){
		first_node=current_node;
		last_node=current_node;
	}
	else{
		last_node->next_node_address=current_node;
		last_node=current_node;
		
	}
	
}

void display(){
	current_node=first_node;
	printf("Elements are:   ");
	    while(current_node!=NULL){
		printf("%d\t",current_node->number);
		current_node=current_node->next_node_address;
     	}
	printf("\n");
	
}
void deletee(){
	printf("Enter the position of the number what you want to delete :");
	int del_pos;
	scanf("%d",&del_pos);
	current_node=first_node;
	if(del_pos==1){
		first_node=current_node->next_node_address;
	}
	else{
		int pos=1;
		current_node=first_node;
		last_node=current_node;
		while(pos!=del_pos){
			pos++;
			last_node=current_node;
			current_node=current_node->next_node_address;
			if(pos==del_pos){
				last_node->next_node_address=current_node->next_node_address;
				
			}
		}
	
	}
}
