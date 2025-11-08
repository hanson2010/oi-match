MIN_N = -2 ** 31
MAX_N = 2 ** 31 - 1


t = int(input())
for i in range(t):
    n = input()
    negative = ''
    if n[0] == '-':
        negative = '-'
        n = n[1:]
    reversed = n[::-1]
    ans = int(negative + reversed)
    if ans >= MIN_N and ans <= MAX_N:
        print(ans)
    else:
        print('0')
