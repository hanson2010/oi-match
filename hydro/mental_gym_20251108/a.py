n = int(input())
for i in range(n):
    s = input().split(' ')
    a = int(s[0])
    b = int(s[1])
    c = int(s[2])
    if a == b + c:
        print('YES')
    else:
        print('NO')
