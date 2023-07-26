#include<stdio.h>
#include<conio.h>

int merge(int arr[],int l,int m,int r){
	int i,j,k;
	int n1=m-l+1;
	int n2=r-m;
	
	int L[n1];
	int R[n2];
	for(i=0;i<=n1;i++){
		L[i]=arr[l+i];
	}
	for(j=0;i<=n2;j++){
		R[j]=arr[m+1+j];
	}
	
	
	i=0;
	j=0;
	k = l;
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	
	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}
	
	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
	
	
	
	
	
	
}


void mergesort(int arr[],int l,int r){
	if(l<r){
		int m=l+(r-l)/2;
		mergesort(arr,l,m);
		mergesort(arr,m+1,r);
		
		merge(arr,l,m,r);
	}
	
}
int main(){
	int size;
	printf("Enter the number of how many elements you want to insert :");
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++){
		printf("Enter the %d th element :",i+1);
		scanf("%d",&arr[i]);
		
	}
	int left=0,right=size-1;
	mergesort(arr,left,right);
	for(int i=0;i<size;i++){
		printf("%d \n",arr[i]);
		
		
	}
	
}
