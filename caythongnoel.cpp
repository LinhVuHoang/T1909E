#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int n,j,k,m;
	cout<<"nhap n: ";
	cin>>n;
	cout<<"nhap m: ";
	cin>>m;
	for(int i=0;i<m;i++){
		for(int j=0;j<m-i;j++){
			cout<<" ";
		}
		 for(k=0;k<=i;k++){
		cout<<"* ";}
		cout<<"\n";
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-2;j++){
			cout<<" ";
		}
		 for(k=0;k<=i;k++){
		cout<<"* ";}
		cout<<"\n";}
	for(int i=0;i<n-3;i++){
		cout<<setw(n+1);
		cout<<"* * *";
		cout<<endl;
	}
	return 0;}
