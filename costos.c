#include <stdio.h>
#include <stdlib.h>

struct OrdenTrabajo {
    char tipo_trabajo[50];
    float costo;
};

struct OrdenTrabajo ordenes_de_trabajo[100];
int num_ordenes = 0;

int main(int argc, char const *argv[])
{
    int cantidad_ordenes;

    // Solicitar al usuario la cantidad de órdenes de trabajo
    printf("Ingrese la cantidad de ordenes de trabajo: ");
    scanf("%d", &cantidad_ordenes);

    // Verificar que la cantidad ingresada sea válida
    if (cantidad_ordenes <= 0 || cantidad_ordenes > 100) {
        printf("La cantidad de ordenes debe estar entre 1 y 100.\n");
        return 1; 
    }
    return 0;
}
