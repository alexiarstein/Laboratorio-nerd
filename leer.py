#!/bin/python3
#--------------------------------------------
# Autora: Alexia Rivera Steinberg <lachicadesistemas@gmail.com>
# Para mi laboratorio nerd.
# Licencia: GNU GPL 3.0
# Descargar SOLO desde mi github www.github.com/alexiarstein
# -------------------------------------------

import sys
#Chequeamos si se asigno un archivo por param.
if len(sys.argv) != 2:
    print("Uso: leer.py <texto>")
    sys.exit(1)

# en caso de que si, lo imprimimos en pantalla.
with open(sys.argv[1], 'r') as f:
    print(f.read())
