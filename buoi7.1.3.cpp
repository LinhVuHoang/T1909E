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
	int max=ary[0];
	int min=ary[0];
	for(int i=0;i<10;i++)
	{
		if(max<ary[i]){
			max=ary[i];
		}
		if(min>ary[i]){
			min =ary[i];
		}
		
	}
	printf("max=%d\n",max);
	printf("min=%d\n",min);
	return 0;
}
