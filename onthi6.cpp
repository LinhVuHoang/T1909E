#include<iostream>
#include<iomanip>
using namespace std;
struct tiendien{
	string ten;
	float tiendien[100];
};
int main(){
	struct tiendien ds[100];
	int n,m;
	cout<<"nhap n: ";cin>>n;
	cout<<"nhap m: ";cin>>m;
	for(int i=0;i<n;i++){
		cout<<"nhap ten : ";
		cin>>ds[i].ten;
	for(int j=0;j<m;j++){
		cout<<"nhap tien dien thang "<<j+1<<": ";
		cin>>ds[i].tiendien[j];
	}
	}
	cout<<"ho va ten "<<setw(20);
	for(int i=0;i<m;i++){
		cout<<"thang "<<i+1<<setw(10);
	}
	cout<<"\n";
	for(int i=0;i<n;i++){
		cout<<ds[i].ten<<setw(20);
		for(int j=0;j<m;j++){
			cout<<ds[i].tiendien[j]<<setw(10);
		}cout<<endl;
	}
	return 0;
}
