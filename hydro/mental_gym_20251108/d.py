import itertools


def get_pailie(row1):
    norm = tuple(range(1, len(row1) + 1))
    t = [int(x) for x in row1]
    if tuple(sorted(t)) == norm:
        ret = []
        for p in itertools.permutations(t):
            flag = True
            if p == tuple(t):
                flag = False
            for i in range(len(p)):
                if p[i] == t[i]:
                    flag = False
            if flag:
                ret.append(p)
        return ret
    else:
        return []


t = int(input())
for i in range(t):
    n = int(input())
    data = input().split(' ')
    ret = get_pailie(data)
    if len(ret) > 0:
        for row in ret:
            temp = [str(x) for x in row]
            print(' '.join(temp))
    else:
        print('-1')
