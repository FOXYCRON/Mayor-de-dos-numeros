/* Programa que pide datos por pantalla y los despliega posteriormente */
#include<stdio.h>
#include<conio.h>

char nom[30];
int sem;
char gpo;
char prom;

main()
 {

 		printf("DATOS GENERALES DE ALUMNOS \n \n");
      printf("Dame el nombre: "); scanf("%s", &nom);
      printf("Dame el semestre: "); scanf("%d", &sem);
      printf("Dame el grupo: "); scanf("%c", &gpo);
      printf("Dame el promedio: "); scanf("%f", &prom);
      printf("\n Autor: Irvin Adrian");

      printf("\n \n DESPLIEGUE DE DATOS CAPTURADOS");
      prinft("\n El nombre del alumno es: %s", nom); fflush(stdin);
      prinft("\n El semestre del alumno es: %d", sem); fflush(stdin);
      prinft("\n El grupo del alumno es: %c", gpo);
      prinft("\n El promedio del alumno es: %f", prom);

  getch();
 }
