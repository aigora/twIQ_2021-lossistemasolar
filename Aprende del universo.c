#include<stdio.h>
#define N 100
#define S 50

struct jugador{
	char nombre[S];
	int puntuacion;
};
int main() {
	int  x;
	char temaPrincipal, temaSecundario, temaSecundario1 ;
	struct jugador lista[N];
	int opcion, n=1,i=0;
	char curiosidad;
	
        printf("\n		                 ## Bienvenido a Aprender sobre el Sistema Solar ##\n\n");
do{
 	printf("¿Te sientes preparado para evaluar tus conocimientos o quieres aprender mas sobre el espacio?\n");
	 printf("Necesitas saber mas sobre el universo (1).\n");
 	printf("Te consideras preparado/a (2).\n");
 	scanf("%d",&opcion);
 
 	
if (opcion == 1){
 		printf("- El Universo (U)\n");
 		printf("- El Sistema solar (S)\n");
 		printf("- La Tierra (T)\n");
 		printf("- La Luna (L)\n");
 		printf("- La conquista el espacio (C)\n");
 		printf("(RECORDATORIO: Introduce el caracter en mayuscula)\n\n");
 		fflush(stdin);
			scanf("%c", &temaPrincipal);
			switch (temaPrincipal) {
				case 'U':
					printf("El Universo:\n\n");
					printf("El Universo se creo hace 14.000 millones de anyos tras una explosion gigante llamada Big Bang,\nque significa <la gran explosion>.\n");
					printf("\nEl universo es enorme, hemos seleccionado los temas mas interesantes.\n");
					printf(" Escoje uno entre los siguientes:\n");					
					printf("-Las Galaxias.  (G)\n");
 		            printf("-El nacimiento del Sol.  (S)\n");
 		            printf("-La formacion de los planetas.  (P)\n");
 		            printf("(RECORDATORIO: Introduce el caracter en mayuscula)\n");
 		            fflush(stdin);
 		            scanf("%c", &temaSecundario);
					switch (temaSecundario){
				        case 'G':
					        printf("Las Galaxias:\n\n");
							printf("Una galaxia es el conjunto de estrellas, planetas, cometas, nubes de gas\n y de polvo que giran alrededor de un mismo nucleo.\n");
							printf("Querrias saber un dato curioso...\n");
							printf("Si quiere conocerlo pulse (S) y si quiere continuar pulse (N)\n");
							fflush(stdin);
							scanf("%c", &curiosidad);
							if((curiosidad == 'S') || (curiosidad == 's')) {
								printf("A veces una galaxia masiva atrae a una galaxia mas  pequeña. Poco a poco\n las estrellas y las nubes de gas van a girar alrededor de un mismo nucleo.\n\n");
							} else if ((curiosidad == 'N') || (curiosidad == 'n')) {
								printf("Pues tu te lo pierdes :)\n\n");
							} else {
								printf("Error, opcion incorrecta\n\n");
							}
				        break;
				        case 'S':
					        printf("El nacimiento del Sol:\n\n");
							printf("El sol nacio hace 5.000 millones de años en una inmensa nube de gas y de polvos y\n se puso a girar muy deprisa sobre si mismo.\n");
							printf("El centro, muy caliente, se puso a brillar cada vez mas: nacio el Sol.\nA su alrededor, el polvo y los gases restantes continuaron girando.\n\n");
				        break;
				        case 'P':
				 	        printf("La formacion de los planetas:\n\n");
				 	        printf("En ese disco que giraba alrededor del Sol, donde la temperatura es increiblemente alta,\nlos planetas se formaron varios millones de años despues.\n\n");
				        break;
			            default:
				            printf("\n");
			        }    
				break;
				case 'S':
					printf("El Sistema Solar.\n\n");
					printf("El Sistema solar es muy grande, hemos seleccionado los temas mas interesantes,\n");
					printf("Escoje uno entre los siguientes:\n\n");					
					printf("-Observando el cielo.  (C)\n");
 		            printf("-Observando las estrellas.  (E)\n");
 		            printf("-Nuestra estrella el Sol.  (S)\n");
 		            printf("-Los planetas.  (P)\n");
 		            printf("(RECORDATORIO: Introduce el caracter en mayuscula)\n\n");
 		            fflush(stdin);
 		            scanf("%c", &temaSecundario);
					switch (temaSecundario){
				        case 'C':
					         printf("Observando el cielo:\n\n");
					        printf("Un poquito de historia nunca biene mal y aqui debemos explicarla.\n");
					        printf("En la prehistoria ya se interesaban por el Sol, las estrellas y \nlos cambios de estacion pero lo usaban como culto para la religion.\n");
						printf("No fue hasta los mayas, en la ciudad de Chichen Itza, que construyeron\nel primer observatorio que permitio estudiar el cielo.\n");
						printf("Los primeros astronomos observaban el cielo unicamente con sus ojos,\nmas tarde crearon instrumentos como el anteojo astronomico y el telescopio.\n\n");
						printf("Querrias saber un dato curioso...\n");
						printf("Si quiere conocerlo pulse (S) y si quiere continuar pulse (N)\n");
						fflush(stdin);
						scanf("%c", &curiosidad);
						if((curiosidad == 'S') || (curiosidad == 's')) {
							printf("Tu tambien puedes observar el cielo con herramientas o sin ellas.\n");
							printf("En verano, todo agosto puedes admirar la estrellas fugaces, como las\n");
							printf("perseidas.¡CUIDADO! Si miras un eclipse, que sea con gafas especiales.\n\n");								
							} else if ((curiosidad == 'N') || (curiosidad == 'n')) {
								printf("Pues tu te lo pierdes :)\n\n");
						} else {
							printf("Error, opcion incorrecta\n\n");
						}
				        break;
				        case 'E':
					        printf("Observando las estrellas:\n\n");
					        printf("Segun la estacion, las constelaciones de Casiopea y de la Osa Mayor\nno tienen la misma posicion respecto del horizonte.\n");
					        printf("Para situar las constelaciones, busca la estrella Polar, que brilla\nen la cola de la Osa Menor: encontraras una en cada lado.\n");
							printf("La Osa Mayor tiene forma de cacerola, Casiopea, una forma de W.\nEn otonyo, la Osa Mayor se situa debajo de la Osa Polar.\n\n");
				        break;
				        case 'S':
				 	        printf("Nuestra estrella el Sol:\n");
				 	        printf("El Sol es una enorme bola de gas. Tarda 25 dias en dar una vuelta sobre si mismo.\n");
				 	        printf("La superficie del Sol se parece a la piel de un pomelo gigante que se estuviera\n moviendo sin parar y que lanzara llamas como un dragon.\n");
				 	        printf("La vida en la Tierra es posible gracias al Sol y a la presencia de agua. Con un\npoco mas de radiacion solar o con un poco menos todo podria cambiar.\n\n");
					        printf("Querrias saber un dato curioso...\n");
						printf("Si quiere conocerlo pulse (S) y si quiere continuar pulse (N)\n");
						fflush(stdin);
						scanf("%c", &curiosidad);
						if((curiosidad == 'S') || (curiosidad == 's')) {
							printf("Auroras Polares:son fenomenos luminosos relacionados con el Sol que\n");
							printf(" podemos observar en el cielo, sobre todo en el Polo Norte y en el Sur.\n\n");								
							} else if ((curiosidad == 'N') || (curiosidad == 'n')) {
								printf("Pues tu te lo pierdes :)\n\n");
						} else {
							printf("Error, opcion incorrecta\n\n");
						}
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
 		                    printf("-Urano.  (U)\n");
				    printf("Neptuno (N)\n");
 		                    printf("-Asteroides.  (A)\n");
 		                    printf("-Metioritos. (E)\n");
 		                    printf("-Cometas.  (C)\n");
 		                    printf("(RECORDATORIO: Introduce el caracter en mayuscula)\n");
 		                    fflush(stdin);
 		                    scanf("%c", &temaSecundario1);
					        switch (temaSecundario1){
					        	case 'M':
					                printf("Mercurio:\n");
							printf("Radio: 2439640,3825 km/T\n");
							printf("Distancia al Sol: 5790,387 millones km\n");
							printf("Formacion: rocosa\n");
							printf("Color: gris\n\n");
				                break;
				                case 'V':
					                printf("Venus:\n");
							printf("Radio: 6051590,9488 km/T\n");
							printf("Distancia al Sol: 10820,7239 millones km\n");
							printf("Formacion: rocosa\n");
							printf("Color: amarillo\n\n");
				                break;
				                case 'T':
				 	                printf("La Tierra:\n");
							printf("Radio: 6637815 km/T\n");
							printf("Distancia al Sol: 14961 millones km\n");
							printf("Formacion: rocosa\n");
							printf("Color: azul y blanco\n\n");
				                break;
				                case 'R':
				 	                printf("Marte:\n");
							printf("Radio: 3397000,53226 km/T\n");
							printf("Distancia al Sol: 22791,524 millones km\n");
							printf("Formacion: rocosa\n");
							printf("Color: rojo\n\n");
				                break;
				                case 'J':
				 	                printf("Jupiter:\n");
				 	                printf("Radio: 714926811,209 km/T\n");
							printf("Distancia al Sol: 77845,203 millones km\n");
							printf("Formacion: gaseosa\n");
							printf("Color: mezcal de colores (gama de colores calidos)\n\n");
				                break;
				                case 'S':
				 	                printf("Saturno:\n");
							printf("Radio: 6026714 9,449 km/T\n");
							printf("Distancia al Sol: 142679,537 millones km\n");
							printf("Formacion: gaseosa\n");
							printf("Color: naranja y blanco\n\n");
				                break;
				                case 'U':
				 	                printf("Urano:\n");
							printf("Radio: 2557254,007 km/T\n");
							printf("Distancia al Sol: 2871019,191 millones km\n");
							printf("Formacion: gaseosa\n");
							printf("Color: verde y azul\n\n");
				                break;
						case 'N':
				 	                printf("Neptuno:\n");
							printf("Radio: 24766363,883 km/T\n");
							printf("Distancia al Sol: 4498330,069 millones km\n");
							printf("Formacion: gaseosa\n");
							printf("Color: azul\n\n");
					
				                break;
				                case 'A':
				 	                printf("Asteroides:\n");
							printf("Son unos bloques de rocas y de metales que giran alrededor del Sol.\nTienen diferentes tamaños\n\n");
				                break;
				                case 'E':
				 	                printf("Metioritos:\n");
							printf("Ciertos asteroides son atraidos hacia la Tierra.\nCuando alcanzan el suelo terrestre, se les llama meteoritos.\n\n");
				                break;
				                case 'C':
				 	                printf("Cometas:\n");
							printf("Es un nucleo formado por rocas, gases helados y agua.\nEste nucleo esta envuelto en una cola de gas y de polvo\n\n");
				                break;
				                default:
				                    printf("\n");
							}
				        break;
			            default:
				            printf("\n");
			        }   
				 printf("Querrias saber un dato curioso...\n");
				 printf("Si quiere conocerlo pulse (S) y si quiere continuar pulse (N)\n");
				 fflush(stdin);
				 scanf("%c", &curiosidad);
				 if((curiosidad == 'S') || (curiosidad == 's')) {
				       printf("Para memorizar el nombre de los planetas , de la Luna y del Sol\n");
				       printf("recita los dias de la semana. A cada astro le corresponde un dia..\n\n");
				       printf("Lun-es → Luna\n");
				       printf("Mar-tes → Marte\n");
				       printf("Mier-coles → Mercurio\n");
				       printf("Ju-eves → Jupiter\n");
				       printf("Vie-rnes → Venus\n");
				       printf("Sa-bado  → Saturno\n");
				       printf("Domingo → Sol\n");
				 } else if ((curiosidad == 'N') || (curiosidad == 'n')) {
				       printf("Pues tu te lo pierdes :)\n\n");
				 } else {
				       printf("Error, opcion incorrecta\n\n");
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
							printf("Hace varios millones de años, un bolido del espacio habia colisionado  con la Tierra;\n");
							printf("los fragmentos restantes habian dado como resultado la Luna.\n");
					
				                break;
				                case 'S':
					                printf("Superficie:\n");
							printf("Con una luneta astronomica puedes observar los crateres en la superficie de la Luna ,\n");
							printf("que han sido provocados por meteoritos.\n");
					
				                break;
				                case 'C':
				 	                printf("Caras de la Luna:\n");
							printf("Desde la Tierra vemos la parte de la Luna iluminada por el Sol.\n");
							printf("He aqui las diferentes formas que la Luna adquiere durante un mes:\n");
							printf("-Luna nueva\n-Media Luna\n-Cuarto creciente(dos cada una con la sombra en un lado distinto)\n-Luna llena\n-Cuarto menguante\n-Luna menguante\n");
					
				                break;
				                case 'U':
				 	                printf("Curiosidades:\n");
						        printf("Querrias saber un dato curioso...\n");
				                        printf("Escoje entre tres curiosidades ("A","B" y "C") o si quiere continuar pulse (N)\n");
				                        fflush(stdin);
				                        scanf("%c", &curiosidad);
				                        if((curiosidad == 'A') || (curiosidad == 'a')) {
				                             printf("La luna y el sol a veces juegan al escondite , lo que da lugar \n");
				                             printf("a los eclipses.Estos pueden ser totales o parciales.\n");
				                             printf("Cuando la Luna pasa tenemos un eclipse Solar.Si el  \n");
				                             printf("eclipse es total, los astro estan perfectamente alineados.\n\n");
						             printf("Un eclipse total de Sol , solo dura unos minutos.Los rayos del Sol quedan totalmente\n");
						             printf("tapados por la Luna y se hace de noche en pleno dia.La temperatura cae.Es posible \n");
							     printf("observa este tipo de eclipses pero hay que ser prudentes y llevar unas gafas con un filtro especial.\n\n");
						             printf("A veces cuando hay Luna llena , la Tierra pasa entre la Luna  y el Sol, \n");
							     printf("y su sombra tapa la Luna con un velo durante una hora o mas :\n");
							     printf("es un eclipse de Luna. Se puede ver desde la cara de la Tierra sumergida en la noche.\n\n");
							     printf("El eclipse es total de la Luna esta completamente cubierta por la sombra\n");
							     printf("de la Tierra,y parcial, si lo que esta cubierto es solo una parte.\n");
							     printf("Durante el eclipse, la Luna puede adquirir unos bellos colores rojizos.\n");
							     printf("Estos se deben a los rayos de Sol que le llegan .Este fenomeno puede durar dos horas.\n\n");
							 } else if ((curiosidad == 'B') || (curiosidad == 'b')) {
				                                   printf("La Luna juega con los oceanos:\n\n");
								   printf("El campo magnetico de la Tierra atrae a la Luna .Pero la Luna tambien atrae\n");
								   printf(" a la Tierra y, especialmente, a los oceanos.Es lo que provoca las mareas.\n");
								   printf("-Con marea baja , la orilla se queda seca.El mar se retira de la playa.\n");
								   printf("-Con marea  alta, el mar se vuelve a subir a la playa y los barcos flotan.\n");
								   printf("El Monte Saint-Michel, en Francia , se convierte en isla al subir la marea.\n");
								   printf("En el Mediterraneo las mareas son debiles porque es un mar cerrado.\n\n");
				                         } else if ((curiosidad == 'C') || (curiosidad == 'c')) {
				                                   printf("La jardineria y la Luna:\n\n");
								   printf("La Luna es creciente de la Luna nueva hasta la Luna llena y \n");
								   printf("menguante,desde la luna llena hasta la Luna nueva siguiente.\n");
								   printf("Durante la fase creciente de la Luna , las plantas crecen mas deprisa.\n");
								   printf("Es el momento de sembrar semillas y de plantar los árboles .\n");
								   printf("Durante la Luna menguante, la luz es mas tenue, las plantas no\n");
								   printf("se mantienen tan bien.Si cortas el cesped, crecera mas despacio.\n");
				                        }	
				                         else if ((curiosidad == 'N') || (curiosidad == 'n')) {
				                                   printf("Pues tu te lo pierdes :)\n\n");
				                        } else {
				                                   printf("Error, opcion incorrecta\n\n");
						}
					
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
printf("¿Quieres continuar? Pulse 1 si quiere volver al menu de inicio o 2 si quiere cerrar el programa.\n");
scanf("%d", &x);
}
while(x==1);
 	
printf("Fin del programa.\n");
	
return 0;

}
