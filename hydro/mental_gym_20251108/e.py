def get_flips(a1, b1, a2, b2):
    ret = a2 - a1
    if (a2 - a1) % 2 == 0 and b1 != b2:
        ret -= 1
    if (a2 - a1) % 2 == 1 and b1 == b2:
        ret -= 1
    return ret


def compute(n, m, ab):
    ret = 0
    a1 = 0
    b1 = 0
    for i in range(n):
        a2 = ab[i][0]
        b2 = ab[i][1]
        ret += get_flips(a1, b1, a2, b2)
        a1 = a2
        b1 = b2
    ret += m - ab[-1][0]
    return ret


t = int(input())
for i in range(t):
    data = input().split(' ')
    n = int(data[0])
    m = int(data[1])
    ab = []
    for j in range(n):
        data = input().split(' ')
        ab.append((int(data[0]), int(data[1])))
    ab = sorted(ab, key=lambda x: x[0])
    print(compute(n, m, ab))
w