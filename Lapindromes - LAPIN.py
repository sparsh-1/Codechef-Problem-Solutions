for _ in range(int(input())):
    a = input()
    temp1 = str()
    temp2 = str()
    if len(a) % 2 == 0:
        temp1 = a[0:len(a) // 2: 1]
        temp2 = a[len(a) // 2:len(a):1]
    else:
        temp1 = a[0:len(a) // 2: 1]
        temp2 = a[len(a) // 2 + 1:len(a):1]
    temp1 = list(temp1)
    temp1.sort()
    temp2 = list(temp2)
    temp2.sort()
    flag = True
    for i in range(len(temp1)):
        if temp1[i] == temp2[i]:
            continue
        else:
            flag = False
            break
    if flag:
        print("YES")
    else:
        print("NO")
