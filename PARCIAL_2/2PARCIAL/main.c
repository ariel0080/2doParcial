#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "eEmpleado.h"
#include "funciones.h"

void LP(void);

int main()
{


    ArrayList* lEmpleados;
    ArrayList* lEmpleados_copia;
    FILE *fEmpleados;
    eEmpleado *aux;

    int seguir=1;
    int opcion;
    int fparce;
    int fsort;

    lEmpleados=al_newArrayList();

    while(seguir==1)
    {

        printf("\n-------------------------------\n");
        printf("-- MENU PARCIAL --\n");
        printf("-------------------------------\n");
        printf(" 1. Leer archivo data.csv\n");
        printf(" 2. Listar Empleados\n");
        printf(" 3. Ordenar por nombre\n");
        printf(" 4. Calcular Sueldo\n");
        printf(" 5. Generar archivo sueldos\n");
        printf(" 0. Salir");
        printf("\n-----------------------------\n\t Ingrese la Opcion: ");
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:

            fparce=parsereEmpleado(fEmpleados, lEmpleados);
            if (fparce==0)
            {
                printf("\n COPIA EXITOSA\n");
                lEmpleados_copia=al_clone(lEmpleados);


            }
            else
            {
                printf("\n no se pudo copiar el archivo\n");
            }
            LP();
            break;
        case 2:

            if(lEmpleados_copia!=NULL)
            {
                printf("elementos: %d\n", al_len(lEmpleados_copia));
                m_empleado(lEmpleados_copia);
            }


            LP();
            break;
        case 3:
            if(lEmpleados_copia!=NULL)
            {
                printf("-------------Ordenar por nombre\n\n");
                fsort=al_sort(lEmpleados_copia,compareeEmpleado,1);
            }


            if(fsort==0)
            {
               m_empleado(lEmpleados_copia);
            }

            LP();
            break;
        case 4:

            lEmpleados_copia->map(lEmpleados_copia,calc_suel_Empleado);
            printf("elementos: %d\n", al_len(lEmpleados_copia));
            m_empleado_sueldo(lEmpleados_copia);
            LP();
            break;
        case 5:
            guardarArchivo(lEmpleados_copia);
            LP();
            break;
        case 0:
            printf("elementos: %d", al_len(lEmpleados_copia));
            seguir=0;
            LP();
            break;
        }
    }




    return 0;
}









void LP (void)
{
    printf("\n");
    system ("pause");
    system ("cls");
}
