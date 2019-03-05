## Objetivo
Crer dos llamdas a sistema con sus respectivos comandos para apagar y reiniciar. 

## Herramientas 

* make
* gcc
* git

## Conceptos

1) Llamadas a sistema 
  + Se usan para acceder a hardware 
  + Desde el comando de software, son una interrupción 
  + Desde el Kernel utilizan el código del hw específico
  
2) Modo Kernel 
  + Es el bit para acceder al hardware
  + Se prende cuando se ejecuta el Kernel
  
3) Interrupciones 
  + Como el hw interactúa con el CPU

4) Interrupción via software (trap) 
  + Software comunicar con el Kernel, SF -> CPU -> KERNEL
  
 ## Qué aprendí
 
 Aprendí a utilizar llamadas al sistema para un sistema operativo como el que estamos utilizando. Además, aprendí que es necesario tener una interface entre la llamada al sistema y el usuario que consiste en código en c.
 
 ## Url del commit:

 https://github.com/aranzanflores/so-gp1/commit/5c3d751c181d7067147a2bc51e0da5e05983fb47
  
