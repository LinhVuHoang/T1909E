#include <stdio.h>
int main(){
	float sum, rate ,interest;
	int time;
	printf("nhap von\n");
	scanf("%f",&sum);
	printf("nhap lai suat \n");
	scanf("%f",&rate);
	printf("nhap nam\n");
	scanf("%d",&time);
	for(int i = 0 ; i < time ; i ++){
		printf("Year\tInterest\tSum\n");
		interest = sum*rate/100;
		sum += interest;
		printf("%d\t%f\t%f\n",i+1,interest,sum);
	}
	return 0;
}
