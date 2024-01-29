#include <stdio.h>

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
    for (int i = 0; i < cantidad_ordenes; ++i) 
    {
        struct OrdenTrabajo orden;
        printf("\nOrden de trabajo #%d\n", i + 1);
        printf("Ingrese el tipo de trabajo: ");
        scanf("%s", orden.tipo_trabajo);

        printf("Ingrese el costo: ");
        scanf("%f", &orden.costo);

        ordenes_de_trabajo[num_ordenes++] = orden;
        costo_total += orden.costo;
    }
    printf("\nListado de ordenes de trabajo:\n");
    for (int i = 0; i < num_ordenes; ++i) {
        printf("%s: $%.2f\n", ordenes_de_trabajo[i].tipo_trabajo, ordenes_de_trabajo[i].costo);
    }
    printf("\nCosto total de las ordenes: $%.2f\n", costo_total);
    
    return 0;
}
