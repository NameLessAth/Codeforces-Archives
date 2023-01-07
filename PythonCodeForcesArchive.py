'''
a = int(input(""))
b = int(input(""))
c = int(input(""))

prob1 = a+b+c
prob2 = a*b+c
prob3 = a+b*c
prob4 = a*b*c
prob5 = (a+b)*c
prob6 = a*(b+c)

prob = [prob1, prob2, prob3, prob4, prob5, prob6]
print(max(prob))



attempts = int(input(""))
for i in range(attempts):
    a,b = input("").split()
    a = int(a)
    b = int(b)
    if a >= b:
        if a % b == 0:
            c = 0
        else : 
            c = b - (a % b)
    elif a < b:
        c = b - a
    print(c)



repeatvalue = int(input(""))
for i in range (repeatvalue):
        a,b = input("").split()
        a = int(a)
        b = int(b)
        a = 60 * a
        c = a + b
        d = 1440 - c
        print(d)



a,b,c,d = input("").split()
a = int(a)
b = int(b)
c = int(c)
d = int(d)
lists = [a, b, c, d]
lists.sort()
e = lists[3]-lists[0]
f = lists[2]-lists[3]+lists[0]
g = lists[1]-lists[3]+lists[0]
listr = [e, f, g]
listr.sort()
print(listr[0], listr[1], listr[2])



n,k,l,c,d,p,nl,np = input("").split()
n = int(n)
k = int(k)
l = int(l)
c = int(c)
d = int(d)
p = int(p)
nl = int(nl)
np = int(np)

mlav = k * l
a = mlav // nl
b = c * d
aa = p // np
lists = [a, b, aa]
result = min(lists) // n
print(result)



a = [int(x) for x in input().split()]
summ = 0
for i in range (a[2]):
    summ += (i + 1)
a[0] *= summ
hoetang = a[0] - a[1]
if hoetang > 0:
    print(hoetang)
else:
    print(0)



repval = int(input(""))
for i in range(repval):
    a = [int(x) for x in input().split()]
    aa = max(a) - a[0]
    bb = max(a) - a[1]
    cc = max(a) - a[2]
    if (max(a) == a[0] and max(a) == a[1] and max(a) == a[2]) or (max(a) == a[0] and max(a) == a[1]) or (max(a) == a[0] and max(a) == a[2]) or (max(a) == a[1] and max(a) == a[2]):
        aa += 1
        bb += 1
        cc += 1
    else:
        if aa != 0:
            aa += 1
        if bb != 0:
            bb += 1
        if cc != 0:
            cc += 1
    print(aa, bb, cc)



manygroup = int(input(""))
a = [int(x) for x in input().split()]
a.sort()
taxicar = 0
for i in range (len(a)):
    if len(a) % 2 == 0:
        if 2*i < (len(a)):
            b = a[2*i] + a[2*i + 1]
            if b == 2:
                bb = b + a[2*i + 2]
                if bb == 3:
                    bbb = bb + a[2*i + 3]
                    if bbb == 4:
                        taxicar += 1
                        i += 2
                    else:
                        taxicar += 1
                        i += 1



a = [int(x) for x in input().split()]
b = (a[0] // a[2])
if a[0] % a[2] != 0:
    b += 1
c = (a[1] // a[2])
if a[1] % a[2] != 0:
    c += 1
d = b*c
print(d)
                    


repval = int(input(""))
for i in range (repval):
    a = input("")
    alist = list(a)
    if len(alist) > 10:
        print(alist[0] + str(len(alist)-2) + alist[len(alist)-1])
    else:
        print(a)


# Program dif 800, 231A - Team, #173017843
repval = int(input(""))
probans = 0
for i in range (repval):
    a = [int(x) for x in input().split()]
    b = sum(a)
    if b >= 2:
        probans += 1
print(probans)


# Program dif 800, 282A - Bit++, #173595181
repval = int(input(""))
x = 0
for i in range (repval):
    a = input("")
    if a == "X++" or a == "+X+" or a == "++X":
        x += 1
    elif a == "X--" or a == "-X-" or a == "--X":
        x -= 1
print(x)


# Program dif 800, 263A - Beautiful Matrix, #173643738
a = [int(x) for x in input().split()]
b = [int(x) for x in input().split()]
c = [int(x) for x in input().split()]
d = [int(x) for x in input().split()]
e = [int(x) for x in input().split()]
steplist = 0
if sum(a) != 0:
    if a[0] == 1 or a[4] == 1:
        steplist += 2
    elif a[1] == 1 or a[3] == 1:
        steplist += 1
    steplist += 2
if sum(b) != 0:
    if b[0] == 1 or b[4] == 1:
        steplist += 2
    elif b[1] == 1 or b[3] == 1:
        steplist += 1
    steplist += 1
if sum(c) != 0:
    if c[0] == 1 or c[4] == 1:
        steplist += 2
    elif c[1] == 1 or c[3] == 1:
        steplist += 1
if sum(d) != 0:
    if d[0] == 1 or d[4] == 1:
        steplist += 2
    elif d[1] == 1 or d[3] == 1:
        steplist += 1
    steplist += 1
if sum(e) != 0:
    if e[0] == 1 or e[4] == 1:
        steplist += 2
    elif e[1] == 1 or e[3] == 1:
        steplist += 1
    steplist += 2
print(steplist)

astr = input("")
lista = list(astr)
for i in range(len(lista)):
    if list[i] == "A" or "I" or "U" or "E" or "O" or "Y":
        lista.pop(i)
print(lista)


# Program dif 800, 281A - Word Capitalization, #173671838
capwannabe = input("")
caplist = list(capwannabe)
caplist[0] = caplist[0].capitalize()
print(''.join(caplist))


# Program dif 800, 236A - Boy or Girl, #173673236
name = str(input(""))
namlist = list(name)
namlist.sort()
indicatorsame = 0
for i in range (len(namlist)-1):
    if namlist[i] == namlist[i+1]:
        indicatorsame += 1
evenodd = len(namlist) - indicatorsame
if evenodd % 2 == 0:
    print("CHAT WITH HER!")
elif evenodd % 2 == 1:
    print("IGNORE HIM!")


# Program dif 800, 791A - Bear and Big Brother, #173674179
a = [int(x) for x in input().split()]
year = 0
while a[0] <= a[1]:
    a[0] *= 3
    a[1] *= 2
    year += 1
print(year)


# Program dif 800, 59A - Word, #173676381
a = input("")
lista = list(a)
capamount = 0 ; noncapamount = 0
for i in range(len(lista)):
    caplist = lista[i].capitalize()
    if lista[i] == caplist:
        capamount += 1
    elif lista[i] != caplist:
        noncapamount += 1
if capamount > noncapamount:
    print(a.upper())
else:
    print(a.lower())


# Program dif 800, 734A - Anton and Danik, #173704386
manystr = int(input(""))   
a = [str(x) for x in input()]
anton = 0
danik = 0
for i in range (manystr):
    if a[i] == "A":
        anton += 1
    elif a[i] == "D":
        danik += 1
if anton > danik:
    print("Anton")
elif danik > anton:
    print("Danik")
elif anton == danik:
    print("Friendship")


# Program dif 800, 41A - Translation, #173706607	
t = input("")
s = input("")
revt = t[::-1]
if revt == s:
    print("YES")
else:
    print("NO")


# Program dif 800, 977A - Wrong Subtraction, #173727742
a = [int(x) for x in input().split()]
for i in range(a[1]):
    if a[0] % 10 == 0:
        a[0] //= 10
    else:
        a[0] -= 1

print (a[0])


# Program dif 1000, 58A - Chat room, #173735504
a = input("")
alist = list(a)
indicatelist = ["h", "e", "l", "l", "o"]
j = 0
k = 0
for i in range(len(alist)):
    if alist[i] == indicatelist[j]:
        if j < 5:
            j += 1
            k += 1
        if j >= 5:
            j = 4
if k >= 5:
    print("YES")
else:
    print("NO") 


# Program dif 1200, 466A - Cheap Travel, #173762298
a = [int(x) for x in input().split()]
avgpromo = a[3] / a[1]
if avgpromo < a[2]:
    minpromo = a[0] // a[1]
    sisanormal = a[0] - (minpromo * a[1])
    hargapromo = minpromo * a[3]
    if a[3] >= sisanormal * a[2]:
        hargasisa = sisanormal * a[2]
        total = hargasisa + hargapromo
        print(total)
    elif a[3] < sisanormal * a[2]:
        hargapromo += a[3]
        print(hargapromo)
else:
    total = a[2] * a[0]
    print(total)


#Judul Program<GeometricSeries>
#deskripsi: menghitung series geometric serta error jika series gemetric konvergen

#kamus

#algoritma
#input
a = int(input("Nilai a: "))
r = float(input("Nilai r: "))
n = int(input("Nilai n: "))

#proses
if r<0:
    r2 = r-1
else:
    r2 = r
g = 0
for i in range (n+1):
    g += a*((r)**i)
if r2>=1:
    print(f"nilai g: {g}")
else:
    e = (a/(1-r))-g
    print(f"nilai g: {g} nilai e: {e}")




N = int(input("Masukkan N: "))
print("Faktor primanya adalah", end = ' ')
bilpertama = True
for i in range(1,N+1):
    if N % i == 0:
        if  i == 2:
            print(i, end='')
            bilpertama = False
        elif i >= 3:
            indicatoru = 0
            for j in range (2, i):
                if i % j != 0:
                    indicatoru += 1
                if indicatoru == (i-2):
                    if bilpertama == True:
                        print(i, end='')
                        bilpertama = False
                    else:
                        print(",", i, end='')
print(".")



a = input("")
a = list(a)
b = 0
o = ""
for i in range(len(a)):
    if b == 0:
        o += a[i]
        b += 1
    if a[i] == "-":
        b = 0
print(o) 



a = [int(x) for x in input().split()]
a.sort()
for i in range(len(a)):
    print(a[i], end=' ')
    


a = int(input(""))
sumall = 0
ppl = 0
for i in range(a):
    b = [int(x) for x in input().split()]
    for j in range(1, len(b)):
        sumall += b[j] 
    avg = sumall / (len(b) - 1)
    for k in range(1,len(b)):
        if b[k] > avg:
            ppl += 1
    perc = (((ppl/(len(b) - 1)) * 100)*1000)//1
    perc = list(perc)
    for l in range(len(perc)):
        if l == len(perc) - 3:
            print("," + str(i), end='')
        print(i, end='')
        


a = [int(x) for x in input().split()]
for i in range(1, a[2] + 1):
    b = ""
    if (i % a[0] == 0) or (i % a[1] == 0):
        if i % a[0] == 0:
            b += "Fizz"
        if i % a[1] == 0:
            b += "Buzz"
    else:
        b = i
    print(b)
    


L = int(input(""))
D = int(input(""))
X = int(input(""))
for i in range(L, D+1):
    i = str(i)
    listi = list(i)
    for j in range(len(listi)):
        listi[j] == int(listi[j])
    if len(listi) == 1:
        if listi[0] == X:
            print(i)
    else:
        if sum(listi) == X:
            print(i)
            


a = input("")
b = input("")
if len(a) > len(b):
    print("go")
else:
    print("no")
    


a = [int(x) for x in input().split()]
b = [int(y) for y in input().split()]
gunnar = sum(a)
emma = sum(b)
if gunnar > emma:
    print("Gunnar")
elif gunnar == emma:
    print("Tie")
else:
    print("Emma")



a = [int(x) for x in input().split()] ; a.sort()
order = input("")
listorder = list(order)
listo = []
for i in range(len(listorder)):
    if a[i] == "A":
        listo.append(i)
if listo[1] - listo[0] == a[1] - a[0]:
    if listorder[0] == "B" and listorder[1] == "B":
        if a[0] == 3:
            print("1 2")
        else:
            print("-1")
    elif 
    


a = input("")
a = a.upper()
lena = len(a) + 1
per = "PER"*lena
b = 0
for i in range(len(a)):
    if a[i] != per[i]:
        b += 1
print(b)



a = [str(x) for x in input().split()]
a[0] = (int(a[0]) * 4) ; count = 0
for i in range(a[0]):
    b = input("")
    if b[1] == a[1]:
        if b[0] == "A":
            count += 11
        elif b[0] == "K":
            count += 4
        elif b[0] == "Q":
            count += 3
        elif b[0] == "J":
            count += 20
        elif b[0] == "T":
            count += 10
        elif b[0] == "9":
            count += 14
    else:
        if b[0] == "A":
            count += 11
        elif b[0] == "K":
            count += 4
        elif b[0] == "Q":
            count += 3
        elif b[0] == "J":
            count += 2
        elif b[0] == "T":
            count += 10
print(count)



a = int(input()) ; d = 0
b = [int(x) for x in input().split()] ; c = len(b)
for i in range(len(b)):
    if b[i] == -1:
        c -= 1
    else:
        d += b[i]
e = d/c ; print(e)


# Program dif 800, 271A - Beautiful Year, #175516676	
a = int(input())
def NotDistinct(x):
    listx = list(str(x)) ; listx.sort()
    if len(listx) == 1:
        return True
    else:
        for i in range (len(listx)-1):
            if listx[i] == listx[i+1]:
                return False
        return True
while NotDistinct(a+1) == False:
    a += 1  
print(a + 1)



x = int(input("Masukkan X: "))
bil = 0
dig = 1
apel = 0.1
while apel%x != 0:
    bil += 1
    if bil == 10:
        bil = 1
        dig +=1
    apel = int(str(bil)*dig)

print(apel)


# Program dif 1300, 25A - IQ test, #175630222
line = int(input())
a = [int(x) for x in input().split()]
genapcount = 0
ganjilcount = 0
def genap(x):
    if x % 2 == 0:
        return True
    else:
        return False
for i in range(len(a)):
    if genap(a[i]):
        genapcount += 1
    else:
        ganjilcount += 1
if genapcount == 1:
    for j in range(len(a)):
        if genap(a[j]):
            print(j + 1)
else:
    for j in range(len(a)):
        if genap(a[j]) == False:
            print(j + 1)        



kamar = int(input("Masukkan nomor kamar: "))
kamaroriginal = kamar
while kamar >= 10:
    sumdig = 0
    j = -1
    for i in str(kamar):
        j += 1
        sumdig += (kamar//(10**j))%10
    kamar = sumdig
print(f"Kamar {kamaroriginal} akan termasuk ke dalam ruang makan {kamar}.")



N = list(input("Masukkan bilangan N: "))
a = [int(x) for x in input().split()]
a.sort() ; sameindicator = 0
for i in range(len(a) - 1):
    if a[i] == a[i+1]:
        sameindicator += 1
if sameindicator == 0:
    print("Berbeda semua")
else:
    print("Tidak berbeda semua")
    


PanjangAngkaPertamaa = int(input("Panjang kata pertama: "))
KataPertama = list(input("Kata pertama: "))
PanjangKataKedua = int(input("Panjang kata kedua: "))
KataKedua = list(input("Kata kedua: "))
JadinyaGini = ""
JadinyaGiniIndicator = 0
for i in range(PanjangKataKedua):
    KataKeduaYangDiotakAtik = ""
    for j in range(len(KataKedua)-i):
        KataKeduaYangDiotakAtik += KataKedua[j]
    for k in range(len(KataPertama)):
        KataPertamaYangDiotakAtik = ""
        for l in range(k, len(KataPertama)):
            KataPertamaYangDiotakAtik += KataPertama[l]
        if KataPertamaYangDiotakAtik == KataKeduaYangDiotakAtik:
            if JadinyaGiniIndicator == 0:
                JadinyaGini += KataPertamaYangDiotakAtik
                JadinyaGiniIndicator += 1
print(JadinyaGini)



a = [int(x) for x in input().split()]
a[0] -= 2
a[1] -= 2
panjang = a[0] // a[2]
lebar = a[1] // a[3]
if panjang*lebar >= 0:
    a = 1
else :
    a = 0
print(a)

x,y = map(int, input().split())
if y % 2 != 0:
    print("impossible")
else:
    print("possible")



a = list(input(""))
b = list(input(""))
kata = ""
for i in range(0,len(b),3):
    y = f"{b[i]}{b[i+1]}{b[i+2]}" ; y = int(y)
    kata += str(a[y-1])
print(kata)


repval = int(input())
for i in range(repval):
    importedturtle = 0
    a = [int(x) for x in input().split()]    
    for i in range(len(a)-1, 0, -1):
        if a[i] > 2*a[i-1]:
            importedturtle += a[i] - 2*a[i-1]
    print(importedturtle)



a = [int(x) for x in input().split()]
for i in range(len(a)):
    if i == 0:
        max = a[i]
        min = a[i]
    else:
        if a[i] > max:
            max = a[i]
        if a[i] < min:
            min = a[i]
b = len(a)
c = [0 for a in range(len(a))]
d = 0
while min != max:
    for i in range(len(a)):
        if min <= a[i] < min + 1:
            c[d] = a[i]
            d += 1
    min += 1
c[len(a) - 1] = max
print(c)



a = [int(x) for x in input().split()]
b = [int(x) for x in input().split()]
sama = True
if len(a) == len(b):
    for i in range(len(a)):
        if a[i] != b[i]:
            sama = False
else:
    sama = False
if sama:
    print("sama")
else:
    print("ngga")


def f(x):
    y = x**4 + 3*(x**3) + 5*(x**2) + x + 8 ; return y
a = int(input()) ; b = int(input()) ; n = int(input()) ; h = (b-a)/n ; SumOf_fi = 0
for i in range(1, n):
    SumOf_fi += f(a+(h*i))
luas = (h/2)*(f(a)+2*SumOf_fi+f(b)) ; print(luas)



def lucky(x):
    for i in str(x):
        if int(i) != 4 and int(i) != 7:
            return False
    return True
n = int(input()) ; luckydig = 0
for i in str(n):
    if i == "4" or i == "7":
        luckydig += 1
if lucky(luckydig):
    print("YES")
else:
    print("NO")



def lucky(x):
    for i in str(x):
        if int(i) != 4 and int(i) != 7:
            return False
    return True
n = int(input()) ; luckyy = False
for i in range(1, n+1):
    if n % i == 0:
        if lucky(i):
            luckyy = True
if luckyy == True:
    print("YES")
else:
    print("NO")



num = int(input("Masukkan sebuah bilangan: "))
dig1 = num//1000
dig2 = ((num//100)%10)
dig3 = ((num//10)%10)
dig4 = num%10
sumofdig = dig1+dig2+dig3+dig4
if (dig1 != 0 and dig2 != 0 and dig3 != 0 and dig4 != 0):
    if (sumofdig%dig1==0 and sumofdig%dig2==0 and sumofdig%dig3==0 and sumofdig%dig4==0):
        print("Bilangan tersebut adalah bilangan Bravo.")
else:
    print("Bilangan tersebut adalah bilangan biasa.")


akumulasi = int(input("Masukkan total akumulasi belanja (dalam juta): "))
frekuensi = int(input("Masukkan frekuensi belanja: "))
kategori = int(input("Masukkan kategori yang diinginkan: ")) ; diingkan = False
if kategori == 1:
    if (akumulasi<=10 and frekuensi<=15):
        diingkan = True
elif kategori == 2:
    if (akumulasi>10 and frekuensi<=15) or (akumulasi<=10 and frekuensi>3):
        diingkan = True
elif kategori == 3:
    if (akumulasi>10 and frekuensi<=15) or (akumulasi>10 and akumulasi<=20 and frekuensi>15):
        diingkan = True
elif kategori == 4:
    if (akumulasi>10 and frekuensi<=15):
        diingkan = True
else:
    if not((akumulasi<=10 and frekuensi<=15) or (akumulasi>10 and frekuensi<=15) or (akumulasi<=10 and frekuensi>3) or (akumulasi>10 and akumulasi<=20 and frekuensi>15)):
        diingkan = True
if diingkan:
    print("Tuan Leo berkesempatan mendapatkan kategori yang diinginkan.")
else:
    print("Tuan Leo tidak akan mendapatkan kategori yang diinginkan.")
'''
