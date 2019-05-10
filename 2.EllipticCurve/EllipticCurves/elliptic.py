class Point:

    def __init__(self, x, y, a, b):
        self.a = a
        self.b = b
        self.x = x
        self.y = y
        if self.y**2 != self.x**3 + a * x + b: #We check here that the point is actually on the curve.
            raise ValueError('({},{}) is not on the curve'.format(x,y))  

    def __eq__(self, other): # 3
        return self.x == other.x and self.y == other.y and self.a == other.a and self.b == other.b

        # 3 Points are equal if and only if they are on the same curve and have the same coordinates.

p1 = Point(-1, -1, 5, 7)
p2 = Point(-1, -2, 5, 7)