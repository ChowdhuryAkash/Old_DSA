#include<stdio.h>

int main(){
	int arr[]={10,20,30,40,50,60,70,80,90,100};
//	for(int i=0;i<10;i++){
//		printf("%d",arr[i]);
//	}
	int search;
	printf("Enter the value u want to search :");
	scanf("%d",&search);
	int size=sizeof(arr)/4-1;
	int left=0,right=size,mid;
//	printf("search : %d, size : %d",search,size);
	//mid=(left+right)/2;
	while(left<=right){
		mid=(left+right)/2;
		if(arr[mid]==search){
			printf("Searched element found at %d th position\n",mid+1);
			break;
		}
		else if(search>arr[mid]){
			left=mid+1;
			
		}
		else if(search<arr[mid]){
			right=mid-1;
			
		}
	}
	if(left>right){
			printf("Searched element couldn't found...!");
		
	}
	
	
}
