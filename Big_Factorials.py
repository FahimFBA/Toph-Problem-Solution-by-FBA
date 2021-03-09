N = int(input())

J = -4 # negative index as I want the last 4 digits of the whole factorial value

factorial = 1

for i in range(1,N+1):
    factorial = factorial * i

temp_variable = factorial # taking the full value of the factorial to a temp variable so that the original full value of the factorial can't get altered

# I'll take another temp variable and I will type case the int to string

another_temp_variable = list(map(int, str(temp_variable)))

if len(another_temp_variable)<4: # If the length of the factorial value is less than 4, then we can simply print them all
    print(temp_variable)
else: # Otherwise we need to identify the last 4 digits and print them out
    while True:
        print(another_temp_variable[J], end="") # using end="" so that it won't print the new line automatically
        J += 1
        if J == 0:
            break # This would break if it finds the last digit of the string value of the factorial