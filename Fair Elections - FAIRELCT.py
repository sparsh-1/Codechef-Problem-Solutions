for _ in range(int(input())):
    n, m = map(int, input().split())
    a = list(sorted(list(map(int, input().split()))))
    b = list(sorted(list(map(int, input().split())), reverse=True))
    i = 0
    if sum(a) > sum(b):
        print(0)
        continue
    count = 0
    while True:
        if i and a[i] >= b[i]:
            break
        else:
            a[i], b[i] = b[i], a[i]
            count += 1
            i += 1
        if sum(a) > sum(b):
            break
        if i >= n or i >= m:
            break
    if sum(a) <= sum(b):
        print(-1)
    else:
        print(count)
