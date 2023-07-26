#include<stdio.h>
#include<conio.h>

int main(){
	int arr[]={1,3,2,8,4,7,5,9,10,6};
	int right=sizeof(arr)/4-1;
	for(int i=0;i<right;i++){
		for(int j=0;j<right;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=0;i<=right;i++){
		printf("%d\t",arr[i]);
	}
}
