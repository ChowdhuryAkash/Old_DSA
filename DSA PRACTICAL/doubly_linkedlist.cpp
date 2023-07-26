#include<stdio.h>
#include<stdlib.h>



struct node{
	int val;
	struct node *prev_node_address;
	struct node *next_node_address;
	
};
struct node *first_node=0,*current_node,*last_node,*temp_node;
void create(){
	current_node=(struct node *)malloc(sizeof(struct node));
	printf("Enter the value you want to insert : ");
	scanf("%d",&current_node->val);
	current_node->next_node_address=0;
	
	if(first_node==0){
		first_node=current_node;
		current_node->prev_node_address=0;
		last_node=current_node;
	}
	else{
		current_node->prev_node_address=last_node;
		last_node->next_node_address=current_node;
		last_node=current_node;
	}
}

void read(){
	printf("Values are : ");
	current_node=first_node;
	temp_node=first_node;
	while(current_node!=NULL){
		printf("%d \t",current_node->val);
		temp_node=current_node;
		current_node=current_node->next_node_address;
		
	}
	printf("\n");
}
int pos;
void deletee(){
	struct node *dprev_node,*dnext_node;
	current_node=temp_node=first_node;
	pos=0;
	int delete_pos;
	printf("Enter the position what u want to delete :");
	scanf("%d",&delete_pos);
	while(pos<=delete_pos){
		//temp_node=current_node;
		current_node=current_node->next_node_address;
		pos++;
	}
	printf("%d",current_node->val);
//	dprev_node=current_node->prev_node_address;
//	dnext_node=current_node->next_node_address;
//	dprev_node->next_node_address=dnext_node;
//	dnext_node->prev_node_address=dprev_node;

}
int main(){
	while(1){
	int flag;
	printf("Enter 1 to insert, 2 to read, 3 to delete a value, 4 to edit :");
	scanf("%d",&flag);
	switch(flag){
		case 1:create();
		break;
		case 2:read();
		break;
		case 3:deletee();
		break;
	}
	
	
	
	
	
	
	
	
	
	
	
}
	
	return 0;
}
