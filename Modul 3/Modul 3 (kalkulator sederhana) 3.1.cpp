#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int values1, values2;
    char operatoor;
    kembali:
    system("cls");
    cout<< "First Input              :"; cin>>values1;
    cout<< "Operator Input (+,-,*,/) :"; cin>>operatoor;
    cout<< "Second Input             :"; cin>>values2;
    switch(operatoor){
    case '+':
        cout<< values1 + values2 <<endl;
        break;
    case '-':
        cout<< values1 - values2 <<endl;
        break;
    case '*':
        cout<< values1 * values2 <<endl;
        break;
    case '/':
        cout<< values1 / values2 <<endl;
        break;
    default:
        cout<<"masukan operator anda salah, silahkan menginput kembali"<<endl;
        getch();
        goto kembali;
    }
return 0;
}
