#include<iostream>
using namespace std;
int main(){
	int a[100];
	int n;
	cout<<"nhap n: ";cin>>n;
	for(int i=1;i<=n;i++){
		cout<<"nhap a["<<i<<"]: ";
		cin>>a[i];
	}
	int max=a[2],min=a[1];
	for(int i=1;i<=n;i++){
		if(i%2==0 && a[i]>max){
			max=a[i];
		}else if(i%2!=0 && a[i]<min){
			min=a[i];
		}
	}
	cout<<"max ="<<max<<endl;
	cout<<"min ="<<min;
	return 0;
}
