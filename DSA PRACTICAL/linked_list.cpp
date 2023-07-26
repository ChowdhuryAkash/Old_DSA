#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node *next;
};

struct node *head, *tail, *p, *q, *temp1, *temp2;
int choice=1, count=0, pos, ch, i=1;
int create(){
    p = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &p->data);
    p->next=NULL;
    if(head==NULL){
        head = tail = p;
    }else{
        tail-> next=p;
        tail=p;
    }
}

int display(){
    q=head;
    while(q!=NULL){
        printf("%d\n", q->data);
        q= q->next;
    }
}

int insert(){
        int pos;
    printf("Enter position you want to insert: ");
    scanf("%d", &pos);
    q=head;
    while(i<pos-1){
        q=q->next;
        i++;
    }
    p=(struct node *)malloc(sizeof(struct node));
    printf("Enter data you want to insert: ");
    scanf("%d", &p->data);
    p->next = q->next;
    q->next=p;
}

int del(){
    int pos,i=0;
    printf("Enter position you want to delete: ");
    scanf("%d", &pos);
    q=head;
    while(i<pos-1){
        q = q->next;
        i++;
    }
    q->next=q->next->next;
    
}

int length(){
    q=head;
    while(q!=NULL){
        count++;
        q=q->next;
    }
printf("Length: %d", count);
}

int reverse(){
    temp1=NULL;
    q=temp2=head;
    while(temp2!=NULL){
        temp2=temp2->next;
        q->next=temp1;
        temp1=q;
        q=temp2;
    }
    head=temp1;
}


int main(){
    head=tail=NULL;
    while(choice){
        printf("\nEnter\n1 to create\t6 to display\t2 to insert\t3 to delete\t4 to count length\t5 to reverse\t7 to exit\n");
        scanf("%d", &ch);
        switch(ch){

    case 1: 
            create();
            break;
    case 2: 
            insert();
            break;
    case 3: 
            del();
            break;
    case 4: 
            length();
            break;
    case 5: 
            reverse();
            break;
    case 6:
            display();
            break;
    case 7: exit(0);

    default: printf("Wrong choice!!!! Enter again :)");
        }
    }
}
