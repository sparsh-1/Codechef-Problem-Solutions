for _ in range(int(input())):
    n, k, d = map(int, input().split())
    a = list(map(int, input().split()))
    print(sum(a) // k if sum(a) // k <= d else d)
