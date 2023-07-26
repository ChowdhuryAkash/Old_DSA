#include<stdio.h>
#include<conio.h>


int main(){
	int size,arr[25],i,j,temp;
	printf("Enter how many number you want to insert :");
	scanf("%d",&size);
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=1;i<size;i++){
		j=i-1;
		temp=arr[i];
		while(j>=0 && arr[j]>temp){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	
	
	
	for(int i=0;i<size;i++){
		printf("%d",arr[i]);
	}
}
