#include<stdio.h>

int main(){
	int arr[]={2,3,8,5,7};
	int n=(sizeof(arr))/4;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(arr[j]>arr[j+1]){
				int temp;
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	for(int i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	
	
	
	
	
	
	
}
