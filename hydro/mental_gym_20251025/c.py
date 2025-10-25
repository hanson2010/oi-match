data = input().split(' ')
n = int(data[0])
m = int(data[1])

a = [int(x) for x in input().split(' ')]

sorted_a = sorted(a, reverse=True)
ans = n
for i in sorted_a:
    m -= i
    if m < 0:
        break
    if m == 0:
        ans -= 1
        break
    ans -= 1
print(ans)
