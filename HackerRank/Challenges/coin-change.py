s = input().split(" ")
change = int(s[0])
nCoins = int(s[1])
amounts = [0] * (change+1)
coins = [0] * nCoins
s = input().split(" ")
amounts[0] = 1
for i in range(0,nCoins):
	coin = int(s[i])
	for j in range(coin, change+1):
		amounts[j] = amounts[j-coin]+amounts[j]
print(amounts[change])