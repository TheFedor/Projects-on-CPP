n = int(input())
a = 1
b = 2
c = 2
sch = 2
while (sch <= n):
    c = a + b
    a = b
    b = c
    sch = sch + 1

print(c)
