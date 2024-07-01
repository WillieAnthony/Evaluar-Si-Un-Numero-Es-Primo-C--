// Codigo en lenguaje C++ solicita al usuario que ingrese un numero entero positivo, luego verifica si el numero es primo y muestra el resultado en pantalla.



#include <stdio.h>
#include <stdbool.h>


int main() {
    int num;
    bool es_primo = true;
    
    // Solicitar al usuario que ingrese un numero
    printf("Ingrese un Numero Entero Positivo: ");
    scanf("%d", &num);
    
    // Verificar si el numero es primo
    if (num <= 1) {
        es_primo = false;
    } else {
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                es_primo = false;
                break;
            }
        }
    }
    
    // Mostrar el resultado
    if (es_primo) {
        printf("\n\nEl Numero %d es Primo.\n\n\n\n\n", num);
    } else {
        printf("\n\nEl Numero %d NO es Primo.\n\n\n\n\n", num);
    }
    
    printf("30/06/2024\n");
    printf("David Salazar Gonzalez\n");
    printf("Willie Anthony");
    
    return 0;
}
