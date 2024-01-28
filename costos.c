#include <stdio.h>
#include <stdlib.h>

struct OrdenTrabajo {
    char tipo_trabajo[50];
    float costo;
};

struct OrdenTrabajo ordenes_de_trabajo[100];
int num_ordenes = 0;
