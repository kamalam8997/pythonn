Num = int(input("Please Enter any Number: "))
Rev = 0
while(Num > 0):
    Rem = Num %10
    Rev = (Rev *10) + Rem
    Num = Num //10
 
print("\n Reverse of entered number is = %d" %Rev)
