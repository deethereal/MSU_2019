import random
fr0m=[1,2,3,4,5]
t0=[1,2,3,4,5]
size=len(fr0m)
const=size
print(const)
for i in range(size):
    j=0
    a=random.choice(fr0m)
    b=random.choice(t0)
    while a==b:
        a=random.choice(fr0m)
        b=random.choice(t0)
    print("{}: {} -----> {}".format(i+1,a,b))
    fr0m.remove(a)
    t0.remove(b)

    
