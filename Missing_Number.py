sum=input()
sum=int(sum)
taking_input=input().split()

a,b,c=taking_input
missing_value=sum-(int(a)+int(b)+int(c))
print(missing_value)