my_list = []
now_list = range(1,1000)
 
for i in range(1,1000):
    if i%3 == 0:
        my_list.append(i)
        now_list.remove(i)
for j in now_list:
    if j%5 == 0:
        my_list.append(j)
            
print my_list
print sum(my_list)
 
#answer
print(sum(i for i in range(1000) if i%3 == 0 or i%5 == 0))
