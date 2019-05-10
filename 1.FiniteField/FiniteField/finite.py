
class FieldElement:
    
    def __init__(self, num, prime): # 1
        if num >= prime or num < 0:
            error = 'Num {} not in field range 0 to {}'.format(num, prime - 1)
            raise ValueError(error)
        self.num = num # 2
        self.prime = prime

    def __repr__(self):
            return 'FieldElement_{}({})'.format(self.prime, self.num)
        
    def __eq__(self, other):
            if other is None:
                return False
            return self.num == other.num and self.prime == other.prime # 3
    
    def __add__(self, other):
        if self.prime != other.prime: # 4
            raise TypeError('Cannot add tow numbers in different Fields')
        num = (self.num + other.num) % self.prime # 5
        return self.__class__(num, self.prime) # 6

    def __add__(self, other):
        if self.prime != other.prime: # 1
            raise TypeError('Cannot add two numbers in different Fields')
        num = (self.num + other.num) % self.prime # 2
        return self.__class__(num, self.prime) # 3

    

    def __pow__(self, exponent):
        n = exponent % (self.prime -1)
        num = pow(self.num, n, self.prime)
        return self.__class__(num,self.prime)

a = FieldElement(7, 13)
b = FieldElement(6, 13)

print(a == b)
print(a == a)

a = FieldElement(7,13)
b = FieldElement(12,13)
c = FieldElement(6,13)

print(a+b == c)

a = FieldElement(7, 13)
b = FieldElement(8,13)
print(a**-3 == b)

