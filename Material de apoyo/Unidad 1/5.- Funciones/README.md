# 1) Funciones
Las funciónes son bloques de código que realizan labores definidas por el usuario, estas pueden ejecutar acciones en base a parametros que el usuario
puede ingresar en ellos o simplemente hacer algo en específico sin más.

La estructura de una función es:

```c
#include <stdio.h>

void suma(Parametros a recibir o no){
  // Acción a ejecutar sin retorno
};

int main(Parametros a recibir o no){
  // Acción a ejecutar con retorno
  return "Alguna valor o variable"
};
```

## 1.1) Tipos de funciónes:
* **Funciones con retorno:** Estas funciones, como int, float, etc., permiten almacenar los valores resultantes de las acciones realizadas.
* **Funciones sin retorno (void):** Estas funciones solo ejecutan acciones pero no guardan los resultados en ninguna variable.

## 1.2) Ejemplos en código (Sin retorno)

```c
#include <stdio.h>

void suma(int a, int b){
    printf("La suma de %d y %d es: %d", a,b,a+b);
};

int main(){
    int x,y;
    x = 5;
    y = 4;
    suma(x,y);
    return 0;
}
```

Sálida del código:

```
La suma de 5 y 4 es: 9
```

Otro ejemplo: 

```c
#include <stdio.h>

void multiplicacion(int a, int b){
    printf("La multiplicacion de %d y %d es: %d", a,b,a*b);
};

int main(){
    int x,y;
    x = 5;
    y = 4;
    multiplicacion(x,y);
    return 0;
}
```

```
La multiplicacion de 5 y 4 es: 20
```

## 1.3) Ejemplos en código (Con retorno)

```c
#include <stdio.h>

int suma(int a, int b){
    return a+b;
};

int main(){
    int x,y;
    x = 5;
    y = 4;
    int resultado = suma(x,y);
    printf("La suma entre %d y %d es: %d", x,y,resultado);
    return 0;
}
```

Sálida del código:

```
La suma entre 5 y 4 es: 9
```

Otro ejemplo: 

```c
#include <stdio.h>

int multiplicacion(int a, int b){
    return a*b;
};

int main(){
    int x,y;
    x = 5;
    y = 4;
    int resultado = multiplicacion(x,y);
    printf("La multiplicacion entre %d y %d es: %d", x,y,resultado);
    return 0;
}
```

Sálida del código:

```
La multiplicacion entre 5 y 4 es: 20
```


