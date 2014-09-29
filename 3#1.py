#此方法...当x太大的时候，出现错误

def find_factor(x):
    factor_list = []
    i = 1
    while i < len(range(x)):
        if x % i == 0:
            factor_list.append(i)
        i += 1
    return factor_list

def is_prime(x):
    i = 2
    while i < len(range(x)):
        if x % i == 0:
            return False
        else:
            i += 1
    return True
        

def largest_prime_factor(x):
    prime_factor_list = []
    for factor in find_factor(x):
        if is_prime(factor):
            prime_factor_list.append(factor)
    return max(prime_factor_list)
        

print (largest_prime_factor(13195))
print (largest_prime_factor(600851475143))


29
Traceback (most recent call last):
  File "C:\Users\jenny\Desktop\1.py", line 31, in <module>
    print (largest_prime_factor(600851475143))
  File "C:\Users\jenny\Desktop\1.py", line 22, in largest_prime_factor
    for factor in find_factor(x):
  File "C:\Users\jenny\Desktop\1.py", line 4, in find_factor
    while i < len(range(x)):
OverflowError: Python int too large to convert to C ssize_t

