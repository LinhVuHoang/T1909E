#include<iostream>
using namespace std;
int main(){
	int a[100];
	int n;
	cout<<"nhap n: ";cin>>n;
	for(int i=0;i<n;i++){
		cout<<"nhap a["<<i<<"]: ";
		cin>>a[i];
	}
	int max=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	for(int i=0;i<n;i++){
		if(a[i]==max){
			cout<<i;
		cout<<"\t";
		}
	}
	return 0;
		
}
