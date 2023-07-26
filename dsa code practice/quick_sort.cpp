#include<stdio.h>
#include<conio.h>

int swap(int a, int b){
	int c= b;
	b=a;
	a=c;
	
	return 0;
}
int partition(int a[],int lb,int ub){
	int pivot=a[lb];
	int start=lb;
	int end=ub;
	while(start<end){
		while(a[start]<=pivot){
			start++;
		}
		while(a[end]>pivot){
			end--;
		}
		if(start<end){
			swap(a[start],a[end]);
		}
	}
	swap(a[lb],a[end]);
	return end;
	
	
	
}

int quicksort(int a[],int lb,int ub){
	if(lb<ub){
		int loc=partition(a,lb,ub);
		quicksort(a,lb,loc-1);
		quicksort(a,loc+1,ub);
	}
}

int main(){
	int arr[]={10,90,40,70,20,50,100,80};
	int end=(sizeof(arr)/4)-1;
	quicksort(arr,0,end);
	
	for(int i=0;i<=end;i++){
		printf("%d",arr[i]);
	}
	
}
