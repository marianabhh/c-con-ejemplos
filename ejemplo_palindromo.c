#include <stdio.h>

// Función que invierte un número
int invertir_numero(int num) {
    int invertido = 0;
    while (num > 0) {
        invertido = invertido * 10 + num % 10;
        num /= 10;
    }
    return invertido;
}

// Función que verifica si es palíndromo
int es_palindromo(int num) {
    return num == invertir_numero(num);
}

int main() {
    int numero;
    
    printf("Verificador de Palíndromos\n");
    printf("Ingrese un número positivo: ");
    scanf("%d", &numero);
    
    if (es_palindromo(numero)) {
        printf("\n%d es un palíndromo! :)\n", numero);
    } else {
        printf("\n%d no es palíndromo :(\n", numero);
    }
    
    return 0;
}
