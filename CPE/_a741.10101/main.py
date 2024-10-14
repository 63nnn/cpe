# kuti, lakh, hajar, shata
# 10000000, 100000, 1000, 100
# 999999999999999


def cal(num1):
    k = num1 // 10000000
    num1 %= 10000000
    l = num1 // 100000
    num1 %= 100000
    h = num1 // 1000
    num1 %= 1000
    s = num1 // 100
    num1 %= 100
    return num1, s, h, l, k


def index_name(index):
    list1 = ["shata", "hajar", "lakh", "kuti"]
    temp = index % 4
    if temp == 0:
        return "kuti"
    else:
        return list1[temp]


def index_namet(index):
    list1 = ["kuti", "lakh", "hajar", "shata"]
    temp = -(index % 4)
    return list1[temp]


def sub(c):
    num1 = int(input())
    list1 = [0 for _ in range(11)]
    pointer = 0
    check = 1
    while check:
        temp = cal(num1)
        i = 0
        while len(list1) != pointer and len(temp) != i + 1:
            list1[pointer] = temp[i]
            if i != 4:
                pointer += 1
            i += 1
        check = temp[4]
        num1 = num1 // 10000000
    pointer = 0
    output = f" {list1[0]}"
    for i in range(1, len(list1)):
        if list1[i] != 0:
            str1 = index_name(pointer)
            output = f" {list1[i]} {str1}{output}"
        pointer += 1
    print(f"{c}.{output}")


def test():
    num1 = 45897458973958
    list1 = [0 for _ in range(9)]
    pointer = 0
    check = 1
    while check:
        temp = cal(num1)
        i = 0
        while len(list1) != pointer and len(temp) != i + 1:
            list1[pointer] = temp[i]
            if i != 4:
                pointer += 1
            i += 1
        check = temp[4]
        num1 = num1 // 10000000
        print(list1)
    pointer = 0
    output = f" {list1[0]}"
    for i in range(1, len(list1)):
        if list1[i] != 0:
            str1 = index_name(pointer)
            output = f" {list1[i]} {str1}{output}"
        pointer += 1
    print(output)


def main():
    c = 1
    while True:
        sub(c)
        c += 1


main()
