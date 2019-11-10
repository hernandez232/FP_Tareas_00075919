n = int (input("Ingrese un numero: "))
print (" ")

if n == 1:
    print ("El fatorial del numero ingresado es:",1)
else:
    facto = 1
    for i in range (1,n+1):
        facto = int(facto*i)
    print ("El factorial del numero ingresado es: ",facto)
