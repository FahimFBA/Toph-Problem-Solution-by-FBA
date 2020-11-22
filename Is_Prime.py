# Program to check if a number is prime or not

num = int(input())

# To take input from the user
#num = int(input("Enter a number: "))

# prime numbers are greater than 1
if num > 1:
   # check for factors
   for i in range(2,num):
       if (num % i) == 0:
           print("No")
           
           break
   else:
       print("Yes")
       
# if input number is less than
# or equal to 1, it is not prime
else:
   print("No")