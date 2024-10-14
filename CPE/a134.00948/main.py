def make_fib():
    fib = [0, 1]
    for i in range(2, 40):
        fib.append(fib[i - 2] + fib[i - 1])
    return fib


def fib_bits(x):
    pass


def main():
    fib = make_fib()
    n = int(input())
    nums = []
    for i in range(n):
        nums[i] = input()

    for i in nums:
        tmp = fib_bits(i)
        print(f"{i} {tmp}")


main()
