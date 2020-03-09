#include<iostream>
#include<iomanip>
using namespace std;
struct hanghoa{
	string ten;
	float dg;
	int sl;
	float tt;
};
int main(){
	struct hanghoa ds[100];
	int n,i,j;
	cout<<"nhap n: ";cin>>n;
	for(int i=0;i<n;i++){
		cout<<"nhap ten san pham thu "<<i+1<<": ";
		cin>>ds[i].ten;
		cout<<"nhap don gia san phan thu "<<i+1<<": ";
		cin>>ds[i].dg;
		cout<<"nhap so luong san pham thu "<<i+1<<": ";
		cin>>ds[i].sl;
	}
	cout<<"ten\tdon gia\tso luong\n";
	for(int i=0;i<n;i++){
		cout<<ds[i].ten<<"\t"<<ds[i].dg<<"\t"<<ds[i].sl<<"\n";
	}
	for(int i=0;i<n;i++){
		ds[i].tt=ds[i].dg*ds[i].sl;
	}
	int max=ds[0].tt;
	for(int i=0;i<n;i++){
		if(ds[i].tt>max){
			max=ds[i].tt;
		}
	}
	cout<<"\n";
	for(int i=0;i<n;i++){
		if(max==ds[i].tt){
			cout<<ds[i].ten<<endl;
		}
	}
		struct hanghoa tg;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(ds[i].tt<ds[j].tt){
				tg=ds[i];
				ds[i]=ds[j];
				ds[j]=tg;
			}
		}
	}
		cout<<"ten\tdon gia\tso luong\n";
	for(int i=0;i<n;i++){
		cout<<ds[i].ten<<"\t"<<ds[i].dg<<"\t"<<ds[i].sl<<"\n";
	}
	return 0;
}
