import math

def sieve(n):
    np1 = n + 1
    s = list(range(np1))
    s[1] = 0
    sqrtn = int(round(n**0.5))
    for i in range(2, sqrtn + 1):
        if s[i]:
            s[i*i: np1: i] = [0] * len(range(i*i, np1, i))
    return list(filter(None, s))

primes = sieve(1000000)
t =  int(input())
for i in range(0,t):
    n = int(input())
    ones = n
    fours = 0
    m = 0
    while(ones >= 0):
        m += math.factorial(ones + fours) // (math.factorial(ones) * math.factorial(fours)) 
        fours+=1
        ones-=4
    c = 0
    while(primes[c] <= m):
        c += 1
    print(c)