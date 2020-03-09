#include<iostream>
using namespace std;
int main(){
	int n,j,k;
	cout<<"nhap n: ";
	cin>>n;
	while(n<0 || n>25){
	cout<<"nhap n: ";
	cin>>n;}
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<" ";
		}
        cout<<"* ";
		cout<<"\n";
	}
	return 0;
}
