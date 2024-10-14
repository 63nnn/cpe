def main():
    n = int(input())

    str_in = ""
    for i in range(n):
        str_in += input().lower()
    lst = set(str_in)
    lst.remove(" ")

    dict1 = {}
    for i in lst:
        dict1[i] = str_in.count(i)

    dict1 = sorted(dict1.items(), key=lambda x: x[1], reverse=True)
    for i in dict1:
        if str(i[0]).isalpha():
            print(f"{str(i[0]).upper()} {i[1]}")


main()
