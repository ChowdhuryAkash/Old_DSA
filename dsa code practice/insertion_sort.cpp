#include<stdio.h>

int main(){
	int arr[]={10,30,20,50,40,60,80,90,70,100};
	int size=sizeof(arr)/4;
	for(int i=1;i<size;i++){
		int j=i-1;
		int temp=arr[i];
		while(j>=0 && arr[j]>temp){
			arr[j+1]=arr[j];
			j--;

		}
		arr[j+1]=temp;
	}
	
	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
}
