#include <iostream.h>
#include <iomanip>
#include <math.h>
using  namespace std;


int main() {

  setlocale(LC_ALL,"")
  double a=0 , b=0 , c=0;
  
//  ax^2+bx

  cout<<"Pls name a:" << endl;
  cin >> a;
  cout<<"Pls name b:" << endl;
  cin >> b;
  cout<<"Pls name c:" << endl;
  cin >> c;

  double diskr= pow(b, 2) - 4 * a * c;

  if (sqrt(sdiskr)<0)
  {
   cout<< "Nicht" <<endl;
  }

 else {
     double sdiskr = sqrt(diskr)

   double x1=(-b - sdiskr)/ 2*a, 
   x2= (-b - sdiskr)/ 2*a;

   cout << "1" << x1 << x1 << "/n" <<endl;
   cout << "Pls" << endl;
 }
  return 0;
  
  }