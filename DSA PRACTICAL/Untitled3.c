#include<stdio.h>
#include<stdlib.h>


struct node{
	int val;
	struct node *link;
};
int choice;
struct node *head, *tail, *p ;

void create(){
	p = (struct node *)malloc(sizeof(struct node));
	printf("Enter value: ");
	scanf("%d", &head.val);
	printf("%d", head.val);
}

int main(){
	create();
}
