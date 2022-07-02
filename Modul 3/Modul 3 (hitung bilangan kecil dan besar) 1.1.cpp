#include<iostream>
using namespace std;

int main()
{
	int a,b,c,terkecil,terbesar;
	cout<<"masukan bilangan pertama:"; cin>>a;
	cout<<"masukan bilangan kedua  :"; cin>>b;
	cout<<"masukan bilangan ketiga :"; cin>>c;
	terkecil=a;
	if (b<=terkecil){terkecil=b;
	}
	if (c<=terkecil){terkecil=c;
	}
	terbesar=a;
	if(b>=terbesar) {terbesar=b;
	}
	if(c>=terbesar) {terbesar=c;
	}
	cout<<"nilai terkecil "<<terkecil<<endl;
	cout<<"nilai terbesar "<<terbesar<<endl;
	return 0;
}
