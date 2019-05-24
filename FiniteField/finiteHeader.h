#ifndef FINITEHEADER_H_
#define FINITEHEADER_H_
#include <iostream>
#include <cctype>   // prototype for character functions
#include <cmath>

using namespace std;

class FieldElement
{
private:
  int num;
  int prime;

public:
  FieldElement();
  FieldElement(int, int);
  bool operator==(FieldElement &);
  FieldElement operator+(FieldElement &);
  FieldElement operator*(FieldElement &);
  FieldElement operator-(FieldElement & );
  FieldElement Power(int);
  FieldElement PowerNeg(int e);
  void Show() const;
  ~FieldElement();
};



#endif
