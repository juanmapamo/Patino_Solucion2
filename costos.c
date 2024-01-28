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

    printf("Ingrese la cantidad de ordenes de trabajo: ");
    scanf("%d", &cantidad_ordenes);

    if (cantidad_ordenes <= 0 || cantidad_ordenes > 100) {
        printf("La cantidad de ordenes debe estar entre 1 y 100.\n");
        return 1; 
    }
    float costo_total = 0.0;
    for (int i = 0; i < cantidad_ordenes; ++i) {
        struct OrdenTrabajo orden;
    return 0;
}
