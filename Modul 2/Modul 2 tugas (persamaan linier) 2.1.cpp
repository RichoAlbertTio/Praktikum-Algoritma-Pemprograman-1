#include <iostream>

using namespace std;

int main()
{
 float Ax, Ay, Bx, By, m, c, x, y;

 cout << "Persamaan linear y = mx + c\n\n";
 cout << "Masukkan Titik Ax : "; cin  >> Ax;
 cout << "Masukkan Titik Ay : "; cin  >> Ay;
 cout << "Masukkan Titik Bx : "; cin  >> Bx;
 cout << "Masukkan Titik By : "; cin  >> By;
 cout << "Masukkan Nilai x : "; cin  >> x;

 m = ((By-Ay)/(Bx-Ax));
 c = Ay - (m*Ax);
 y = m*x + c;

 cout << "\nm = " << m;
 cout << "\nc = " << c;
 cout << "\nPersamaan Linear y = " << m << " x + " << c;
 cout << "\nUntuk x = " << x << " maka nilai y = " << y;

 return 0;
}
