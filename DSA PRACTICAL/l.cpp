#include<stdio.h>
#include<stdlib.h>
struct node{
	int val;
	struct node *next_node_address;
};
struct node *first_node=0,*current_node,*last_node;

void create(){
	current_node=(struct node *)malloc(sizeof(struct node));
	printf("Enter the value :");
	scanf("%d",&current_node->val);
	
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
	
	while(current_node!=0){
		printf("%d\t",current_node->val);
		current_node=current_node->next_node_address;
		
		
	}

	
}
int insert_pos,insert_val,th;

void insert(){
}
int main(){
	while(1){
	printf("Enter 1 to create, 2 to display, 3 to insert:");
	int a;
	scanf("%d",&a);
	switch(a){
		case 1:create();
		break;
		case 2:display();
		break;
		case 3:insert();
		break;
		default:printf("Enter proper value :");
	}
	}
	
	
	
	
	
	
	
	
	
	
}
