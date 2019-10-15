#include<stdio.h>
int main(){
	int n,s;
	s=0;
	printf("nhap n nguyen duong :\n",n);
	scanf("%d",&n);
	for(int i=1;i<n;i++){	
		if(n%i==0){
			s=s+i;
		
}
}
if(s==n){
		printf("day la so hoan hao \n");
		}else{
		printf("day khong phai so hoan hao \n");
		}
	return 0;
	
}
