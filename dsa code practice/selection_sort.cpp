#include<stdio.h>
#include<conio.h>

int main(){
	int arr[]={10,30,20,50,100,90,70,80,40,60};
	int right=(sizeof(arr)/4)-1;
	printf("%d",right);
	for(int i=0;i<=right;i++){
		int min=i;
		for(int j=i+i;j<=right;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		  printf("%d\n",arr[min]);
			if(min!=i){
				int temp=arr[i];
				arr[i]=arr[min];
				arr[min]=temp;
			}
		
	}
//	for(int a=0;a<=right;a++){
//		printf("%d \n",arr[a]);
//	}
}
