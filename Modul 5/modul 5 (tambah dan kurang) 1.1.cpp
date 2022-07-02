#include <iostream>
#include <conio.h>

using namespace std;

void penambahan(){
 int nilai1, nilai2, tambah;
 cout<<"Masukan data pertama :"; cin>>nilai1;
 cout<<"Masukan data kedua   :"; cin>>nilai2;
 tambah = nilai1 + nilai2;
 cout<<"Hasil penambahan : "<<tambah<<endl;
}

void pengurangan(){
 int nilai1, nilai2, kurang;
 cout<<"Masukan data pertama :"; cin>>nilai1;
 cout<<"Masukan data kedua   :"; cin>>nilai2;
 kurang = nilai1 + nilai2;
 cout<<"Hasil penambahan : "<<kurang<<endl;
}

int main(){
char pilih, ulang;
mulai:
system("cls");
cout<<"============================"<<endl;
cout<<" Penambahan dan pengurangan "<<endl;
cout<<"============================"<<endl;
cout<<"1. Penambahan               "<<endl;
cout<<"2. Pengurangan              "<<endl;
cout<<"3. Keluar                   "<<endl;
cout<<"============================"<<endl;
cout<<"masukan pilihan menu :"; cin>>pilih;
kembali:
switch(pilih){
case '1':
    penambahan();
    getch();
    break;

case '2':
    pengurangan();
    getch();
    break;

default:
    cout<<"Masukan pilihan anda salah, kembali memasukan ulang !"<<endl;
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
