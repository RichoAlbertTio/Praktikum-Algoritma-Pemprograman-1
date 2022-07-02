#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int i,j,z, nilai;
    cout<<"masukan jumlah yang dinginkan :"; cin>>nilai;
    for (i = nilai; i >= 1; i--)
      {
            for (j = 1; j <= i; j++)
            {
                  cout << "$ ";
            }
            // ending line after each row
            cout << "\n";
      }
        z=i;
        for(i=1; i<=nilai ;i++)
        { {
         for (j=1; j<=i; j++)
         {
         cout<<"$ ";
         }}

        cout<<endl;
        z--;
        }
     return 0;
    }

