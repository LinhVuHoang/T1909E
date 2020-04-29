#include<iostream>
using namespace std;
int main(){
	int a[10],x,n,k;
	cout<<"nhap n: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"nhap a["<<i<<"]: ";
		cin>>a[i];
	}
	cout<<"nhap so x can xoa: ";
	cin>>x;
	for(int i=0;i<n;i++){
		if(a[i]==x){
			k++;
			for(int j=i;j<n;j++){
				a[j]==a[j+1];
		}
	}}
	for(int i=0;i<n-k;i++){
		cout<<"a["<<i<<"]:"<<a[i];
		cout<<endl;
	}
	return 0;
}
		
