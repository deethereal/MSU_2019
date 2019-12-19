import random

f,g=1,1
fr0m=['Макс','Данила','Саша Т.','Альнур','Назар','Денис','Максим','Настя','Даша','Полина','Глеб','Андрей','Маша','Алёна','Миша Л.','Надя','Нина','Егор','Лёша','Саша']
t0=['Макс','Данила','Саша Т.','Альнур','Назар','Денис','Максим','Настя','Даша','Полина','Глеб','Андрей','Маша','Алёна','Миша Л.','Надя','Нина','Егор','Лёша','Саша']
size=len(fr0m)
const=size
for i in range(const):
    j=0
    a=random.choice(fr0m)
    b=random.choice(t0)
    while a==b:
        a=random.choice(fr0m)
        b=random.choice(t0)
    print(a,"----->",b)
    for j in range(size):
        if f==1:
            if a==fr0m[j]:
                fr0m.remove(fr0m[j])
                f=0
        if g==1:
            if b==t0[j]:
                t0.remove(t0[j])
                g=0
    size-=1
    f=1
    g=1
