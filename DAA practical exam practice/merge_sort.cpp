#include<stdio.h>


int merge(int arr[],int lb,int m,int ub){
	
	int leftArraySize=m-lb+1;
	int rightArraySize=ub-m;
	int arr1[leftArraySize],arr2[rightArraySize];
	int i=0;int j=0;int k=lb;
	
	for(i=0;i<leftArraySize;i++){
		arr1[i]=arr[lb+i];
	}
	for(i=0;i<rightArraySize;i++){
		arr2[i]=arr[m+1+i];
	}
	
	i=0;
	
	while(i<leftArraySize && j<rightArraySize){
		if(arr1[i]<=arr2[j]){
			arr[k]=arr1[i];
			i++;
		}
		else{
			arr[k]=arr2[j];
			j++;
		}
		k++;
	}
	while(i<leftArraySize){
		arr[k]=arr1[i];
			i++;
			k++;
	}
	while(j<=rightArraySize){
		arr[k]=arr2[j];
			j++;
			k++;
	}
}
int mergeSort(int arr[],int lb,int ub){
	if(lb<ub){
		int m=(lb+ub)/2;
		mergeSort(arr,lb,m);
		mergeSort(arr,m+1,ub);
		merge(arr,lb,m,ub);
	}
	
}
int main(){
	int arr[]={10,90,40,80,20,70};
	int size=sizeof(arr)/4;
	mergeSort(arr,0,size-1);
	for(int i=0;i<size;i++){
		printf("%d \t",arr[i]);
	}
}
