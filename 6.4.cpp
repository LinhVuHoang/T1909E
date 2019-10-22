#include<stdio.h>
int main(){
	int a[10];
for(int i=0;i<10;i++){
	printf("so thu %d la :",i+1);
	scanf("%d",&a[i]);
}
	for(int i=0;i<10;i++){
		//tim so nghich dao cua so thu i
		int t=0,tmp=a[i];
		while(tmp!=0){
			t=t*10+tmp%10;
			tmp/=10;
		}
		printf("%d  ",t);
}
	return 0;
}
