#include <iostream>
#include <cmath>
using namespace std;

float f(float y){
   return (((y*y)*cos(y))+1);
}

int main() {
   float a = 0, b = 0, x = 0, err = 0;
   
   do {
      cout << "inserire estremi" << endl;
      cin >> a >> b;
   } while ((f(a)*f(b)) >= 0);
   
   do {
      x = ((a+b)/2);
      if (f(x) == 0){
      } else {
         if ((f(a)*f(x)) < 0){
            b = x;
         } else if ((f(a)*f(x)) > 0){
            a = x;
         }
         err = (abs((b-a)/2));
      }
   } while (err >= (1/(pow(M_E, 6))));
   
   x = x*10000;
   float risultato1 = int (x);
   float risultato2 = risultato1/10000;
   cout << risultato2;
   
   return 0;
}
