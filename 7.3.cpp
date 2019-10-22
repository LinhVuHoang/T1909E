#include<stdio.h>
int main(){
	int a[10];
	for(int i=0;i<10;i++){
		printf("nhap so thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	for(int i=0;i<10;i++){
		if(a[i]<=0){
			a[i]=0;
		}
	}
	printf("mang vua nhap :\n");
	for(int i=0;i<10;i++){
		printf("a[%d]=%d\n",i+1,a[i]);
	}
	return 0;
}
