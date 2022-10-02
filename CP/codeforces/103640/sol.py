n , m = map(int , input().split())
a = []

for i in range(0 , n):
    u , v = map(int , input().split())
    a.append((u , v))

l , r = 0 , int(1e18)

while l <= r:
    prod = 0
    mid = (l + r) // 2
    for i in range(0 , n):
        days = mid - (mid // (a[i][1] + 1))
        prod += days * a[i][0]    
    if prod >= m:
        r = mid - 1
    else:
        l = mid + 1
print(r + 1)