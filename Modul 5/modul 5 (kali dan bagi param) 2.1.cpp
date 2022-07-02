#include <iostream>
#include <conio.h>

using namespace std;

int perkalian(int nilai1, int nilai2){
 int kali;
 kali = nilai1 * nilai2;
 return(kali);
}

void pembagian(int nilai1,int nilai2){
 int bagi;
 cout<<"Masukan data pertama :"; cin>>nilai1;
 cout<<"Masukan data kedua   :"; cin>>nilai2;
 bagi = nilai1 / nilai2;
 cout<<"Hasil pembagian : "<<bagi<<endl;
}

main(){
char pilih, ulang;
int nilai1,nilai2;
mulai:
system("cls");
cout<<"============================"<<endl;
cout<<" Penambahan dan pengurangan "<<endl;
cout<<"============================"<<endl;
cout<<"1. Perkalian                "<<endl;
cout<<"2. Pembagian                "<<endl;
cout<<"3. Keluar                   "<<endl;
cout<<"============================"<<endl;
cout<<"masukan pilihan menu :"; cin>>pilih;
kembali:
switch(pilih){
case '1':
    cout<<"Masukan data pertama :"; cin>>nilai1;
    cout<<"Masukan data kedua   :"; cin>>nilai2;
    perkalian(nilai1,nilai2);
    getch();
    break;

case '2':
    pembagian(nilai1,nilai2);
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
