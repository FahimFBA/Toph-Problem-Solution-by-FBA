n=int(input())
a=1
b=1
for i in range(0, n-2): #I gave two numbers to a & b already. So for managing them all properly, I have deducted them from the range of the loop
    t=a+b #t is a temporary variable here
    b=a
    a=t
print(t)