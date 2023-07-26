#include<stdio.h>
#include<stdlib.h>

struct node{
	int val;
	struct node *link;
};
 
 struct node *head,*tail,*p;

 int create(){
	p=(struct node *)malloc(sizeof(struct node));
	printf("Enter the value :");
	scanf("%d",&p->val);
	
if(head->link==NULL){
	head->link=p;
	head=tail=p;
}else{
	tail=p;
}
	
	
	
	
}



int main(){
	create();
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
