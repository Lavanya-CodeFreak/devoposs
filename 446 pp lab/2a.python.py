def isprime(n):
    i=2
    while i<n:
        if n%2==0:
            return False
        i+=1
        return True
n=int(input("enter a number"))
i=2
print("the prime numbers are:",end=" ")
while i<=n:
    if isprime(i):
        print(i,end=" ")
    i+=1
