n = int (input("Ingrese un numero: "))
print (" ")

if n == 1:
    print ("El fatorial del numero ingresado es:",n)
else:
    i = n-1
    facto = n
    while (i>=1):
        facto = facto*i
        i = i-1
    print ("El factorial del numero ingresado es: ",facto)
