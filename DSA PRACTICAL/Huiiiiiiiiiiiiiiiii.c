#include<stdio.h>
#include<stdlib.h>
#include<process.h>

struct node{
	int data;
	struct node *next;
};

struct node *head, *tail, *p;

void create(){
	p=(struct node *)malloc(sizeof(struct node));
	printf("Enter data: ");
	scanf("%d", &p->data);
	p->next=NULL;
	if(head==NULL){
		head=tail=p;
	}else{
		tail->next=p;
		tail=p;
	}
}

void display(){
	tail=head;
	while(tail!=NULL){
		printf("%d\t", tail->data);
		tail=tail->next;
	}
}

int size(){
	int count=0;
	tail=head;
	while(tail!=NULL){
		count++;
		tail=tail->next;
	}
printf("Size: %d", count);
}

void insert(){
	int position, i=1;
	tail=head;
	printf("Enter the position to insert: ");
	scanf("%d", &position);
	while(i<position-1){
		tail=tail->next;
	}
	p=(struct node *)malloc(sizeof(struct node));
	printf("Enter data to insert: ");
	scanf("%d", &p->data);
	p->next=tail->next;
}

int main(){
	int choice;
	head=tail=NULL;
	while(1){
	printf("\nEnter 1 to create\t2 to display\t3 to insert\t4 to exit\t5 to know size\n");
	scanf("%d", &choice);
	switch(choice){
		
	case 1: create();
			break;
	case 2: display();
			break;
	case 3:
	case 4: exit(0);
	case 5: size();
			break;
	}	
	}
}
