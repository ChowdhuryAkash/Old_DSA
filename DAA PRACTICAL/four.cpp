#include<stdio.h>
#include<conio.h>




int main(){
	int arr[]={4,10,3,12,20,7};
	int size=sizeof(arr)/4;
	int count=0;
	int m[5][5];
	int multiplication=0;

	
	for(int l=2;l<=size;l++){
		for(int i=0;i<size-l+1;i++){
			
			for(int j=i;j<i+l;j++){
			
				if(j==i+l-1){
					multiplication=arr[i]*arr[j];
					printf("%d ",multiplication);
					count+=multiplication;
				}
			}
			printf("\t");
			
			
		}
			printf("\n");
	}
	printf("number :%d",count);
}
