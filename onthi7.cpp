#include <iostream>
#include <iomanip>
using namespace std;
struct tiendien{
	string hovaten;
	float tiendien;
};
int main(){
	int n,m,i,j;
	struct tiendien ds[100];
	cout<<"nhap so khach hang ";cin>>n;
	cout<<"nhap so thang ";cin>>m;
	for(i=0;i<n;i++){
		cout<<"nhap ho va ten khach hang "<<i+1<<" : ";
		cin>>ds[i].hovaten;
			for(j=0;j<n;j++){
			cout<<"nhap so tien thang "<<j+1<<" ";
			cin>>ds[i].tiendien;
	}
}
	
	
	
	return 0;
}
