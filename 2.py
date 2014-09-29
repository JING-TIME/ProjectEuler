# my code

fib_list = [1,1]
while fib_list[-1] < 4000000:
	fib_list.append(fib_list[-1] + fib_list[-2])
 
sum = 0
    
for num in fib_list:
    if num % 2 == 0:
        sum += num
        
print sum

# cuihao说以上的代码，太占内存了！


########## cuihaoleo's code  ###########

def fib (m):
    a, b, c = 0, 1, 1
    yield 1
    while a+b <= m:
        c = a + b
        yield c 
        a, b= b, c
 
s = 0
for i in fib(4000000):
    if i%2 == 0:
        s += i 
 
print s
