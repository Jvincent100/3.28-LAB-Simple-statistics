#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   int num1;
   int num2;
   int num3;
   int num4;
   
   cin >> num1>> num2>> num3>> num4;

   cout << int(num1*num2*num3*num4) << " " << int(num1+num2+num3+num4)/4 << endl; // first half
   
   cout << fixed << setprecision(3) << (double)num1 * num2 * num3 * num4 << ' ' << 
   (num1 + num2 + num3 + num4) / 4.0 << endl; 
   //answer in float-point arithmetic
   
   return 0;
}
