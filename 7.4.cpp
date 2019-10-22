#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("nhap so thu %d: ",i+1);
		scanf("%d",&a[i]);
		int x; bool check=true;
		do{
			printf("nhap lai so thu %d: ",i+1);
			scanf("%d",&x);
			bool flag=true;
			for(int j=0;j<=i;j++){
				if(a[i]==x){
					flag= false; break;
				}
			
			}
			if(flag){
				a[i]=x;
				check = false;
			}
		}while(check);
	}
	return 0;
	
}
