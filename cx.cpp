#include<iostream>
using namespace std;
int main(){
	int n,j,k;
	while(n<0 || n>25){
	cout<<"nhap n: ";
	cin>>n;
	}
	cout<<" ";
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			cout<<" ";
		}
		 for(k=0;k<=i;k++){
		cout<<"*";}
		cout<<"\n";
	}
	return 0;
}
