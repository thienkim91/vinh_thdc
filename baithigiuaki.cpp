#include <iostream>

using namespace std;

int main()
{
	double n; //so tien gui ban dau
	double m; //lai suat ngan hang
	double k; //so tien ky vong
	
	cout<<"Nhap vao so tien gui: ";
	cin>>n;
	cout<<"Nhap vao lai suat (%): ";
	cin>>m;
	cout<<"Nhap vao so tien ky vong: ";
	cin>>k;
	
	double dem=0;
	while(n<k)
	{
		n=n+(n*m*0.01);
		dem=dem+1;
			
	}
	cout<<"So nam gui tiet kiem de dat duoc so tien ky vong la: "<<dem;
	
	return 0;
}
