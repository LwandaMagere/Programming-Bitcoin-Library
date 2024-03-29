
class FieldElement:
    def __init__(self, num, prime):
        if num >= prime or num < 0:
            error = 'Num {} not in field range 0 to {}'.format(num, prime - 1)
            raise ValueError(error)
        self.num = num
        self.prime = prime
    def __repr__(self):
        return 'FieldElement_{}({})'.format(self.prime, self.num)
    def __eq__(self, other):
        if other is None:
            return False
        return self.num == other.num and self.prime == other.prime


a = FieldElement(7, 13)
b = FieldElement(6, 13)

print(a == b)
print(a == a)