#include "finiteHeader.h"



int main()
{
  bool  A;

  FieldElement B(7, 13);
  FieldElement D(6, 13);


  FieldElement K(7, 13);
  FieldElement J(12,13);
  FieldElement Z(6, 13);
 


  FieldElement L(3, 13);
  FieldElement M(1, 13);

  FieldElement R(7, 13);
  FieldElement S(8, 13);

 
  A = D == B;
  cout.setf(ios_base::boolalpha);
  cout <<" D == B  is " << A; D.Show(); cout << "\n";
  

  A = D == D;
  cout <<" D == D  is " << A; D.Show(); cout << "\n"; 

  K = K + J;
  A = K == Z ;
  cout <<" K == B  is " << A; K.Show(); cout << "\n";

  /* K = K * J;
   A = K == Z;
  cout <<" K == B  is " << A; K.Show(); cout << "\n";*/

  L = L.Power(3);
  A = L == M;
  cout << A << "\n";
 

  R = R.PowerNeg(-3);
  A = R == S;
  cout << A  << "\n"; 
 

  return 0;
}
