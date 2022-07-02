#include <iostream>
using namespace std;

int main(){
    int a, b;
    int tambah, kurang, kali, sisa;
    float bagi;
    cout<<"masukan bilangan pertama :"; cin>>a;
    cout<<"masukan bilangan kedua :"; cin>>b;
    tambah = a + b;
    kurang = a - b;
    kali = a * b;
    bagi = a / b;
    sisa = a % b;
    cout<<endl;
    cout<<"Jadi hasilnya dari "<< a <<" + "<< b <<" adalah "<< tambah <<endl;
    cout<<"                   "<< a <<" - "<< b <<" adalah "<< kurang<<endl;
    cout<<"                   "<< a <<" * "<< b <<" adalah "<< kali<<endl;
    cout<<"                   "<< a <<" / "<< b <<" adalah "<< bagi<<endl;
    cout<<"                   "<< a <<" % "<< b <<" adalah "<< sisa<<endl;
    return 0;
}
