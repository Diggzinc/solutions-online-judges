n = int(input())
while(n != 0):
    s = input()
    v = i = 0
    j = len(s)-1
    while(j > i):
        v += abs(ord(s[j])-ord(s[i]))
        i+=1
        j-=1
    print(v)
    n-=1