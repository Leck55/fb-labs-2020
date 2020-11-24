import random, math, sys


k = random.getrandbits(256)
def Miller_Rabin(n, k):
    r = int(math.log(n, 2))
    if n == 2 or n == 3:
        return True

    if n % 2 == 0:
        return False

    power = 0
    t = n - 1
    while t % 2 == 0:
        t = t // 2
        power += 1
    for k in range(r):
        a = random.randint(2, n - 1)
        x = pow(a, t, n)
        i = 0
        if x == 1:
            continue
        elif x == n - 1:
            continue
        while i < power - 1:
            x = pow(x, 2, n)
            if x == n - 1: break
            i = i + 1
        else:
            return False
    return True

def Random_Generator() -> object:
    numb = int(random.getrandbits(256))
    return numb

def IsPrime(numb):
    if numb % 2 == 0 or numb % 3 == 0 or numb % 5 == 0 or numb % 7 == 0:
        return False
    else:
        return Miller_Rabin(numb)

def Key_Gen():
    p1 = Random_Generator()
    while IsPrime(p1)==False:
    p1 = Random_Generator()
        if IsPrime(p1) == True:
            break
    while IsPrime()
    q1 = Random_Generator()