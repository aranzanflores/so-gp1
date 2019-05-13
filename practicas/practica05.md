# Objetivo
Hacer un spike sobre hilos, semáforos y locks. 
# Herramientas
+ git
+ gcc

# Conceptos:

+ Hilos
   + Es un proceso ligero que solo consta de un stack. Y el código y el heap los comparte con el proceso principal.
   + Pueden ejecutar funciones diferentes.
   
+ Semáforos:
   + Es una variable global.
   + Soporta dos operaciones.
    ++ Incrementar (sem_post) siempre incrementa en uno.
    ++ Decrementar (sem_wait) si el valor del semáforo es mayor que 0 decremente si es igual a cero se suspende
   + Controlar acceso a recursos.
    
+ Lock.
    + Es una variable global.
    + Soporta dos operaciones.
      ++ lock (bloqueo) adquirir el lock. Si el lock ya está tomando el hilo/proceso se suspende.
      ++ unlock (desbloquera) liberar el lock.
    + Secciones críticas.
    
# ¿Que aprendí?


Aprendí que no todos los hilos pueden tener acceso al recurso de sistema al mismo tiempo, por esto compiten por los recursosde distintas maneras. 



# Url del commit
https://github.com/aranzanflores/so-gp1/commit/bbd09201295d177a7064941d1b495a6a3bf231e8
