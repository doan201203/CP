import math as M

n = int(input())

ans = float((M.factorial(n) * M.factorial(n)) / (M.pow(n , n)))

print('{:.9f}'.format(ans))

