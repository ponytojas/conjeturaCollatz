'''Importamos la función de la serie del fichero funciones.py'''
import funciones as fun

print("Numero natural de empiezo de la serie")
try:
    num = int(input())
    fun.serie(num)
except ValueError as e:
    print("No has introducido un valor adecuado")

