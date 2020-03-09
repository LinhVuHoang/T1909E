#include<iostream>
using namespace std;
int main(){
	int k;
	float c,v,x;
	cout<<"nhap c: ";cin>>c;
	for(k=1;k<=100;k++){
		v=(float)1/(k+c);
		x=(float)x+v;
	}
	cout<<x;
	return 0;
}
