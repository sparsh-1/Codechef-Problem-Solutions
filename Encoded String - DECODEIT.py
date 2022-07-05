for _ in range(int(input())):
    n = int(input())
    s = input()
    j = 0
    for i in range(n // 4):
        ans = ''
        temp = s[j:j + 4]
        j += 4
        if temp[0] == '0':
            if temp[1] == '0':
                if temp[2] == '0':
                    if temp[3] == '0':
                        ans += 'a'
                    else:
                        ans += 'b'
                else:
                    if temp[3] == '0':
                        ans += 'c'
                    else:
                        ans += 'd'
            else:
                if temp[2] == '0':
                    if temp[3] == '0':
                        ans += 'e'
                    else:
                        ans += 'f'
                else:
                    if temp[3] == '0':
                        ans += 'g'
                    else:
                        ans += 'h'
        else:
            if temp[1] == '0':
                if temp[2] == '0':
                    if temp[3] == '0':
                        ans += 'i'
                    else:
                        ans += 'j'
                else:
                    if temp[3] == '0':
                        ans += 'k'
                    else:
                        ans += 'l'
            else:
                if temp[2] == '0':
                    if temp[3] == '0':
                        ans += 'm'
                    else:
                        ans += 'n'
                else:
                    if temp[3] == '0':
                        ans += 'o'
                    else:
                        ans += 'p'
        print(ans, end='')
    print()
