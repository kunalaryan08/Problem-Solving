def form(s, n):
    if n % 2 == 0:
        return s[-n:] + s[:-n]
    else:
        return s[n:] + s[:n]

s1, s2 = input().split()
n1 = int(s1.split(":")[1].strip())
n2 = int(s1.split(":")[1].strip())
s1 = s1.split(":")[0].strip()
s2 = s2.split(":")[0].strip()
n1 = n1 % len(s1)
n2 = n2 % len(s2)
if n1 < 0 and n2 < 0:
    print(-1)
    print(-1)
elif n1 < 0 and n2 >= 0:
    print(-1)
    print(form(s2,n2))
elif(n1 >= 0 and n2 < 0):
    print(form(s2,n2))
    print(-1)
else:
    print(form(s1,n1))
    print(form(s2,n2))

