#质数生成器

def prime_list_generator(num):
    prime_list = [2]
    for x in range(num+1)[3::]:
        jump = False
        for i in prime_list:
            if x % i == 0:
                jump = True
                break
        if jump == False:
            prime_list.append(x)
            
    return prime_list
    
print (sum(prime_list_generator(200000)))

# ...Python跪了  20000还可以比较快出来，200000要等很久，2000000简直就跪了阿。。
