#include<stdio.h>
int main(){
   int n,x;
   float s;
    s=0;x=0;
   printf("nhap n:\n");
   scanf("%d",&n);
   for(int i=1;i++;i<=n){
   	if(x<n){
   		x=x+1;
   		s=s+(float)1/(x);
	   }else{
	   	printf("%f",s);break;
	   }
   }
   return 0;
}
