#include <iostream>
#include <conio.h>
using namespace std;

int main(){
int pil, hasil, a,b;
char ulang;
do{
system("cls");
cout <<"================================"<<endl;
cout <<"| program kalkulator sederhana |"<<endl;
cout <<"================================"<<endl;
cout <<"| 1. Tambah                    |"<<endl;
cout <<"| 2. Kurang                    |"<<endl;
cout <<"| 3. Kali                      |"<<endl;
cout <<"| 4. Bagi                      |"<<endl;
cout <<"| 5. Keluar                    |"<<endl;
cout <<"================================"<<endl;
cout <<"masukan pilihan menu :"; cin>> pil;
cout <<endl;
switch(pil){
    case 1:
        cout <<"================================"<<endl;
        cout <<"| program kalkulator sederhana |"<<endl;
        cout <<"================================"<<endl;
        cout <<"masukan pertama :"; cin>> a;
        cout <<"masukan kedua   :"; cin>> b;
        hasil = a + b ;
        cout<<hasil<<endl;
        getch();
        break;
    case 2:
        cout <<"================================"<<endl;
        cout <<"| program kalkulator sederhana |"<<endl;
        cout <<"================================"<<endl;
        cout<<"masukan pertama :"; cin>> a;
        cout<<"masukan kedua   :"; cin>> b;
        hasil = a - b ;
        cout<<hasil<<endl;
        getch();
        break;
    case 3:
        cout <<"================================"<<endl;
        cout <<"| program kalkulator sederhana |"<<endl;
        cout <<"================================"<<endl;
        cout<<"masukan pertama :"; cin>> a;
        cout<<"masukan kedua   :"; cin>> b;
        hasil = a * b ;
        cout<<hasil<<endl;
        getch();
        break;
    case 4:
        cout <<"================================"<<endl;
        cout <<"| program kalkulator sederhana |"<<endl;
        cout <<"================================"<<endl;
        cout<<"masukan pertama :"; cin>> a;
        cout<<"masukan kedua   :"; cin>> b;
        hasil = a / b ;
        cout<<hasil<<endl;
        getch();
        break;
    case 5:
        cout<<" Terima kasih "<<endl;
        getch();
        break;
    default:
        cout<<" pilihan menu anda, tidak ditemukan "<<endl;
        getch();
    }
}
 while (pil!=5);
 getch();
}
/*
 cout << endl;

    cout << "Ingin memilih menu lain (y/t)? ";
    cin >> ulang;
    cout << endl;
  }
  while (ulang!= 't');
  cout << "Terimakasih...";
}
*/
