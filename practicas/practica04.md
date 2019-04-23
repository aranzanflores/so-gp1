# Objetivo 

Hacer un solo spike sobre IPC: señales, fork/exec, memoria compartida y archivos mapeados a memoria. 

#Herramientas 
+ git 
+ gcc

#Conceptos:

+ IPC
  + Comunicacion entre procesos. 
  
+ Señales:
 + Es un ipc, consta de un proceso emisor y un receptor.
 El emisor manda una señal y el receptor deja de hacer lo que está haciendo y ejecuta el código de la señal. 
 + Existen varias señales, para listarlas puedo usar el comando kill -1.
 
+ Memoria compartida :
  + Se crea un bloque de memoria, el bloque de memoria tiene un key. 
  + Cualquier proceso con el ey se puede conectar al bloque. 
  + El bloque de memoria persiste hasta que se borre mediante un comando o se reinicie la computadora.

+ Archivos mapeados a memoria":
  + Es un bloque de memoria compartida que está asociado a un archivo. 
  + Los cambios en el bloque se guardan automáticamente.
  
# Qué aprendi 

# Url del commit

https://github.com/aranzanflores/so-gp1/commit/56d038d75073ae652097aa81c270ce34f8db40dc
