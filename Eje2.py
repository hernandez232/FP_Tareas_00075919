import os

def menu():
    """
    Función que limpia la pantalla y muestra nuevamente el menu
    """
    os.system('clear') # NOTA para windows tienes que cambiar clear por cls
    print("Menú en python")
    print("Selecciona una opción")
    print("\t1 - primera opción")
    print("\t2 - segunda opción")
    print("\t3 - tercera opción")
    print("\t9 - salir")

def pelicula():
    """ para presentar peliculas """
    print("La pelicula de hoy es:" )
    comida()



def comida():
 """ funcion para comidas"""
 print("quiere comida el combo cuesta $4.50" )

while True:
    # Mostramos el menu
    menu()
    # solicituamos una opción al usuario
    opcionMenu = input("inserta un numero valor >> ")

if opcionMenu=="1":
    print("")
    input("Has pulsado la opción 1...\npulsa una tecla para continuar")
elif opcionMenu=="2":
    print("")
    pelicula()
    input("Has pulsado la opción 2...\npulsa una tecla para continuar")
elif opcionMenu=="3":
    print("")
    input("Has pulsado la opción 3...\npulsa una tecla para continuar")
elif opcionMenu=="9":
    break
else:
    print("")
    input("No has pulsado ninguna opción correcta...\npulsa una tecla para continuar")