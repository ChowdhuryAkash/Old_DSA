#include<stdio.h>

void quicksort(int arr[50],int first,int last){
	int i, j,pivot,temp;
	pivot=first;
	i=first;
	j=last;
	if(first<last){
	while(i<j){
		while(arr[i]<=arr[pivot] && i<last){
			i++;
		}
		while(arr[j]>arr[pivot]){
			j--;
		}
		if(i<j){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
		
	}
	    temp=arr[j];
		arr[j]=arr[pivot];
		arr[pivot]=temp;
		quicksort(arr,first,j-1);
		quicksort(arr,j+1,last);
		
	
}
}


int main(){
	int arr[50],i,j,size,num;
	printf("Enter how many number you want to enter :");
	scanf("%d",&size);
	printf("Enter %d elements :\n",size);
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	i=0;
	j=size-1;
	
	quicksort(arr,i,j);
	
	
	
		for(int i=0;i<size;i++){
		printf("%d",arr[i]);
	}
	
}
