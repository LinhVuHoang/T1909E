#include<stdio.h>
#include<math.h>
float abs_gttt(float a){
	if(a>=0) return a;
	else return a*(-1);
}
int main(){
	float a=-5;
	printf("gia tri tuyet doi cua a la :%f",abs_gttt(a));
	return 0;
}

