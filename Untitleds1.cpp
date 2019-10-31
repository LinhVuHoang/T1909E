#include<stdio.h>
int main(){
	int x1,x2,x3,n;
	printf("nhap n:\n");
	scanf("%d",&n);
	x1=1;
	x2=1;
	x3=2;
	for(int i=4;i++;i<=n){
		if(x2+x3<=n){
		x1=x2;
		x2=x3;
		x3=x1+x2;
		}else{
			printf("%d  ",x3);
		break;
		
		}
	}
	return 0;
}
