#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int n,m,i,k,j,l,C;
	cout<<"nhap m";cin>>m;
	cout<<"nhap n";cin>>n;
	l=m-n;
	for(i=n-1;i>0;i--){
		n=n*i;
	}
	for(k=m-1;k>0;k--){
		m=m*k;
	}
	for(j=l-1;j>0;j--){
		l=l*j;
	}
	C=m/(n*l);
	cout<<m<<endl;
	cout<<n<<endl;
	cout<<l<<endl;
	cout<<C;
	
		
	return 0;
}
