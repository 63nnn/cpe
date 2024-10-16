# a741. 10101 - Bangla Numbers

# kuti, lakh, hajar, shata
# 10000000
# 100000
# 1000
# 100
# 999999999999999


def slice_num(x: str):
    order = [-1, -2, -2, -2]
    after = []
    after.append(x[-2:])
    x = x[:-2]
    while len(x) > 0:
        for i in order:
            if len(x) >= abs(i):
                tmp = x[i:]
                if int(tmp) == 0:
                    tmp = ""
                after.append(tmp)
                x = x[:i]
    return after[::-1]


def main():
    c = 1
    ori_num = input()
    all_zero_flag = True
    while ori_num:

        unit = ["shata", "hajar", "lakh", "kuti"]

        sliced = slice_num(ori_num)
        amount = (len(sliced) - 1) % 4
        if amount == 0:
            amount = 4
        amount -= 1
        print(f"{c:4}.", end="")
        while len(sliced) > 1:
            if amount < 0:
                amount = 3


            if sliced[0] != "":
                print(f" {sliced[0]}", end="")
                print(f" {unit[amount]}", end="")
                all_zero_flag = False
            elif unit[amount] == "kuti":
                print(f" {unit[amount]}", end="")
            else:
                pass
                

            sliced.remove(sliced[0])
            amount -= 1
        if int(sliced[0]) != 0:
            print(f" {int(sliced[0])}", end="")
        if all_zero_flag:
            print(f" 0", end="")

        print()
        c += 1
        ori_num = input()
        all_zero_flag = True


main()
