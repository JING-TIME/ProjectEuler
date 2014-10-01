def eratosthenes2(n):
    prime_list = []
    multiples = set()
    for i in range(2, n+1):
        if i not in multiples:
            prime_list.append(i)
            multiples.update(range(i*i, n+1, i))
    return prime_list

print (sum(eratosthenes2(2000000)))
