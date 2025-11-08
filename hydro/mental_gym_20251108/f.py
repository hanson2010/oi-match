def compute(t, balls):
    if len(balls) == 0:
        return 1
    if t == 1:
        if balls[0] == 1:
            return compute(-1, balls[1:]) + compute(0, balls[1:])
        if balls[0] == 0:
            return 0
        if balls[0] == -1:
            return compute(1, balls[1:])
    if t == 0:
        if balls[0] == 1:
            return compute(-1, balls[1:]) + compute(1, balls[1:])
        if balls[0] == 0:
            return compute(0, balls[1:])
        if balls[0] == -1:
            return 0
    if t == -1:
        if balls[0] == 1:
            return compute(0, balls[1:]) + compute(1, balls[1:])
        if balls[0] == 0:
            return 0
        if balls[0] == -1:
            return compute(-1, balls[1:])


t = int(input())
for i in range(t):
    n = int(input())
    a = [int(x) for x in input().split(' ')]
    ret = compute(1, a)
    print(ret)
