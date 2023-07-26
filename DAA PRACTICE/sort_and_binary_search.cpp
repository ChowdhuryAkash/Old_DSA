#include<stdio.h>
#include<conio.h>

int main(){
	int size;
    int arr[size];
	printf("Enter the number of how much element you want to insert :");
	scanf("%d",&size);
	for(int i=0;i<size;i++){
		printf("Enter %dth element :",i+1);
		scanf("%d",&arr[i]);
		
	}
	
	int arr2[size];
	for(int i=0;i<size;i++){
		arr2[i]=arr[i];
		
	}
	
	for(int i=0;i<size;i++){
		printf("%d",arr2[i]);
		
		
	}
	
	//===========================bubble sort=====================================================
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			if(arr2[j]>arr2[j+1]){
				int temp=arr2[j];
				arr2[j]=arr2[j+1];
				arr2[j+1]=temp;
			}
		}
	}
	

	
	//=============================================================================================
	
	//==========================================Binary search==========================================
	int search;
	printf("Enter the element you want to find :");
	scanf("%d",&search);
	int left=0,right=size-1;
	while(left<=right){
		int mid=(left+right)/2;
		if(search==arr2[mid]){
			printf("Searched element is present at %dth position after sortin the list.",mid+1);
			break;
		}
		else if(search<arr2[mid]){
			right=mid-1;
		}
		else if(search>arr2[mid]){
			left=mid+1;
		}
		else{
			printf("Searched element is not present.");
		}
		
	}
	
	//	=====================================================
	
	
	return 0;
}
