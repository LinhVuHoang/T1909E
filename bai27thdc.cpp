#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int a[100][100];
	int n,m;
	cout<<"nhap n: ";cin>>n;
	cout<<"nhap m: ";cin>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<"nhap ("<<i+1<<","<<j+1<<"): ";
			cin>>a[i][j];
	}}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<setw(3)<<a[i][j];
	} cout<<"\n";
	}
	int l;
	while(l<1 || l>n){
		cout<<"nhap l: ";cin>>l;
	}
	l--;
	for(int i=n	;i>l-1;i--){
		for(int j=0;j<m;j++){
			a[i+1][j]=a[i][j];}}
	for(int i=l;i<l+1;i++){
		for(int j=0;j<m;j++){
			cout<<"nhap ("<<i+1<<","<<j+1<<"): ";
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<setw(3)<<a[i][j];
	} cout<<"\n";
	}
	return 0;
}
