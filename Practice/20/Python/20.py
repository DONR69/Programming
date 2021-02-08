b = 0
money, n = int(input()), int(input())
drinks = [0] * n
price = [0] * n
v = [0] * n
rez = [0] * n
liter = [0] * n
for i in range (n) :
    drinks[i], price[i], v[i] = map(str, input().split(' '))
    #drinks[i] = ''.join(drinks[i])
    #price[i] = ''.join(price[i])
    #v[i] = ''.join(v[i])
    #print(drinks[i], price[i], v[i])
    price[i] = int(price[i])
    v[i] = int(v[i])
    rez[i] = int(money / price[i])
    liter[i] = rez[i] * v[i]
    #print(rez[i], liter[i])
    if liter[i] == 0 : b = b + 1
if b == n :
    print(-1)
    exit(0)
for i in range (n) :
    for j in range (n) :
        if liter[i] > liter[j] : k = i
print(drinks[k], rez[k])
print(liter[k])
print(money - (price[k] * rez[k]))