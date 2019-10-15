#include<stdio.h>
int main(){
	int n,s,x;
	s=1;
	printf("nhap n :\n");
	scanf("%d",&n);
	x=n;
	for(int i=1;i++;i<=n){
		if(x>0){
			s=s*x;
			x=x-1;
		}else{
			printf("giai thua: %d\n",s);break;
		}
	}
	return 0;
}
