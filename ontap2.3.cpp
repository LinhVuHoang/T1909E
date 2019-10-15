#include<stdio.h>
int main(){
	int s,x;
	s=0;
	x=1;
	for(int i=1;i<=100;i++){
		s=s+x;
		x=x+2;
	}printf("%d\n",s);
	return 0;
	
}
