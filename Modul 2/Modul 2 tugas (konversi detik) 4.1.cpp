#include<iostream>
using namespace std;

int main()
{
	int dtk,konvjam,konvmnt,konvdtk,sisa;
	cout<<"masukan detik:"; cin>>dtk;
	konvjam=dtk / 3600;
	konvmnt=dtk / 60;
	konvdtk=dtk;
	sisa=dtk % 3600;
	cout<<"hasil konversi "<<konvjam<<endl;
	cout<<"hasil konversi "<<konvmnt<<endl;
	cout<<"hasil konversi "<<konvdtk<<endl;
	return 0;
}
