t = int(input())
for i in range(t):
    s = input()
    n = 0
    for c in s:
        if c >= 'A' and c <= 'Z':
            n += 1
    if len(s) == 5 or n == 5:
        print('YES')
    else:
        print('NO')
