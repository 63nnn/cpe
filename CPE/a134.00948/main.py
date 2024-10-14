def make_fib():
    fib = [1, 2]
    for i in range(2, 38):
        fib.append(fib[i - 2] + fib[i - 1])
    fib = fib[::-1]
    return fib


fib_lst = make_fib()


def fib_bits(x):
    tmp = x
    bits = ""
    for i in fib_lst:
        if tmp >= i:
            tmp -= i
            bits += "1"
        else:
            bits = bits + "0"
    return bits


def main():
    n = int(input())
    nums = [0] * n
    for i in range(n):
        nums[i] = int(input())

    for i in nums:
        tmp = fib_bits(i).lstrip("0")
        print(f"{i} = {tmp} (fib)")


main()
