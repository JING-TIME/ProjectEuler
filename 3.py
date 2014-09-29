num = 600851475143
i = 2

while i < num/2 + 1:
    if num % i == 0:
        num /= i
    i += 1

print (num)
