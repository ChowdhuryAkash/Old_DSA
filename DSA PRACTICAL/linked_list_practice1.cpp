#include<stdio.h>
#include<stdlib.h>

struct node{
	int val;
	struct node *next_node_address;
};
struct node *first_node=0,*current_node,*last_node,*del_last_node,*temp_node;
void insert(){
	current_node=(struct node *)malloc(sizeof(struct node));
	printf("Enter the number you want to insert:");
	int input;
	scanf("%d",&input);
	current_node->val=input;
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

void print(){
	current_node=first_node;
	printf("Elements are:   ");
	    while(current_node!=NULL){
		printf("%d\t",current_node->val);
		current_node=current_node->next_node_address;
     	}
	printf("\n");
}
void size(){
	int size=0;
	current_node=first_node;
	while(current_node!=NULL){
		size++;
		current_node=current_node->next_node_address;
	}
	printf("Number of elements in the list is :%d\n",size);
}
void deletee(){
	printf("Enter the position(greater than 0) you want to delete:");
	int delete_pos;
	scanf("%d",&delete_pos);
	
	if(delete_pos==1){
		first_node=first_node->next_node_address;
	}
	else{
		int pos_count=1;
		current_node=first_node;
		while(pos_count!=delete_pos){
			pos_count++;
			del_last_node=current_node;
			current_node=current_node->next_node_address;
			if(pos_count==delete_pos){
				del_last_node->next_node_address=current_node->next_node_address;
				
				
			}
		}
	}
}

void add(){
	printf("Enter tye position(greater than 0) where you want to add:");
	int add_pos;
	scanf("%d",&add_pos);
	
	
	current_node=(struct node *)malloc(sizeof(struct node));
	printf("Enter the number you want to insert:");
	int input;
	scanf("%d",&input);
	current_node->val=input;
	
	
	if(add_pos==1){
		current_node->next_node_address=first_node;
		first_node=current_node;
		
	}
	else{
		int pos_count=1;
		temp_node=first_node;
		while(pos_count!=add_pos){
			pos_count++;
			del_last_node=temp_node;
			temp_node=temp_node->next_node_address;
			if(pos_count==add_pos){
			current_node->next_node_address=temp_node;
			del_last_node->next_node_address=current_node;
				
				
				
			}
		}
	}
}
int main(){
	while(1){
		
		
		int flag;
		printf("Enter 1 to create, 2 to display, 3 to see number of elements, 4 to insert a new value, 5 to delete, 6 to exit:");
		scanf("%d",&flag);
		switch(flag){
			case 1:insert();
			break;
			case 2:print();
			break;
			case 3:size();
			break;
			case 4:add();
			break;
			case 5:deletee();
			break;
			case 6:exit(0);
			break;
			default:printf("Enter any valid input.\n");
		}
	}
	
	
	
	
	
	return 0;
}
