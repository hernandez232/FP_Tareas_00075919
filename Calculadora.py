n = int (input("Ingrese un numero: "))
n2 = int (input("Ingrese un numero: "))

print (" ")
print ("Ingrese el numero de la izquierda acorde a la operacion que desea realizar", " ")
print ("1. Suma", " ")
print ("2. Resta", " ")
print ("3. Multiplicación", " ") 
print ("4. División", " ")
print (" ")
operacion = int (input("Respuesta: "))

if operacion == 1:
    suma = n+n2
    print (" ")
    print ("La suma de los numeros ingresados es:",suma)
elif operacion == 2:
    resta = n-n2
    print (" ")
    print ("La resta de los numeros ingresados es:",resta)
elif operacion == 3:
    multi = n*n2
    print (" ")
    print ("La multiplicación de los numeros ingresados es:",multi)
elif operacion == 4:
    div = (n/n2)
    print (" ")
    print ("La división de los numeros ingresados es:",div)
else: print ("valor ingresado incorrecto")