#include <iostream>
using namespace std;

int main(){
    float luas, jari_jari;
    const int phi = 3.14;
    cout<<"masukan jari-jari : "; cin>> jari_jari;
    luas = phi * jari_jari * jari_jari;
    cout<< luas << endl;
    return 0;
}
