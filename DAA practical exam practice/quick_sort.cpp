#include<stdio.h>


int swap(int arr[],int start,int end){
	int temp=arr[start];
	arr[start]=arr[end];
	arr[end]=temp;
	return 0;
}
int partition(int arr[],int lb,int ub){
	if(lb<ub){
	int pivot=lb;
	int start=lb;
	int end=ub;
	while(start<end){
		while(arr[start]<=arr[pivot] && start<ub){
			start++;
		}
		while(arr[end]>arr[pivot]){
			end--;
		}
		if(start<end){
			swap(arr,start,end);
		}
	}
		swap(arr,pivot,end);
		return end;
	
}

}

int quickSort(int arr[],int lb,int ub){
	if(lb<ub){
		int loc=partition(arr,lb,ub);
		quickSort(arr,lb,loc-1);
		quickSort(arr,loc+1,ub);
		
	}
	return 0;
}
int main(){
	int arr[]={10,90,70,20,80,50,60,40};
	int last=(sizeof(arr)/4)-1;
	quickSort(arr,0,last);
	
	for(int i=0;i<=last;i++){
		printf("%d \t",arr[i]);
	}
	
	
	
	
	
}
