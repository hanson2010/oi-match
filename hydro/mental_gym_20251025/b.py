def benxian(x, y, a, b):
    d1 = abs(x - y)
    d2 = abs(a - b)
    if x == y:
        return True
    if d1 % (a + b) == 0:
        return True
    if a == b:
        return False
    if d1 % d2 == 0:
        return True
    return False


t = int(input())
for i in range(t):
    data = input().split(' ')
    x = int(data[0])
    y = int(data[1])
    a = int(data[2])
    b = int(data[3])
    if benxian(x, y, a, b):
        print('YES')
    else:
        print('NO')
