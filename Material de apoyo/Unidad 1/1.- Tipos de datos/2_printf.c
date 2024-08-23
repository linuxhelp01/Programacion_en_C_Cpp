#include <stdio.h>

/*
    Ya sabemos que existen varios tipos de datos en el lenguaje C, pero una cosa importante es saber que existen
    y otra también bastante importante es poder desplegar estos valores en la terminal y así poder realizar 
    corroboraciones de los datos o simplemente un seguimiento de que esté todo como debería.
*/

int main(){
    // Tomemos de ejemplo los tipos de datos: int, float, char y una cadena de chars
    int entero = 4;
    float decimal = 4.15;
    char letra = 'A';
    char cadena[] = "Hola que tal todo";

    /* Con nuestras variables listas, para poder verlas en la terminal tenemos que utilizar la función  
    |
    |---> printf() 
    
    La sintaxis de esta función es la siguiente: 
    |-> printf( "%d, %f, %s, %c", nombre de la variable ); 

    Si te diste cuenta, introduje un % seguido de una letra (d, f, s, c, etc.), estas letras no están por qué sí
    sino que sirven para indicar al programa en qué parte del texto ingresar la variable dentro del printf 
    a la par que define el tipo de dato que vamos a desplegar. 

    La correspondencia de las letras sería la siguiente:
    |-> %d : Tipo de dato entero
    |-> %s : Tipo de dato cadena de caracteres
    |-> %f : Tipo de dato flotante 
    |-> %c : Tipo de dato char
    */
    
    printf("Este es un dato del tipo entero: %d\n", entero);
    printf("Este es un dato del tipo flotante: %f\n", decimal);
    printf("Este es un dato del tipo char: %c\n", letra);
    printf("Este es un dato del tipo cadena de caracteres: %s\n", cadena);

    // También puedes notar que agregué "\n" al final de cada printf, esto es para marcar un salto de línea
    // así evitamos que se imprima todo junto entre un printf y el otro.
    
    return 0;
}

