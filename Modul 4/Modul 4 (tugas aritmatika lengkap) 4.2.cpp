#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main(){
int a, b, hasil, pilihan;
mulai:
char ulang;
system("cls");
cout<<"==================================="<<endl;
cout<<"|        ARITMATIKA LENGKAP       |"<<endl;
cout<<"==================================="<<endl;
cout<<"[1].penambahan                     "<<endl;
cout<<"[2].pengurangan                    "<<endl;
cout<<"[3].perkalian                      "<<endl;
cout<<"[4].pembagian                      "<<endl;
cout<<"[5].perpangkatan                   "<<endl;
cout<<"[6].keluar                         "<<endl;
cout<<"==================================="<<endl;
cout<<"Masukan pilihan menu anda :"; cin>>pilihan;
kembali:
switch(pilihan){
case 1 :
    cout<<"==================================="<<endl;
    cout<<"|            PENAMBAHAN           |"<<endl;
    cout<<"==================================="<<endl;
    cout<<" masukan nilai pertama :"; cin>>a;
    cout<<" masukan nilai kedua   :"; cin>>b;
    hasil = a + b;
    cout<<" hasil penamabahannya  :"<< hasil<<endl;
    getch();
    break;

case 2 :
    cout<<"==================================="<<endl;
    cout<<"|            PENGURANGAN          |"<<endl;
    cout<<"==================================="<<endl;
    cout<<" masukan nilai pertama :"; cin>>a;
    cout<<" masukan nilai kedua   :"; cin>>b;
    hasil = a - b;
    cout<<" hasil pengurangannya  :"<< hasil<<endl;
     getch();
    break;

case 3 :
    cout<<"==================================="<<endl;
    cout<<"|             PERKALIAN           |"<<endl;
    cout<<"==================================="<<endl;
    cout<<" masukan nilai pertama :"; cin>>a;
    cout<<" masukan nilai kedua   :"; cin>>b;
    hasil = a * b;
    cout<<" hasil perkaliannya    :"<< hasil<<endl;
    getch();
    break;

case 4 :
    cout<<"==================================="<<endl;
    cout<<"|             PEMBAGIAN           |"<<endl;
    cout<<"==================================="<<endl;
    cout<<" masukan nilai pertama :"; cin>>a;
    cout<<" masukan nilai kedua   :"; cin>>b;
    hasil = a / b;
    cout<<" hasil pembagiannya    :"<< hasil<<endl;
    getch();
    break;

case 5 :
    cout<<"==================================="<<endl;
    cout<<"|           PEMANGAKATAN          |"<<endl;
    cout<<"==================================="<<endl;
    cout<<" masukan nilai        :"; cin>>a;
    cout<<" masukan pangkat      :"; cin>>b;
    hasil = pow(a,b);
    cout<<" hasil pemangkatannya :"<< hasil<<endl;
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
    goto kembali;
    }
    cout<<"\nApakah Anda ingin mengulang?Tekan[y/t] : ";
    cin>>ulang;
    cout<<"\n\n";
        if (ulang=='y'||ulang=='Y'){
            goto kembali;
        }else{
        goto mulai;
        }
    getch ();
 return 0;
}
