for _ in range(int(input())):
    n = input()
    if n.endswith('0'):
        n = int(n)
        while n % 10 == 0:
            n = n // 10
        n = str(n)
        print(n[::-1])
    else:
        print(n[::-1])
