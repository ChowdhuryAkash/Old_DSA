#include<stdio.h>

merge(int arr[],int l,int m,int r){
	int i,j,k;
	int n1=m-l+1;
	int n2=r-m;
	
	int L[n1],R[n2];
	
	for(i=0;i<n1;i++){
		L[i]=arr[l+i];
	
	}
	for(i=0;i<n2;i++){
		R[i]=arr[m+1+i];
	}
	i=0,j=0,k=l;
	while(i<n1 && j<n2){
		if(L[i] <= R[j]){
			arr[k]=L[i];
			i++;
		}
		else{
			arr[k]=R[j];
			j++;
		}
		k++;
	}
	while(i<n1){
			arr[k]=L[i];
			i++;
			k++;
		
	}
	while(j<n2){
			arr[k]=R[j];
			j++;
			k++;
		
	}
	
}
mergesort(int arr[],int l,int r){
	if(l<r){
		int m=(l+r)/2;
		mergesort(arr,l,m);
		mergesort(arr,m+1,r);
		merge(arr,l,m,r);
	}
}
int main(){
	int arr[]={10,20,90,70,50,40};
	int size=sizeof(arr)/4;
	mergesort(arr,0,size-1);
	
	for(int a=0;a<size;a++){
		printf("%d \t",arr[a]);
	}
	
}
