


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

    highest = sorted(dict1.items(), key=lambda x:x[1] , reverse=True)[0][1]

    dict1 = sorted(dict1.items(), key=lambda x:x[0]) # sort by char
   
    lst_out = []
    for i in range(highest+1)[::-1]:
        for j in dict1:
            if j[1] == i:
                lst_out.append(j)
        
        

    for i in lst_out:
        if str(i[0]).isalpha():
            print(f"{str(i[0]).upper()} {i[1]}")





main()
