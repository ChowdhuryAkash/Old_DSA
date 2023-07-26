#include<stdio.h>
#include<conio.h>

void quicksort(int arr[20],int left,int right){
	int pivot,i,j,temp;
	if(left<right){
		pivot=left;
		i=left;
		j=right;
		while(i<j){
			while(arr[i]<=arr[pivot] && i<right){
				i++;
			}
			while(arr[j]>arr[pivot]){
				j--;
			}
			if(i<j){
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
		temp=arr[j];
		arr[j]=arr[pivot];
		arr[pivot]=temp;
		quicksort(arr,left,j-1);
		quicksort(arr,j+1,right);
	}
}
int main(){
	int arr[20],left,right,size;
	printf("Enter how many number you want to enter :");
	scanf("%d",&size);
	printf("Enter the %d numbers :\n",size);
	
	for(int i=0;i<size;i++){
		printf("Enter the %d th element :",i+1);
		scanf("%d",&arr[i]);
	}
	
	
	left=0;
	right=size-1;
	quicksort(arr,left,right);
	for(int i=0;i<size;i++){
		printf("%d",arr[i]);
	}
	
}
