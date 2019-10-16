#include<stdio.h>
int main(){
	int a[10];
	for(int i=0;i<10;i++){
		printf("so thu %d:",i+1);
		scanf("%d",&a[i]);
	}
	for(int i=0;i<10;i++){
		if(a[i]%2==0){
			printf("xin moi nhap lai so %d :",i+1);
			scanf("%d",&a[i]);
		}
	}
	return 0;
	
}
