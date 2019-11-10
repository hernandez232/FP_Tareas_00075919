print ("¡Bienvenido!")
print ("Ingrese el numero de la izquierda acorde a la opción que desea")
print ("1. Desayuno", " ")
print ("2. Almerzo", " ")
print ("3. Cena", " ")
print ("4. Postres", " ")
print ("5. Antojos", " ")
print ("6. Salir", " ")
print (" ")
eleccion = int(input("Respuesta: "))
print (" ")

if eleccion == 1:
    print ("Las opciones de desayuno son las siguientes: ", " ")
    print ("1. Pupusas", " ")
    print ("2. Huevos con frijoles", " ") 
    print ("3. Hot Cakes", " ")
    print (" ")
    comida = int(input("Respuesta: "))
    print (" ")
    if comida == 1:
        print ("Su orden es: Pupusas")
    elif comida ==2:
        print ("Su orden es: Huevos con frijoles")
    elif comida ==3:
        print ("Su orden es: Hot Cakes")
    else: print ("Valor ingresado incorrecto")

elif eleccion == 2:
    print ("Las opciones de almuerzo son las siguientes: ", " ")
    print ("1. Carne asada", " ")
    print ("2. Sopa de pollo", " ") 
    print ("3. Lonja empanizada", " ")
    print (" ")
    comida2 = int(input("Respuesta: "))
    print (" ")
    if comida2 == 1:
        print ("Su orden es: Carne asada")
    elif comida2 ==2:
        print ("Su orden es: Sopa de pollo")
    elif comida2 ==3:
        print ("Su orden es: Lonja empanizada")
    else: print ("Valor ingresado incorrecto")

elif eleccion == 3:
    print ("Las opciones de cena son las siguientes: ", " ")
    print ("1. Platanos con frijoles molidos", " ")
    print ("2. Sushi", " ") 
    print ("3. Pupusas", " ")
    print (" ")
    comida3 = int(input("Respuesta: "))
    print (" ")
    if comida3 == 1:
        print ("Su orden es: Platanos con frijoles molidos")
    elif comida3 ==2:
        print ("Su orden es: sushi")
    elif comida3 ==3:
        print ("Su orden es: Pupusas")
    else: print ("Valor ingresado incorrecto")

elif eleccion == 4:
    print ("Las opciones de postres son las siguientes: ", " ")
    print ("1. Chessecake", " ")
    print ("2. Tres leches", " ") 
    print ("3. Postre de la casa", " ")
    print (" ")
    comida4 = int(input("Respuesta: "))
    print (" ")
    if comida4 == 1:
        print ("Su orden es: Chessecake")
    elif comida4 ==2:
        print ("Su orden es: Tres leches")
    elif comida4 ==3:
        print ("Su orden es: Portre de la casa")
    else: print ("Valor ingresado incorrecto")

elif eleccion == 5:
    print ("Las opciones de antojos son las siguientes: ", " ")
    print ("1. Alfajores", " ")
    print ("2. Dulcede leche", " ") 
    print ("3. Te Chai", " ")
    print (" ")
    comida5 = int(input("Respuesta: "))
    print (" ")
    if comida5 == 1:
        print ("Su orden es: Alfajores")
    elif comida5 ==2:
        print ("Su orden es: Dulce de leche")
    elif comida5 ==3:
        print ("Su orden")
    else: print ("Valor ingresado incorrecto")
elif eleccion == 6:
    print ("Programa finalizado")
else: print ("Valor ingresado incorreccto")
