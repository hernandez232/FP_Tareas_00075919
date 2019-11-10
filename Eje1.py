import time
import datetime
x = datetime.datetime.now()
print("Elija un numero del 0 al 3")
var=int(input())
if var == 1:
 print("1 - La hora es")
 print(time.strftime("%H:%M:%S"))
elif var == 2:
 print("2 - La fecha")
 print (time.strftime("%d/%m/%y"))
elif var == 3:
 print("3 - El mes")
 print("Mes = %s" %x.month)
else:
 print("4 - la fecha de hoy es")
 print("Formato dd/mm/yyyy = %s/%s/%s" % (x.day, x.month, x.year) )