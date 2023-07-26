#include<stdio.h>
#include<conio.h>



int main(){
	int size;
	
	printf("Enter the number of the elements:");
	scanf("%d",&size);
	int arr[size];
	for(int a=0;a<size;a++){
		printf("Enter the %d th element :",a+1);
		scanf("%d",&arr[a]);
	}
	size=sizeof(arr)/4;
	for(int a=0;a<size;a++){
		printf("%d",arr[a]);
		
	}
	//========================Bubble sort==================================================
	for(int i=0;i<size;i++){
		for(int j=0;j<size-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	printf("The shorted list is :\t");
	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
	

	//===================================Binary search===============================
	while(1){
			int search;
	printf("Enter the element what you want to search :");
	scanf("%d",&search);
	int left=0;
	int right=size-1;
	int mid;
	int pos=-1;
	while(left<=right){
		mid=(left+right)/2;
		if(search==arr[mid]){
			pos=mid;
			printf("Searched element found at %d th position.\n",mid+1);
			break;
			
		}
		else if(search>mid){
			left=mid+1;
			
		}
		else if(search<mid){
			right=mid-1;
			
		}
		
	}
	if(pos==-1){
		printf("not found.\n");
	}
	
}
		
	
	
	
	
	
	
	
	
	return 0;
}
