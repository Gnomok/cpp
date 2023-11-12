#include <iostream>
#include <cmath>
#include <cstdlib>


using namespace std;


int main()
{
  double a,b,c,P;
                                                                                                                    cout << "podaj dlugosc" << endl;
  cin >> a;
  cout <<"podaj wysokosc" << endl;
  cin >> b;
        if (a,b >= 0)
        {
        c = sqrt(a*a + b*b);
        P = a + b + c;
        cout << " c: " << c << endl;
           if (P >= 10)
           { 
           cout << "P jest wieksze od 10, a same:" << P << endl;
           }
           else
           {
           cout << "P jest mniejsze od 10, a same:" << P << endl;
           }
         }
         else 
         {
           cout << "sigma" << endl;
         }
         
  return 0;
}