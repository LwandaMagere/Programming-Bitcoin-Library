#include "finiteHeader.h"



int main()
{
  bool  A;

  FieldElement B(7, 13);
  FieldElement D(6, 13);

  cout << "checks if two objects of class FieldElement are equal.\n\n";

  A = D == B;
  cout.setf(ios_base::boolalpha);
  cout <<" D == B  is " << A;
  D.Show(); cout << "\n";

  A = D == D;
  cout <<" D == D  is " << A; 
  D.Show(); cout << "\n"; 
  
  FieldElement K(7, 13);
  FieldElement J(12,13);
  FieldElement Z(6, 13);

  cout << "Addition in Finite Field K + J \n\n";
  K = K + J;
  A = K == Z ;
  cout <<" K == Z  is " << A; 
  Z.Show(); cout << "\n";

  FieldElement T(3, 13);
  FieldElement Y(12, 13);
  FieldElement H(10, 13); 

  cout << "Multiplication in Finite Field T * Y\n\n";
   T = T * Y;
   A = T == H;
  cout <<" T == H  is " << A; 
  H.Show(); 
  cout << "\n";


  FieldElement L(3, 13);
  FieldElement M(1, 13);
  cout << "Exponentiation in Finite Fields L ^3: L == M\n";
  L = L.Power(3);
  A = L == M;
  cout << A << "\n";

  FieldElement R(7, 13);
  FieldElement S(8, 13);
  cout << "Negative Exponetiation inn Finite Fields R^-3: R == S\n";
  R = R.PowerNeg(-3);
  A = R == S;
  cout << A  << "\n"; 
  

  

  

  

  
 

  
 

  return 0;
}
