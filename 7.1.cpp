#include<stdio.h>
int main(){
	int a[10];
	int s=0;
	float v;
	for(int i=0;i<10;i++){
		do{
		printf("nhap so thu %d:  ",i+1);
		scanf("%d",&a[i]);
	}while(a[i]%2==0);
	}
	for(int i=0;i<10;i++){
			s=s+a[i];
		}
	v=(float)s/10;
	printf("so tb : %f",v);
	return 0;
}
