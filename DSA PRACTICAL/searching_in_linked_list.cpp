#include<stdio.h>
#include<stdlib.h>

struct node{
	int val;
	struct node *next_node_address;
};
struct node *current_node,*first_node=0,*last_node;
void create(){
	current_node=(struct node *)malloc(sizeof(struct node));
	printf("Enter te value :");
	scanf("%d",&current_node->val);
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

void read(){
    current_node=first_node;
    printf("Values are :");
	while(current_node!=0){
		printf("%d \t",current_node->val);
		current_node=current_node->next_node_address;
		
	}
	printf("\n");
}

void search(){
	int search_val;
	printf("What do u want to search :");
	scanf("%d",search_val);
	
	
	current_node=first_node;
	int pos=0;
	while(current_node!=NULL){
		pos++;
		if(current_node->val==search_val){
			printf("%d",pos);
		}
		current_node=current_node->next_node_address;
	}
	


}
//int size;
//void sizee(){
//	current_node=first_node;
//	size=0;
//	
//	while(current_node!=0){
//		size++;
//		current_node=current_node->next_node_address;
//	}
//	printf("Number of values is  : %d",size);
//	printf("\n");
//	
//}
//void delet(){
//	int delete_pos;
//	printf("Enter the position you want to delete :");
//	scanf("%d",&delete_pos);
//	
//	
//	if(delete_pos==1){
//		current_node=first_node;
//		first_node=current_node->next_node_address;
//		
//		
//	}
//	else{
//		
//	
//	int pos=1;
//	current_node=first_node;
//	while(pos<delete_pos){
//		pos++;
//		last_node=current_node;
//		current_node=current_node->next_node_address;
//		
//		
//	}
//	
//	last_node->next_node_address=current_node->next_node_address;
//	
//   }
//}
//
//void insert(){
//	
//	current_node=first_node;
//	size=0;
//	
//	while(current_node!=0){
//		size++;
//		current_node=current_node->next_node_address;
//	}
//	
//	
//	
//	int insert_pos,insert_val;
//	printf("Enter the position where do you want to insert :");
//	scanf("%d",&insert_pos);
//	printf("Enter the value you want to insert :");
//	scanf("%d",&insert_val);
//	
//	if(insert_pos==1){
//		current_node=(struct node *)malloc(sizeof(struct node));
//		current_node->val=insert_val;
//		current_node->next_node_address=first_node;
//		first_node=current_node;
//		
//	}
//	else if(insert_pos<=size+1){
//    printf("%d",size);
//	int count=1;
//	struct node *temp_node=last_node=first_node;
//	
//	while(count<insert_pos){
//		count++;
//		last_node=temp_node;
//		temp_node=temp_node->next_node_address;
//		
//	}
//	current_node=(struct node *)malloc(sizeof(struct node));
//	current_node->val=insert_val;
//	struct node *next_node_pos=last_node->next_node_address;
//	current_node->next_node_address=next_node_pos;
//	last_node->next_node_address=current_node;
//	
//   }
//   else{
//   	printf("Enter a right position from 1 to %d\n",size+1);
//   }
//   
//}

int main(){
	while(1){
	int flag;
	printf("Enter 1 to Create,2 to read, 3 to see size, 4 to delete, 5 to insert, 6 to search :");
	scanf("%d",&flag);
	switch(flag){
		case 1:create();
		break;
		case 2:read();
		break;
//		case 3:sizee();
//		break;
//		case 4:delet();
//		break;
//		case 5:insert();
//		break;
		case 6:search();
		break;
	}
	
}
	
	
	
	
	
	
	
	
}
