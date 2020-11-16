t=int(input())
list_var=list(map(int, input().split())) [:t]
avg=0
counter=1
for i in range(0,t):
    avg=avg+list_var[i]
    output=(avg/counter)
    print(output)
    counter=counter+1
    
   