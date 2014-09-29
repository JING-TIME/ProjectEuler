#判断是不是回文数字

def is_palindrome(num):
    while len(str(num))> 0:
        if str(num)[0] == str(num)[-1]:
            num = str(num)[1:-1]
        else:
            return False
    return True

max_num = 0

#构造两个3位数的乘积

for i in range(900,999):
    for j in range(900,999):
        product = i*j
        if is_palindrome(product):
            if max_num < product:
                max_num = product
                        
print (max_num)

        
