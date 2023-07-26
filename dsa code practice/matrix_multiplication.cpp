#include<stdio.h>
#include<conio.h>
#include<math.h>


int main(){
	
	int A[3][3]={
		{3,2,1},
		{4,3,7},
		{2,3,5}
	};
	
	int B[3][3]={
		{3,2,1},
		{4,3,7},
		{2,3,5}
	};
	int i;int j;int a;int b;
	int res=0;int prod=1;
	for(int a=0;a<3;a++){
		i=b;
		
		for(int t=0;t<3;t++){
			for(int b=0;b<3;b++){
			prod=A[a][b]*B[b][t];
			res=res+prod;
		    }
			printf("%d\n",res);
			res=0;
		}
		
		printf("\n\n\n");
		
		
	}
}
