#include<stdio.h>
int main(){
	int a[10];
	int s=0;
	float v=0;
	for(int i=0;i<10;i++){
		printf("nhap phan tu thu %d : \n",i+1);
		scanf("%d",&a[i]);
		s=s+a[i];
		
	}
	v=(float)s/10;
	printf("so tb la %f",v);
	return 0;
}
