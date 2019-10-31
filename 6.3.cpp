#include<stdio.h>
int main(){
	int a[10];
	for(int i=0;i<10;i++){
	do{
		printf("nhap vao 1 so le :\n");
		scanf("%d",&a[i]);
	}while(a[i]%2==0);
		}
		printf("mang vua nhap:\n");
		for(int i=0;i<10;i++){
			printf("a[%d]=%d\n",i,a[i]);
		}
	return 0;
	
}
