#include<stdio.h>
int main(){
	int x1,x2,x3,n;
	printf("nhap n:\n");
	scanf("%d",&n);
	x1=1;
	x2=1;
	x3=2;
	for(int i=4;i<=n;i++){
	x1=x2;
	x2=x3;
	x3=x1+x2;
	if(i==n){
	printf("so fibo %d\n",x3);
}
}
	return 0;
	
}
