#include<stdio.h>
int main(){
	int x1,x2,x3;
	x1=0;
	x2=1;
	x3=1;
	int i;
	for(i=3;i<12;i++){
		x1=x2;
		x2=x3;
		x3=x1+x2;
		if(x3<100){
		printf(" %d  ",x3);
	}
	}
printf("\n la cac so fibo nam giua 1 va 100");
	return 0;
}
