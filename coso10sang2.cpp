#include<iostream>
using namespace std;
int main(){
 int n,v,i=1,s=0;
	cout<<"nhap n: ";
	cin>>n;
	do{
		v=n%2;
		s=s+(i*v);
		n=n/2;
		i=i*10;
	}while(n>0);
	cout<<s;
	return 0;
}
