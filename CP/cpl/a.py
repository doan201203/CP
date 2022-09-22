from math import factorial

def fac(n) -> int:
    res = int(1)
    for i in range(1 , n + 1):
        res *= i
    return res

ans = 1.0
x = float(input())
n = 1
cnt = 1
while n <= 70:
    xx = pow(x , n)
    nn = fac(n)
    num = xx / nn
    ss = '{:.8f}'.format(num);
    ans += float(ss)
    n += 1
print('{:.4f}'.format(ans))