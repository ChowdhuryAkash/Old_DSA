#include<stdio.h>
#include<stdlib.h>


struct node{
	int val;
	struct node *next_node_address;
};
struct node *first_node=0,*last_node,*current_node,*new_node,*temp_var;
void create(){
	current_node=(struct node *)malloc(sizeof(struct node));
	printf("Enter the value :");
	int val;
	scanf("%d",&val);
	current_node->val=val;
	current_node->next_node_address=0;

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
	printf("Value of the nodes are :");
	while(current_node!=0){
		
		printf("%d ",current_node->val);
		current_node=current_node->next_node_address;
	}
	printf("\n");
}
int num_of_node;
void size(){
	current_node=first_node;
	num_of_node=0;
	while(current_node!=0){
		current_node=current_node->next_node_address;
		num_of_node++;
		
	}
	printf("Number of nodes is :%d\n",num_of_node);
}
void insert(){
	int insert_pos,insert_val;
	printf("Enter the position where do you want to insert :");
	scanf("%d",&insert_pos);
	printf("Enter the value you want to insert :");
	scanf("%d",&insert_val);
	
	if(insert_pos==1){
			new_node=(struct node *)malloc(sizeof(struct node));
			new_node->next_node_address=first_node;
			new_node->val=insert_val;
			first_node=new_node;
			
		
	}
	else{
			int th_of_node;
	current_node=first_node;
	th_of_node=1;
	while(th_of_node<insert_pos){
		last_node=current_node;
		current_node=current_node->next_node_address;
		th_of_node++;
		
	}
	
	temp_var=last_node->next_node_address;
	new_node=(struct node *)malloc(sizeof(struct node));
	last_node->next_node_address=new_node;
	new_node->next_node_address=temp_var;
	new_node->val=insert_val;
		
	}

}
int delete_pos,delete_pos_count;
 void delet(){
	printf("Enter the position of the value you want to delete :");
	scanf("%d",&delete_pos);
	if(delete_pos==1){
		first_node=first_node->next_node_address;
		
	}
	else{
	current_node=first_node;
	delete_pos_count=1;
	while(delete_pos_count<delete_pos){
		last_node=current_node;
		current_node=current_node->next_node_address;
		delete_pos_count++;
	}
	last_node->next_node_address=current_node->next_node_address;
	
    }
	
}


int main(){
	while(1){
			int flag;
	printf("Enter 1 to create, 2 to display, 3 to see num of elements, 4 to insert a new value, 5 to delete :");
	scanf("%d",&flag);
	switch(flag){
		case 1:create();
		break;
		case 2:display();
		break;
		case 3:size();
		break;
		case 4:insert();
		break;
		case 5:delet();
		break;
	}
		
		
		
	}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
