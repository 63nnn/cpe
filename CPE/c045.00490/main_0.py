strs = []

n = -1
longest = 0


while True:
    tmp = input()
    strs.append(tmp)
    n += 1
    if len(tmp) > longest:
        longest = len(tmp)
