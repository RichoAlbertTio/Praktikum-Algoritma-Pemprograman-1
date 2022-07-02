#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main(){
int a, b, hasil, pilihan;
do{
system("cls");
cout<<"====================="<<endl;
cout<<"| ARITMATIKA LENGKAP|"<<endl;
cout<<"====================="<<endl;
cout<<"[1].penambahan       "<<endl;
cout<<"[2].pengurangan      "<<endl;
cout<<"[3].perkalian        "<<endl;
cout<<"[4].pembagian        "<<endl;
cout<<"[5].perpangkatan     "<<endl;
cout<<"[6].keluar           "<<endl;
cout<<"====================="<<endl;
cout<<"Masukan pilihan menu anda :"; cin>>pilihan;
switch(pilihan){
case 1 :
    cout<<" masukan nilai pertama :"; cin>>a;
    cout<<" masukan nilai kedua   :"; cin>>b;
    hasil = a + b;
    cout<<" hasil penamabahannya  :"<< hasil<<endl;
    getch();
    break;
case 2 :
    cout<<" masukan nilai pertama :"; cin>>a;
    cout<<" masukan nilai kedua   :"; cin>>b;
    hasil = a - b;
    cout<<" hasil pengurangannya  :"<< hasil<<endl;
     getch();
    break;

case 3 :
    cout<<" masukan nilai pertama :"; cin>>a;
    cout<<" masukan nilai kedua   :"; cin>>b;
    hasil = a * b;
    cout<<" hasil perkaliannya    :"<< hasil<<endl;
     getch();
    break;

case 4 :
    cout<<" masukan nilai pertama :"; cin>>a;
    cout<<" masukan nilai kedua   :"; cin>>b;
    hasil = a / b;
    cout<<" hasil pembagiannya    :"<< hasil<<endl;
    getch();
    break;

case 5 :
    cout<<" masukan nilai   :"; cin>>a;
    cout<<" masukan pangkat :"; cin>>b;
    hasil = pow(a,b);
    cout<<" hasil pembagiannya    :"<< hasil<<endl;
    getch();
    break;

case 6 :
    cout<<" Terima kasih "<<endl;
    getch();
    exit(0);
    break;

default:
    cout<<" Maaf, masukan pilihan menu anda salah !"<<endl;
    getch();
    break;
    }
}while (pilihan = 6);
}
