#include "finiteHeader.h"

// default constructor
FieldElement::FieldElement(){}

// We first check that num is between 0 and prime-1 inclusive. If not, we get an error,
// which is what we should raise when we get an inappropriate value.
FieldElement::FieldElement( int  n ,  int p)
{
		num = n;        // intializing values
  	prime = p;

   if (num >= prime || num < 0)
      cerr << "Num " << num << " not in field range 0 to " << prime -1 << endl;
}

// The  method checks if two objects of class FieldElement are equal.
//  This is only true when the num and prime properties are equal.
bool FieldElement::operator==(FieldElement & s)
{
	if (num == s.num && prime == s.prime)
		return true;
	if (s.num == num)
		return true;
	else
		return false;	
}


//We have to ensure that the elements are from the same Finite Field,
 //otherwise this calculation doesn’t have any meaning.
 //Addition in a Finite Field is defined with the modulo operator,
 //We have to return an instance of the class,
FieldElement FieldElement::operator+(FieldElement & s)
{

	if (prime != s.prime)
		cerr << "Cannot add two numbers in different Fields\n";
		FieldElement temp;
		temp.num = ( num + s.num ) % prime;
	return temp;
}

FieldElement FieldElement::operator-(FieldElement & s)
{
  if (prime != s.prime)
      cerr << "Cannot subtract two numbers in different Fields\n";
      FieldElement temp;
      temp.num = (num - s.num) % s.prime;
      return temp;
}

FieldElement FieldElement::operator*(FieldElement & s)
{
  if ( prime != s.prime)
     		 cerr << "Cannot multiply two numbers in different Fields\n";
  FieldElement temp;
  temp.num = (num * s.num) % s.prime;
  return temp;
}

FieldElement FieldElement::Power(int  e)
{
	FieldElement temp;
	int base, answer, exponent;
	base = num;
	exponent = e;
	answer =  pow(base, exponent);
	temp.num =  answer % prime;
	return temp;
	
}

FieldElement FieldElement::PowerNeg(int e)
{
	   int base, exponent, answer;
	   FieldElement temp;
		 exponent = e;
		 base = num;
		 while (exponent < 0)   // We add until we get a positive exponent.
			 	exponent += prime - 1;	
		 answer = pow(base, exponent);
		 temp.num =  answer % prime;
		 return temp;
		 
}

void FieldElement::Show() const
{
  cout << "(" << num << ")" << "_" << "(" << prime << ")" << endl;
}

// destructor
FieldElement::~FieldElement(){}

