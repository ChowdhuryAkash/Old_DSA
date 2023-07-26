#include<stdio.h>
#include<conio.h>
int size;
void min(int arr[20],int left,int right,int minimum);
int main(){                                                                                 
	printf("Enter the number of elements. :");
	
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<size;i++){
		printf("%d",arr[i]);
	}
		int minimum=arr[0];
	min(arr,0,size-1,minimum);
	
	
}
void min(int arr[20],int left,int right,int minimum){

	int mid;

		mid=(left+right)/2;
		if(arr[mid]<minimum){
			minimum=arr[mid];
		}
		printf("%d\n",minimum);
		min(arr,left,mid-1,minimum);
		min(arr,mid+1,right,minimum);
	
}
