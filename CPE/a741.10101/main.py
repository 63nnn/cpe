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
    # return k, l, h, s, num1


def blank_check():
    pass


def main():
    num1 = int(input())
    list1 = [0 for _ in range(11)]
    pointer = 0
    check = 1
    while check:
        temp = cal(num1)
        for i in range(5):
            list1[pointer] = temp[i]
            if i != 4:
                pointer += 1
        check = temp[4]
        num1 = num1 // 10000000
        print(list1)


def test():
    list1 = [0 for _ in range(11)]
    pointer = 0
    num1 = 45897458973958
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


test()
