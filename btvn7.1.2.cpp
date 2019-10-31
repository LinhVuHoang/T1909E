#include<stdio.h>
int main(){
	int n;
	printf("nhap n =\n");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("nhap so thu %d : ",i+1);
		scanf("%d",&a[i]);
	}
	int x=0;
	int y=0;
	for(int i=0;i<n;i++){
		if(a[i]%2!=0){
			x=a[i];
			y=i;
		}
	}
	if(x!=0){
		printf("so le cuoi cung %d o vi tri %d \n",x,y+1);
	}
	return 0;
}
