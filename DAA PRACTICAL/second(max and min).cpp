#include<stdio.h>
#include<conio.h>


int main(){
	printf("Enter the number of elements. :");
	int size;
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	
	int min;
	
	min=arr[0];
	int max=arr[0];
	for(int i=0;i<size;i++){
		if(arr[i]<min){
			min=arr[i];
		}
		if(arr[i]>max){
			max=arr[i];
		}
		
	}
	printf("%d is the minimum value & %d is the maximum value.",min,max);
}
