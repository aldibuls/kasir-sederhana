#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int pesanan,menu;
	float hasil;

	cout<<"================RESTORAN ALDI================"<<endl;
	cout<<"============================================="<<endl;
	cout<<"++++++++++++++++++++MENU+++++++++++++++++++++"<<endl;
	cout<<"1 .Ayam Goreng Rp.10.000"<<endl;
	cout<<"2 .Nasi Goreng Rp.15.000"<<endl;
	cout<<"3 .Bakso Rp.20.000"<<endl;
	cout<<"4 .Pecel lele RP.10.000"<<endl;
	cout<<"======================="<<endl;
	cout<<"Anda Memlih Menu Nomor Berapa =";
	cin>>menu;

	switch(menu)
	{
		case 1:
		cout<<"anda memesan berapa porsi=";cin>>pesanan;
		hasil=10000*pesanan;
		cout<<"anda harus membayar=Rp."<<hasil<<endl;
		break;

		case 2:
		cout<<"anda memesan berapa porsi=";cin>>pesanan;
		hasil=15000*pesanan;
		cout<<"anda harus memebayar=Rp."<<hasil<<endl;
		break;

		case 3:
		cout<<"anda memesan berapa porsi=";cin>>pesanan;
		hasil=20000*pesanan;
		cout<<"anda harus membayar=Rp."<<hasil<<endl;
		break;

		case 4:
		cout<<"anda memesan berapa porsi=";cin>>pesanan;
		hasil=10000*pesanan;
		cout<<"anda harus membayar=Rp."<<hasil<<endl;
		break;

	}
}