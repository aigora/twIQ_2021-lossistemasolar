#include<stdio.h>
#define N 100
struct jugador{
	char nombre;
	int puntuacion;
};
int main() {
	int temaPrincipal, x;
	struct jugador lista[N];
	int opcion, n=1,i=0;
    printf("Bienvenido al programa para aprender sobre el sistema solar.\n");
do{
 	printf("¿Te sientes preparado para evaluar tus conocimientos o quieres aprender mas sobre el espacio?\n");
	 printf("Si sientes que necesitas saber mas sobre el universo antes de ponerte a prueba , escribe 1.\n");
 	printf("Si por el contrario consideras que ya estas preparado/a escribe 2.\n");
 	scanf("%d",&opcion);
 
 	
if (opcion == 1){
 		printf("- El Universo (U)\n");
 		printf("- El Sistema solar (S)\n");
 		printf("- La Tierra (T)\n");
 		printf("- La Luna (L)\n");
 		printf("- La conquista el espacio (C)\n");
 		printf("(RECORDATORIO: Introduce el caracter en mayuscula)\n");
 		fflush(stdin);
			scanf("%c", &temaPrincipal);
			switch (temaPrincipal) {
				case 'U':
					printf("El Universo.\n");
					
				break;
				case 'S':
					printf("El Sistema Solar.\n");
					
				break;
				case 'T':
					printf("La Tierra.\n");
					
				break;
				case 'L':
					printf("La Luna.\n");
					
				break;
				case 'C':
					printf("La conquista el espacio.\n");
					
				break;
			default:
				printf("\n");
			}    
	}
else if (opcion = 2) {
	printf("Bienvenido al mini juego de preguntas y respuestas sobre el sistema solar y el universo:\n");
	printf("Registrate:\n");
}
printf("¿Quieres continuar? Pulse 1 si quiere volver al menu de inicio. O 2 si quiere cerrar el programa.\n");
scanf("%d", &x);
}
while(x==1);
 	
printf("Fin del programa.\n");
	
return 0;

}
