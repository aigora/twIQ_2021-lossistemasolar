#include<stdio.h>
#define N 100
struct jugador{
	char nombre;
	int puntuacion;
};
int main() {
	int  x;
	char temaPrincipal, temaSecundario, temaSecundario1 ;
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
					printf("El Universo:\n");
					printf("Definicion .\n");
					printf("El universo es enorme, hemos seleccionado los temas mas interesantes,\n");
					printf(" Escoje uno entre los siguientes:\n");					
					printf("-Las Galaxias.  (G)\n");
 		            printf("-El nacimiento del Sol.  (S)\n");
 		            printf("-La formacion de los planetas.  (P)\n");
 		            printf("(RECORDATORIO: Introduce el caracter en mayuscula)\n");
 		            fflush(stdin);
 		            scanf("%c", &temaSecundario);
					switch (temaSecundario){
				        case 'G':
					        printf("Las Galaxias:\n");
					
				        break;
				        case 'S':
					        printf("El nacimiento del Sol:\n");
					
				        break;
				        case 'P':
				 	        printf("La formacion de los planetas:\n");
					
				        break;
			            default:
				            printf("\n");
			        }    
				break;
				case 'S':
					printf("El Sistema Solar.\n");
					printf("Definicion .\n");
					printf("El Sistema solar es muy grande, hemos seleccionado los temas mas interesantes,\n");
					printf(" Escoje uno entre los siguientes:\n");					
					printf("-Observando el cielo.  (C)\n");
 		            printf("-Observando las estrellas.  (E)\n");
 		            printf("-Nuestra estrella el Sol.  (S)\n");
 		            printf("-Los planetas.  (P)\n");
 		            printf("(RECORDATORIO: Introduce el caracter en mayuscula)\n");
 		            fflush(stdin);
 		            scanf("%c", &temaSecundario);
					switch (temaSecundario){
				        case 'C':
					        printf("Observando el cielo:\n");
					
				        break;
				        case 'E':
					        printf("Observando las estrellas:\n");
					
				        break;
				        case 'S':
				 	        printf("Nuestra estrella el Sol:\n");
					
				        break;
				        case 'P':
				 	        printf("Los planetas y demas cuerpos estelares:\n");
					        printf(" Escoje uno entre los siguientes:\n");					
					        printf("-Mercurio.  (M)\n");
 		                    printf("-Venus.  (V)\n");
 		                    printf("-La Tierra.  (T)\n");
 		                    printf("-Marte.  (R)\n");
 		                    printf("-Jupiter.  (J)\n");
 		                    printf("-Saturno.  (S)\n");
 		                    printf("-Urano y neptuno.  (U)\n");
 		                    printf("-Asteroides.  (A)\n");
 		                    printf("-Metioritos. (E)\n");
 		                    printf("-Cometas.  (C)\n");
 		                    printf("(RECORDATORIO: Introduce el caracter en mayuscula)\n");
 		                    fflush(stdin);
 		                    scanf("%c", &temaSecundario1);
					        switch (temaSecundario1){
					        	case 'M':
					                printf("Mercurio:\n");
					
				                break;
				                case 'V':
					                printf("Venus:\n");
					
				                break;
				                case 'T':
				 	                printf("La Tierra:\n");
					
				                break;
				                case 'R':
				 	                printf("Marte:\n");
					
				                break;
				                case 'J':
				 	                printf("Jupiter:\n");
					
				                break;
				                case 'S':
				 	                printf("Saturno:\n");
					
				                break;
				                case 'U':
				 	                printf("Urano y Neptuno:\n");
					
				                break;
				                case 'A':
				 	                printf("Asteroides:\n");
					
				                break;
				                case 'E':
				 	                printf("Metioritos:\n");
					
				                break;
				                case 'C':
				 	                printf("Cometas:\n");
					
				                break;
				                default:
				                    printf("\n");
							}
				        break;
			            default:
				            printf("\n");
			        }     
				break;
				case 'T':
					printf("La Tierra.\n");
					
				break;
				case 'L':
					printf("La Luna.\n");
					printf("Definicion.\n");
					    printf(" Escoje uno entre los siguientes temas sobre la Luna:\n");					
					        printf("-La Luna satelite de la Tierra.  (L)\n");
 		                    printf("-Superficie.  (S)\n");
 		                    printf("-Caras de la Luna.  (C)\n");
 		                    printf("-Curiosidades.  (U)\n");
 		                    printf("(RECORDATORIO: Introduce el caracter en mayuscula)\n");
 		                    fflush(stdin);
 		                    scanf("%c", &temaSecundario1);
							switch (temaSecundario1){
						
					        	case 'L':
					                printf("La Luna satelite de la Tierra:\n");
					
				                break;
				                case 'S':
					                printf("Superficie:\n");
					
				                break;
				                case 'C':
				 	                printf("Caras de la Luna:\n");
					
				                break;
				                case 'U':
				 	                printf("Curiosidades:\n");
					
				                break;				                
				                default:
				                    printf("\n");
							}		                          		                    		                  	                    
				break;
				case 'C':
					printf("La conquista el espacio:\n");
					printf("Con este titulo tan sorprendente nos referimos al comienzo  \n");
					printf("de la exploracion espacial por parte de la especie humana.\n");
					printf(" Escoje uno entre los siguientes temas sobre la conquista el espacio:\n");					
					        printf("-El origen de la conquista espacial.  (C)\n");
 		                    printf("-Objetivo: la Luna.  (O)\n");
 		                    printf("-La estacion espacial internacional.  (E)\n");
 		                    printf("-Un proyecto de base lunar.  (B)\n");
 		                    printf("(RECORDATORIO: Introduce el caracter en mayuscula)\n");
 		                    fflush(stdin);
 		                    scanf("%c", &temaSecundario1);
							switch (temaSecundario1){
						
					        	case 'C':
					                printf("El origen de la conquista espacial:\n");
					                printf("La conquista del espacio comenzo realmente con el lanzamiento\n");
					                printf("del primer satelite, el  Sputnik 1, el 4 de octubre de 1957.\n");
					                printf("Fueron los sovieticos quienes consiguieron tal\n");
					                printf(" proeza, ahi el nombre tan raro del satelite.\n");					
				                break;
				                case 'O':
					                printf("Objetivo: la Luna:\n");
					                printf("El 16 de julio de 1969, una tripulacion formada por tres austronautas\n");
					                printf("americanos vivio en sus propias carnes la mayor aventura de la humanidad\n");
					                printf("hasta la fecha: despegaron hacia la Luna a bordo del cohete Saturno V.\n");
					                printf("Esta mision llamada Apolo 11, fue la primera en mandar humanos al espacio,\n");
					                printf("los intrepidos astronautas fueron: Neil Armstrong, Michael Collins y Buzz Aldrin.\n");					
				                break;
				                case 'E':
				 	                printf("La estacion espacial internacional:\n");
				 	                printf("Esta situada a 400 km de altura sobre la Tierra, es la mayor nabe espacial jamas\n");
				 	                printf("construida, 16 paises colaboraron en su construccion. La funcion de esta estructura\n");
				 	                printf("gigantesca es la de realizar experimentos cientificos y observar el universo,\n");
				 	                printf("da una vuelta a la Tierra cada 90 minutos. Mide 73 metros de ancho y 109 metros de largo.\n");				 	                
				                break;
				                case 'B':
				 	                printf("Un proyecto de base lunar:\n");
				 	                printf("Esta previsto como proyecto establecer una base en la Luna. Para que las tripulaciones con\n");
				 	                printf("destino a Marte hicieran escala alli, entre otras funciones. La base incluiria modulos de vivienda y \n");
				 	                printf("modulos de laboratorio, paneles solares para proporcionar la energia necesaria para disponer de luz y \n");
							printf("calefaccion. Alli se instalarian hasta una docena de cientificos para investigar la Luna y sus misterios.\n");				
				                break;				                
				                default:
				                    printf("\n");
							}	
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
