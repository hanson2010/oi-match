data = input().split(' ')
n = int(data[0])
x = int(data[1])
monster = []
for i in range(n):
    data = input().split(' ')
    monster.append({
        'a': int(data[0]),
        'b': int(data[1]),
    })
sorted_monster = sorted(monster, key=lambda x : x['a'])
ans = x
for i in sorted_monster:
    if ans < i['a']:
        break
    ans += i['b']
print(ans)
