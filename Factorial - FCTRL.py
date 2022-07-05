for _ in range(int(input())):
    n = int(input())
    ans = 0
    i = 1
    while True:
        ans += n // pow(5, i)
        i += 1
        if n // pow(5, i) == 0:
            break
    print(ans)
