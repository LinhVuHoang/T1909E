#include<stdio.h>
int main(){
	int ary[10];
	ary[0]=20;
	ary[5]=7;
	ary[9]=11;
	for(int i=0;i<10;i++){
		printf("nhap phan tu thu %d\n",i);
		scanf("%d",&ary[i]);
	}
	for(int i=0;i<10;i++)
	{
		printf("%d  ",ary[i]);
		
	}
	return 0;
}
