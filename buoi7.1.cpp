#include<stdio.h>
int main(){
	int ary[10];
	ary[0]=20;
	ary[5]=7;
	ary[9]=11;
	for(int i=0;i<10;i++){
		ary[i]=i*3;
	}
	for(int i=0;i<10;i++)
	{
		printf("%d\n",ary[i]);
		
	}
	return 0;
}
