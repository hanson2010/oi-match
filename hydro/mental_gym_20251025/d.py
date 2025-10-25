import math


t = int(input())
for i in range(t):
    data = input().split(' ')
    a = int(data[0])
    b = int(data[1])
    c = int(data[2])
    temp = int(math.sqrt(b ** 2 - 4 * a * c))
    m = p = 2 * a
    n = - b + temp
    q = - b - temp
    print(f'{m} {n} {p} {q}')
