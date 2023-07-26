#include<stdio.h>
#include<conio.h>

int main(){
	int arr[]={10,20,30,40,50,60,70,80,90,100};
	int search;
	printf("Enter the value you want to search :");
	scanf("%d",&search);
	int left=0,right=(sizeof(arr)/4)-1,mid;
	while(left<=right){
		mid=(left+right)/2;
		if(search==arr[mid]){
			printf("Searched element is situated on %d th index.",mid);
			break;
		}
		else if(search<arr[mid]){
			right=mid-1;
		}
		else if(search>arr[mid]){
			left=mid+1;
		}
	}
	
	if(left>right){
		printf("Searched element not found...!");
	}
	
}
