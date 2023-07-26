#include<stdio.h>

int main(){
	int arr[]={10,20,80,30,70,40,50,100,90,60};
	int n=sizeof(arr)/4;
	
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
			
		}
		if(min!=i){
			int temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
		}
	}
	
	for(int i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
}
