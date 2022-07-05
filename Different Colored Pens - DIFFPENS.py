for _ in range(int(input())):
    n = int(input())
    s = input()
    new = s[0]
    j = 0
    for i in range(1, n):
        if s[i] == new[j]:
            continue
        else:
            new += s[i]
            j += 1
    print(n - len(new))
