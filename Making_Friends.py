t=int(input())
r=0
for i in range(1, t):
    if(t%i==0):
        r=r+1
print(r)