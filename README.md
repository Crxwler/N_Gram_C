# N_Gram_C



This project has been developed using C++ programming language using OOP. Its an application that solves N-gram from a text.  



Compile:   
g++ main.cpp Ngram.cpp File.cpp -o app




# Task 1. Roberto Higuera
clase archivo, recibe el nombre del archivo, verifica si existe, sino lo vuelve a pedir, o usa un archivo precargado del "sistema".
también es como regresara el texto que se ocupará para el n- gram, si por cada linea de texto, o por cada palabra

## Anotaciones
1. Mandar como paráemtro un vector de tipo string que va ser como tipo puntero, entonces todas las modificaciones  se ven reflejadas para regresar todas las palabras   (ELEGIDA)
2. Una función dentro de file, que nos regrese palabra por palabra (50/50 ?) 

# Task 2. Juan Jose Nava
Manejo del menu, para el n-gram, top 10-15-20 etc que se ocupará 

# Task 3. Juan Carlos Monreal 

Manejo del texto  para hacer los n - grams 

##Anotaciones 

1. Conforme se estan generando los n-grams se estan guardando en un vector, y al sacar el siguiente n-gram se comprueba el vector para no volverlo a generar y si existe se agrega a su frecuencia