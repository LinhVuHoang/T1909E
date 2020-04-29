#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	float k;
	cout<<"nhap n: ";
	cin>>n;
	k=sqrt(n);
	bool t=true;
	for(int i=2;i<=k;i++){
	t = t && n%i != 0;
		}
		if(t==true){
			cout<<"day la so nguyen to";
		}else{
			cout<<"day khong phai la so nguyen to";
		}
	return 0;
}
