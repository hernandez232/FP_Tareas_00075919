print ("¡Bienvenido!")
usuario = input ("Ingrese su usuario: ")
contra = 0
intentos = 1

while (contra != "Hola999" and intentos <= 5):
    contra = input ("Ingrese la contraseña: ")

    if contra == "Hola999":
        intentos = 6
        print (" ")
        print ("¡Contraseña correcta!")

    if intentos == 1 or intentos == 2 or intentos == 3:
        print (" ")
        print ("Error de credendiales")
        print (" ")
    if intentos == 4:
        print (" ")
        print ("Su conexion no es la adecuada")
        print (" ")
    if intentos == 5:
        print (" ")
        print ("Su cuenta no existe")
        print (" ")
    intentos = intentos + 1