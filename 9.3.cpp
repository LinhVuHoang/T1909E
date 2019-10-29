#include<stdio.h>
int timsofibo(int n){
     int x1,x2,x3;
	x1=1;
	x2=1;
	x3=2;
	for(int i=4;i<=n;i++){
	x1=x2;
	x2=x3;
	x3=x1+x2;
	if(i==n){
	printf("so fibo %d\n",x3);
	return x3;
}
}
}
int main(){
	int n;
    printf("nhap n: ");
	scanf("%d",&n);
	timsofibo(n);
	return 0;
}
