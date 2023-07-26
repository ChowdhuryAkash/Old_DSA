#include<stdio.h>
#include<conio.h>



void quicksort(int arr[20],int left,int right){
	int i=left;
	int j=right;
	int pivot=j;
	
	while(i<j){
		while(arr[i]<=arr[pivot] && i<j){
			i++;
		}
		while(arr[j]>arr[pivot]){
			j--;
		}
		
		if(i<j){
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	int temp=arr[j];
	pivot=arr[j];
	arr[j]=temp;
	
	quicksort(arr,left,j-1);
	quicksort(arr,j+1,right);
	
			
	

}
int main(){
	int arr[]={1,13,17,4,9,5,22,30};
	int size=sizeof(arr)/4;
	int left=0;
	int right=size-1;
	int a;
//	for(a=0;a<size;a++){
//		printf("%d ",arr[a]);
//	}
	quicksort(arr,0,right);
	for(a=0;a<size;a++){
		printf("%d ",arr[a]);
	}
	
	
	return 0;
}
