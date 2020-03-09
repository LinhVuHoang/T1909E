#include<iostream>
#include<iomanip>
using namespace std;
struct sinhvien{
	string ten;
	int mssv;
	float lop;
	float dtb;
};
int main(){
	struct sinhvien ds[100];
	int n;
	cout<<"nhap n: ";cin>>n;
	for(int i=0;i<n;i++){
		cout<<"nhap ten: ";
		cin>>ds[i].ten;cout<<endl;
		cout<<"nhap mssv: ";
		cin>>ds[i].mssv;cout<<endl;
		cout<<"nhap lop: ";
		cin>>ds[i].lop;cout<<endl;
		cout<<"nhap dtb: ";
		cin>>ds[i].dtb;	
}
cout<<"ten"<<setw(20)<<"mssv"<<setw(10)<<"lop"<<setw(10)<<"dtb"<<setw(10)<<"hoc bong ";
cout<<"\n";
for(int i=0;i<n;i++){
	if(ds[i].dtb<=7){
		cout<<ds[i].ten<<setw(20);
		cout<<ds[i].mssv<<setw(10);
		cout<<ds[i].lop<<setw(10);
		cout<<ds[i].dtb<<setw(10);
		cout<<"khong co hoc bong";
		cout<<endl;
	}else if(ds[i].dtb>7 && ds[i].dtb<=8.5){
		cout<<ds[i].ten<<setw(20);
		cout<<ds[i].mssv<<setw(10);
		cout<<ds[i].lop<<setw(10);
		cout<<ds[i].dtb<<setw(10);
		cout<<"co hoc bong 150000 dong";
		cout<<endl;
	}else if(ds[i].dtb>8.5){
		cout<<ds[i].ten<<setw(20);
		cout<<ds[i].mssv<<setw(10);
		cout<<ds[i].lop<<setw(10);
		cout<<ds[i].dtb<<setw(10);
		cout<<"co hoc bong 250000 dong";
		cout<<endl;
	}
}
return 0;
}
