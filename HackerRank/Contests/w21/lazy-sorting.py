import math

n = int(input())
s = input().split(" ")
m = {}
x = [0] * len(s)
for i in range(0, len(s)):
    key = int(s[i])
    x[i] = key
    if key in m:
        m[key] += 1
    else:
        m[key] = 1
if(all(x[i] <= x[i+1] for i in range(len(x)-1))):
    print("%.6f" % 0)
else:
    p = 1
    for key in m:
        p *= math.factorial(m[key])
    n = math.factorial(n) // p

    print("%.6f" % n)