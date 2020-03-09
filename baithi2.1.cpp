#include<stdio.h>
int main(){
	float v,l,vs;
	int n;
	printf("nhap von: \n");
	scanf("%f",&v);
	printf("nhap lai: \n");
	scanf("%f",&l);
	printf("nhap nam: \n");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		l=v*vs/100;
		v+=vs;
		printf("von:%f \tlai:%f \tnam:%d \n",v,l,i+1);
	}
	return 0;
}
