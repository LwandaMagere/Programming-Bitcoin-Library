prime = 19
for k in (1,3,4,13,18):
    print([k*i % prime for i in range(prime)])

for k in (1,3,4,13,18):
    print(sorted([k*i % prime for i in range(prime)]))