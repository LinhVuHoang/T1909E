#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("nhap so thu %d : ",i+1);
		scanf("%d",&a[i]);
	}
	int x=0;
	for(int i=0;i<n;i++){
		if(a[i]>0){
			x=a[i];
			break;
		}
}
for(int i=0;i<n;i++){
	if(a[i]>0&&a[i]<x){
		x=a[i];
	}
}
if(x!=0){
	printf("so duong nho nhat la %d",x);
}
	
	return 0;
}
