// Juego educativo para todas las edades para aprender y mejorar la cultura general acerca del universo y sus elementos (sistema solar, cometas, la luna, ...)

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <windows.h>
#define N 100
#define S 50


// Definir estructura del juego
typedef struct{
	char nombre[50];
	int puntuacion;
}jugadores;

jugadores jugador[100];
jugadores principal;
jugadores mejor;

// Definir funciones
void bannerInicio();
void bannerFinal();
void planeta();
void universo();
void estrella();
void sistemaSolar();
void planetas();
void Dibujo_Luna();
void luna();
void espacio();
void ordenarBurbuja();

int main() {
system("color 0B");
    
// Variables necesarias
	int  x, n=1, i=0;
	char tema;
	
	FILE *f;
	int cont=0, j;
	char temp[50];
	//char aux;
	
	int contador=0;
	char opcion;
	srand(time(NULL));
	
	time_t t;
  	struct tm *tm;
	char fechayhora[100];
	
	t=time(NULL);
	tm=localtime(&t);
	strftime(fechayhora, 100, "%d/%m/%Y\t\t%H:%M\t\t", tm);
	printf ("	%s\n", fechayhora);
	    
	do {
		bannerInicio();
		planeta();
 		printf("  Te sientes preparado para evaluar tus conocimientos o quieres aprender mas sobre el espacio?\n\n");
		printf("     - Necesitas saber mas sobre el universo (1).\n");
 		printf("     - Te consideras preparad@ (2).\n");
 		scanf("%d",&opcion);
 
// Teoria del programa (toda la informacion)
	if (opcion == 1) {
		system("cls");
		printf("     ----- opcion Aprende con Nosotros -----\n\n");
 		printf("     - El Universo (U)\n");
 		printf("     - El Sistema solar (S)\n");
 		printf("     - La Luna (L)\n");
 		printf("     - La conquista el espacio (C)\n");
 		printf("   (RECORDATORIO: Introduce el caracter en mayuscula)\n");
 		fflush(stdin);
		scanf("%c", &tema);
			switch (tema) {
				case 'U':
					system("cls");
					universo();  
				break;
				case 'S':
					system("cls");
					sistemaSolar(); 
				break;
				case 'L':
					system("cls");
					luna();            		                    		                  	                    
				break;
				case 'C':
					system("cls");
					espacio();
				break;
				default:
				printf("\n");
			}    
	}
	
// Juego del programa (elegir una respuesta)
	else if (opcion = 2) {
		system("cls");
		fflush(stdin);
		printf("     ----- opcion Juega con Nosotros -----\n\n");

		f = fopen("listajugadores.txt","r"); // --> Ruta relativa
	
		if (f== NULL) {
			printf("Error, el fichero no se ha encontrado\n");
			return 0;
		}
		
		i=0;
		printf("								## Lista de los jugadores ##\n\n");
		while(i<5){
			fscanf(f, "%s %d", jugador[i].nombre, &jugador[i].puntuacion);
			
			
			// ordenarBurbuja(); // FALLO
			
			
			printf("	 								%s	___________	%d\n\n", jugador[i].nombre, jugador[i].puntuacion);
			i++;
		}		
		rewind(f);
		
		fclose(f);
		
		printf("	Introduce nombre de usuario: ");
		scanf("%s", principal.nombre);
		fflush(stdin);
	
		printf("\nAntes de empezar con la ronda de preguntas debes saber que la respuesta \n debes ponerla con la letra en minuscula que corresponde y sin parentesis\n");
	
		for(i=0;i<5;i++) {
			switch(rand()%15) {
				case 0:{
					printf("     ¿Como y cuando se creo el universo? Â¿Y el sol?\n\n");
					printf("   a) Hace 7.000 millones de anyos de un exploxion llamada 'Big Bang'\n   b) Hace 14.00 millones de anyos en una explosion llamada 'Big Bang'\n   c) hace 8.000 millones de anyos en un explosion llamada 'Big Bang'\n");
					fflush(stdin);
					scanf("%c",&opcion);
					
					if(opcion=='b'){
						printf("Correcto :)\n");
						contador++;
					}else{
						printf("Incorrecto\n");
					}
				break;
				}
				case 1:{
					printf("     ¿Que es una galaxia?\n\n");
					printf("   a) Un conjunto de estrellas, planetas, cometas, nubes de gas y de polvo\n   b) Un conjunto de gases y polvo que forman estrellas\n   c) Un conjunto de piedras y arena\n");
					fflush(stdin);
					scanf("%c",&opcion);
					
					if(opcion=='a'){
						printf("Correcto :)\n");
						contador++;
					}else{
						printf("Incorrecto\n");
					}
				break;
				}
				case 2:{
					printf("     ¿Que civilizacion fue la primera en interesarse por el universo?\n\n");
					printf("   a) Aztecas\n   b) Incas\n   c) Mayas\n");
					fflush(stdin);
					scanf("%c",&opcion);
					if(opcion=='c'){
						printf("Correcto :)\n");
						contador++;
					}else{
						printf("Incorrecto\n");
					}
				break;
				}
				case 3:{
					printf("     ¿Que forma tienen las constelaciones?\n\n");
					printf("   a) La Osa Mayor de cuadrado y Casiopea forma de H\n   b) Casiopea forma de W y la Osa Mayor forma de cacerola\n");
					fflush(stdin);
					scanf("%c",&opcion);
					if(opcion=='b'){
						printf("Correcto :)\n");
						contador++;
					}else{
						printf("Incorrecto\n");
					}
				break;
				}
				case 4:{
					printf("     Las constelaciones no cambian de posicion respecto del horizonte\n\n");
					printf("   a) Verdadero\n   b) Falso\n");
					fflush(stdin);
					scanf("%c",&opcion);
					if(opcion=='b'){
						printf("Correcto :)\n");
						contador++;
					}else{
						printf("Incorrecto\n");
					}
				break;
				}
				case 5:{
					printf("     Cuantos dias tarda en dar una vuelta el sol sobre si mismo? \n\n");
					printf("   a) 25\n   b) 28\n");
					fflush(stdin);
					scanf("%c",&opcion);
					if(opcion=='a'){
						printf("Correcto :)\n");
						contador++;
					}else{
						printf("Incorrecto\n");
					}
				break;
				}
				case 6:{
					printf("     Cuanto mas bajamos el nucleo de la tierra mas frio hace?\n\n");
					printf("   a) Verdadero\n   b) Falso\n");
					fflush(stdin);
					scanf("%c",&opcion);
					if(opcion=='b'){
						printf("Correcto :)\n");
						contador++;
					}else{
						printf("Incorrecto\n");
					}
				break;
				}
				case 7:{
					printf("     Que es la corteza terrestre?\n\n");
					printf("   a) es una capa de rocas situada bajo los oceanos y continente\n   b) es un capa de aire situada encima de los oceanos y continentes\n");
					fflush(stdin);
					scanf("%c",&opcion);
					if(opcion=='a'){
						printf("Correcto :)\n");
						contador++;
					}else{
						printf("Incorrecto\n");
					}
				break;
				}
				case 8:{
					printf("     Cuantas caras tiene la Luna en un mes?\n\n");
					printf("   a) 7\n   b) 10\n   c) 8\n");
					fflush(stdin);
					scanf("%c",&opcion);
					if(opcion=='c'){
						printf("Correcto :)\n");
						contador++;
					}else{
						printf("Incorrecto\n");
					}
				break;
				}
				case 9:{
					printf("     Con que se puede observar los crateres de la superficie de la luna?\n\n");
					printf("   a) luneta astronomica\n   b) gafas de sol\n   c) casco\n");
					fflush(stdin);
					scanf("%c",&opcion);
					if(opcion=='b'){
						printf("Correcto :)\n");
						contador++;
					}else{
						printf("Incorrecto\n");
					}
				break;
				}
				case 10:{
					printf("     Cuantos planetas existen?\n\n");
					printf("   a) 14\n   b) 8\n   c) 10\n");
					fflush(stdin);
					scanf("%c",&opcion);
					if(opcion=='b'){
						printf("Correcto :)\n");
						contador++;
					}else{
						printf("Incorrecto\n");
					}
				break;
				}
				case 11:{
					printf("     Cuantos kilometros aon una vuelta de la tierra?\n\n");
					printf("   a) 80000\n   b) 60.000\n   c) 40.000\n");
					fflush(stdin);
					scanf("%c",&opcion);
					if(opcion=='c'){
						printf("Correcto :)\n");
						contador++;
					}else{
						printf("Incorrecto\n");
					}
				break;
				}
				case 12:{
					printf("     La Tierra hace descansos cada 24h?\n\n");
					printf("   a) Verdadero\n   b) Falso\n");
					fflush(stdin);
					scanf("%c",&opcion);
					if(opcion=='b'){
						printf("Correcto :)\n");
						contador++;
					}else{
						printf("Incorrecto\n");
					}
				break;
				}
				case 13:{
					printf("     \n\n");
					printf("   a) Gira la Tierra al rededor de sol?\n   b) Gira el sol alrededor de la Tierra?\n");
					fflush(stdin);
					scanf("%c",&opcion);
					if(opcion=='a'){
						printf("Correcto :)\n");
						contador++;
					}else{
						printf("Incorrecto\n");
					}
				break;
				}
				case 14:{
					printf("     Que aparecio antes la vida o la tierra?\n\n");
					printf("   a) La Tierra\n   b) La vida\n");
					fflush(stdin);
					scanf("%c",&opcion);
					if(opcion=='a'){
						printf("Correcto :)\n");
						contador++;
					}else{
						printf("Incorrecto\n");
					}
				break;
				}
			}
		}
		principal.puntuacion = contador;
		
		// 1. Abrir el fichero para escritura
		f = fopen("listajugadores.txt","a");
		if(f == NULL) {
			printf("Error, el fichero no se ha encontrado\n");
			return 0;
		}
		
		//  COMPROBACION JUEGO FUNCIONA BIEN --> printf("%s %d", principal.nombre, principal.puntuacion);
		
		fprintf(f,"%s %d", principal.nombre, principal.puntuacion); // Imprimir en el fichero
	

		// 3. Cerrar el fichero
		fclose(f);
	
	
	}
	printf("					-----------------------------------------------------------------------------------------------------------------------\n");
	printf("					|      	  Quieres continuar?                                                                                          |\n");
	printf("					|       	    -Pulse 1 si quiere volver al menu de inicio                                                       |\n");
	printf("					|       	    -Pulse 2 si quiere cerrar el programa                                                             |\n");
	printf("					-----------------------------------------------------------------------------------------------------------------------\n");
	scanf("%d", &x);
	system("cls");
}while(x==1);
	
// Fin del programa
	bannerFinal();
	planeta();
 	
	return 0;
}

// Declaramos las funciones banner
void bannerInicio() {
	system("color 0B");
    printf("             		 				######################################################\n");
    printf("            		 				######################################################\n");
    printf("            		 				####                                              ####\n");
    printf("            		 				#### Bienvenido a Aprender sobre el Sistema Solar ####\n");
    printf("            		 				####                                              ####\n");
    printf("             		 				######################################################\n");
    printf("            		 				######################################################\n");
    printf("\n\n");

}

void bannerFinal() {
	system("color 0B");
	printf("  							----------------------------------------------------------\n");
	printf("  							#########  Gracias por confiar en nosotros ;)  ###########\n");
	printf("  							#################  Hasta la proxima!!  ###################\n");
 	printf("  							----------------------------------------------------------\n\n");
}

void planeta(){
	printf("						                     @       @@@@@@@@@@@@@@@                      \n");    
    printf("						        @               @@@@@@@@##########@@@@@@@                  \n");    
    printf("						       @@@            @@@@@@@@######@######@@@@@@@@          @     \n");         
    printf("						        @          @@@@@#########################@@@@@      @@@    \n");          
    printf("						                @@@@######@#########################&@@@@    @     \n");           
    printf("						              @@@@#####################################@@@@        \n");          
    printf("						            @@@@###########################@#############@@@@      \n");          
    printf("						    @      @@@############################################&@@@     \n");          
    printf("						          @@@######################################@#########@@@   \n");        
    printf("						        @@@@#######@############################@##############@@@@   \n");          
    printf("						     @@@@@@@######@@@###############################@@@@@#####@@@@@@@    \n");         
    printf("						 @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@  \n");          
    printf("						 @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@  \n");          
    printf("						     @@@@@@@######@@@###############################@@@@@#####@@@@@@@    \n");         
    printf("						         @@@#######@#################################@########@@@@   \n");          
    printf("						          @@@###############################################@@@    \n");        
    printf("						    @      @@@############################################&@@@     \n");          
    printf("						       @    @@@@#########@###############################@@@@      \n");          
    printf("						       @      @@@@#####################################@@@@        \n");          
    printf("						      @@@       @@@@##########################@@####&@@@@          \n");           
    printf("						     @@@@@         @@@@@#########################@@@@@             \n");          
    printf("						      @@@      @      @@@@@@@@#############@@@@@@@@        @       \n");         
    printf("						       @      @@@       @@@@@@@@##########@@@@@@@                  \n");    
    printf("						       @       @             @@@@@@@@@@@@@@@                      \n\n\n");    

}

void tierra() {
	printf("						                             @@@@@@@@@@@@@@@                      \n");    
    printf("						                        @@@@@@@@##########@@@@@@@                  \n");    
    printf("						                      @@@@@@@@######@######@@@@@@@@          @     \n");         
    printf("						                   @@@@@#########################@@@@@      @@@    \n");          
    printf("						                @@@@######@#########################&@@@@    @     \n");           
    printf("						              @@@@#####################################@@@@        \n");          
    printf("						            @@@@###########################@#############@@@@      \n");          
    printf("						           @@@############################################&@@@     \n");          
    printf("						          @@@######################################@#########@@@   \n");        
    printf("						        @@@@#######@############################@##############@@@@   \n");          
    printf("						     @@@@@@@######@@@###############################@@@@@#####@@@@@@@    \n");         
    printf("						 @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@  \n");          
    printf("						 @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@  \n");          
    printf("						     @@@@@@@######@@@###############################@@@@@#####@@@@@@@    \n");         
    printf("						         @@@#######@#################################@########@@@@   \n");          
    printf("						          @@@###############################################@@@    \n");        
    printf("						           @@@############################################&@@@     \n");          
    printf("						            @@@@#########@###############################@@@@      \n");          
    printf("						       @      @@@@#####################################@@@@        \n");          
    printf("						      @@@       @@@@##########################@@####&@@@@          \n");           
    printf("						                   @@@@@#########################@@@@@             \n");          
    printf("						               @      @@@@@@@@#############@@@@@@@@        @       \n");         
    printf("						              @@@       @@@@@@@@##########@@@@@@@                  \n");    
    printf("						               @             @@@@@@@@@@@@@@@                      \n\n\n");    
}
// Declaramos las funciones con la informacion
void universo() {
	int i;
	char tema, curiosidad;
	
	for(i=0;i<300;i++) {
		printf("  \n");
	}
	system("cls");
	system("color 0D");
	printf("     ###  El Universo  ###\n\n");
	printf("  El Universo se creo hace 14.000 millones de anyos tras una explosion gigante llamada Big Bang,\n  que significa <la gran explosion>.\n");
	printf("\n  El universo es enorme, hemos seleccionado los temas mas interesantes.\n");
	printf("  Escoje uno entre los siguientes:\n");					
	printf("      -Las Galaxias.  (G)\n");
 	printf("      -El nacimiento del Sol.  (S)\n");
 	printf("      -La formacion de los planetas.  (P)\n");
 	printf("(RECORDATORIO: Introduce el caracter en mayuscula)\n");
 	fflush(stdin);
 	scanf("%c", &tema);
	switch (tema) {
			case 'G':
				printf("     ***  Las Galaxias  ***\n\n");
				printf("  Una galaxia es el conjunto de estrellas, planetas, cometas, nubes de gas\n  y de polvo que giran alrededor de un mismo nucleo.\n\n");
				printf("  --- Querrias saber un dato curioso... ---\n");
				printf("   Si quiere conocerlo pulse (S) y si quiere continuar pulse (N)\n");
				fflush(stdin);
				scanf("%c", &curiosidad);
				if((curiosidad == 'S') || (curiosidad == 's')) {
					printf("************************************************************************************************************************\n");
					printf("          ## DATO CURIOSO ##\n\n");
					printf("     A veces una galaxia masiva atrae a una galaxia mas pequenya. Poco a poco\n     las estrellas y las nubes de gas van a girar alrededor de un mismo nucleo.\n\n");
					printf("************************************************************************************************************************\n");
				}else if ((curiosidad == 'N') || (curiosidad == 'n')) {
					printf("     Pues tu te lo pierdes :)\n\n");
				}else {
					printf("     Error, opcion incorrecta\n\n");
				}
			break;
			case 'S':
				estrella();
				printf("     ***  El nacimiento del Sol  ***\n\n");
				printf("  El sol nacio hace 5.000 millones de aÃ?Â±os en una inmensa nube de gas y de polvos y\n  se puso a girar muy deprisa sobre si mismo.\n");
				printf("  El centro, muy caliente, se puso a brillar cada vez mas: nacio el Sol.\n  A su alrededor, el polvo y los gases restantes continuaron girando.\n\n");
			break;
			case 'P':
				printf("     ***  La formacion de los planetas  ***\n\n");
				printf("En ese disco que giraba alrededor del Sol, donde la temperatura es increiblemente alta,\nlos planetas se formaron varios millones de aÃ?Â±os despues.\n\n");
			break;
			default:
				printf("\n");
	}  
}

void sistemaSolar() {
	char tema, curiosidad;
	int i=0;
	for(i=0;i<300;i++) {
		printf("  \n");
	}
	system("cls");
	system("color 06");
	printf("     ###  El Sistema Solar  ###\n\n");
	printf("  Escoje uno entre los siguientes:\n");				
	printf("      -Observando el cielo.  (C)\n");
	printf("      -Observando las estrellas.  (E)\n");
	printf("      -Nuestra estrella el Sol.  (S)\n");
	printf("      -Los planetas.  (P)\n");
	printf("(RECORDATORIO: Introduce el caracter en mayuscula)\n\n");
	fflush(stdin);
	scanf("%c", &tema);
	switch (tema) {
		case 'C':
			printf("     ***  Observando el cielo  ***\n\n");
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
					printf("perseidas.Ã?Â¡CUIDADO! Si miras un eclipse, que sea con gafas especiales.\n\n");								
				}else if ((curiosidad == 'N') || (curiosidad == 'n')) {
					printf("Pues tu te lo pierdes :)\n\n");
				}else {
					printf("Error, opcion incorrecta\n\n");
				}
		break;
		case 'E':
			printf("     ***  Observando las estrellas  ***\n\n");
			printf("Segun la estacion, las constelaciones de Casiopea y de la Osa Mayor\nno tienen la misma posicion respecto del horizonte.\n");
			printf("Para situar las constelaciones, busca la estrella Polar, que brilla\nen la cola de la Osa Menor: encontraras una en cada lado.\n");
			printf("La Osa Mayor tiene forma de cacerola, Casiopea, una forma de W.\nEn otonyo, la Osa Mayor se situa debajo de la Osa Polar.\n\n");
		break;
		case 'S':
			printf("     ***  Nuestra estrella el Sol  ***\n\n");
			printf("El Sol es una enorme bola de gas. Tarda 25 dias en dar una vuelta sobre si mismo.\n");
			printf("La superficie del Sol se parece a la piel de un pomelo gigante que se estuviera\n moviendo sin parar y que lanzara llamas como un dragon.\n");
			printf("La vida en la Tierra es posible gracias al Sol y a la presencia de agua. Con un\npoco mas de radiacion solar o con un poco menos todo podria cambiar.\n\n");
			printf("Querrias saber un dato curioso...\n");
			printf("Si quiere conocerlo pulse (S) y si quiere continuar pulse (N)\n");
			fflush(stdin);
			scanf("%c", &curiosidad);

			if((curiosidad == 'S') || (curiosidad == 's')) {
				printf("Auroras Polares: son fenomenos luminosos relacionados con el Sol que\n");
				printf(" podemos observar en el cielo, sobre todo en el Polo Norte y en el Sur.\n\n");								
			}else if ((curiosidad == 'N') || (curiosidad == 'n')) {
				printf("Pues tu te lo pierdes :)\n\n");
			}else {
				printf("Error, opcion incorrecta\n\n");
			}
		break;
		case 'P':
			planetas();
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
		printf("Lun-es --> Luna\n");
		printf("Mar-tes --> Marte\n");
		printf("Mier-coles --> Mercurio\n");
		printf("Ju-eves --> Jupiter\n");
		printf("Vie-rnes --> Venus\n");
		printf("Sa-bado  --> Saturno\n");
		printf("Domingo --> Sol\n");
	}else if ((curiosidad == 'N') || (curiosidad == 'n')) {
		printf("Pues tu te lo pierdes :)\n\n");
	}else {
		printf("Error, opcion incorrecta\n\n");
	}	
}

void planetas() {
	int i;
	char tema, curiosidad;
	for(i=0;i<300;i++) {
		printf("  \n");
	}
	system("cls");
	printf("     ***  Los planetas y demas cuerpos estelares  ***\n\n");
	printf(" Escoje uno entre los siguientes:\n");					
	printf("      -Mercurio.  (M)\n");
	printf("      -Venus.  (V)\n");
	printf("      -La Tierra.  (T)\n");
	printf("      -Marte.  (R)\n");
	printf("      -Jupiter.  (J)\n");
	printf("      -Saturno.  (S)\n");
	printf("      -Urano.  (U)\n");
	printf("      -Neptuno. (N)\n");
	printf("      -Asteroides.  (A)\n");
	printf("      -Metioritos. (E)\n");
	printf("      -Cometas.  (C)\n");
	printf("(RECORDATORIO: Introduce el caracter en mayuscula)\n");
	fflush(stdin);
	scanf("%c", &tema);
		switch (tema){
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
				printf("Son unos bloques de rocas y de metales que giran alrededor del Sol.\nTienen diferentes tamaÃ?Â±os\n\n");
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
}
void estrella(){
	printf("____________0000_______\n");
	printf("___________000000____\n");
	printf("__________00000000______\n");
	printf("________000000000000_________\n");
	printf("00000000000000000000000000000__\n");
	printf("__0000000000_000_0000000000__\n");
	printf("____00000000_000_00000000___\n");
	printf("______000000_000_000000___\n");
	printf("_______00000_000_00000___\n");
	printf("_______000000000000000______\n");
	printf("______00000000000000000_______\n");
	printf("_____000000000_000000000_______\n");
	printf("____0000000_______0000000_________\n");
	printf("\n\n");
}
void Dibujo_Luna(){
	printf("___________0\n");
	printf("_________000\n");
	printf("_______0000\n");
	printf("______0000\n");
	printf("____00000\n");
	printf("___00000\n");
	printf("__000000\n");
	printf("_0000000\n");
	printf("_0000000\n");
	printf("_00000000\n");
	printf("_00000000000\n");
	printf("_0000000000000                   0\n");
	printf("__00000000000000                00\n");
	printf("___000000000000000             000\n");
	printf("____000000000000000          0000\n");
	printf("______000000000000000     000000\n");
	printf("________000000000000000000000\n");
	printf("__________00000000000000000\n");
	printf("______________000000000\n");
	printf("\n");
}
void luna() {
	char tema, curiosidad;
	int i;
	for(i=0;i<300;i++) {
		printf("  \n");
	}
	system("cls");
	system("color 0F");
	Dibujo_Luna();
	printf("     ###  La Luna  ###\n\n");
	printf(" Escoje uno entre los siguientes temas sobre la Luna:\n");					
	printf("      -La Luna satelite de la Tierra.  (L)\n");
	printf("      -Superficie.  (S)\n");
   	printf("      -Caras de la Luna.  (C)\n");
   	printf("      -Escondite.  (E)\n");
   	printf("      -Jugando con los oceanos.  (J)\n");
   	printf("      -Curiosidades.  (U)\n");
  	printf("(RECORDATORIO: Introduce el caracter en mayuscula)\n");
 	fflush(stdin);
	scanf("%c", &tema);
	switch (tema){
    	case 'L':
			printf("     ***  La Luna satelite de la Tierra  ***\n\n");
			printf("Hace varios millones de aÃ?Â±os, un bolido del espacio habia colisionado  con la Tierra;\n");
			printf("los fragmentos restantes habian dado como resultado la Luna.\n");
		break;
		case 'S':
			printf("     ***  Superficie  ***\n\n");
			printf("Con una luneta astronomica puedes observar los crateres en la superficie de la Luna ,\n");
			printf("que han sido provocados por meteoritos.\n");
		break;
		case 'C':
			printf("     ***  Caras de la Luna  ***\n\n");
			printf("Desde la Tierra vemos la parte de la Luna iluminada por el Sol.\n");
			printf("He aqui las diferentes formas que la Luna adquiere durante un mes:\n");
			printf("-Luna nueva\n-Media Luna\n-Cuarto creciente(dos cada una con la sombra en un lado distinto)\n-Luna llena\n-Cuarto menguante\n-Luna menguante\n");
	    break;
	    case 'E':
	    	printf("     ***  Escondite  ***\n\n");
	    	printf("La luna y el Sol a veces juegan al escondite, lo que da lugar \n");
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
	    break;
		case 'J':
			printf("     ***  Jugando con los oceanos  ***\n\n");
		    printf("La Luna juega con los oceanos:\n\n");
			printf("El campo magnetico de la Tierra atrae a la Luna .Pero la Luna tambien atrae\n");
			printf(" a la Tierra y, especialmente, a los oceanos.Es lo que provoca las mareas.\n");
			printf("-Con marea baja , la orilla se queda seca.El mar se retira de la playa.\n");
			printf("-Con marea  alta, el mar se vuelve a subir a la playa y los barcos flotan.\n");
			printf("El Monte Saint-Michel, en Francia , se convierte en isla al subir la marea.\n");		
		break;	
		case 'U':			
		    printf("Curiosidades:\n");
			printf("Querrias saber un dato curioso...\n");
			printf("Si quiere conocerlo pulse (S) y si quiere continuar pulse (N)\n");
			fflush(stdin);
			scanf("%c", &curiosidad);
				            
			if((curiosidad == 'S') || (curiosidad == 's')) {
	          	printf("La jardineria y la Luna:\n\n");
				printf("La Luna es creciente de la Luna nueva hasta la Luna llena y \n");
				printf("menguante,desde la luna llena hasta la Luna nueva siguiente.\n");
				printf("Durante la fase creciente de la Luna , las plantas crecen mas deprisa.\n");
				printf("Es el momento de sembrar semillas y de plantar los Ã?Â¡rboles .\n");
				printf("Durante la Luna menguante, la luz es mas tenue, las plantas no\n");
				printf("se mantienen tan bien.Si cortas el cesped, crecera mas despacio.\n");
           	}else if ((curiosidad == 'N') || (curiosidad == 'n')) {
				printf("Pues tu te lo pierdes :)\n\n");
			}else {
			   	printf("Error, opcion incorrecta\n\n");
			}
		break;				                
      	default:
			printf("\n");
	}		              
}

void espacio(){
	char tema;
	int i;
	for(i=0;i<300;i++) {
		printf("  \n");
	}
	system("cls");
	system("color 0C");
	printf("     ###  La conquista el espacio  ###\n\n");
	printf("Con este titulo tan sorprendente nos referimos al comienzo  \n");
	printf("de la exploracion espacial por parte de la especie humana.\n\n");
	printf(" Escoje uno entre los siguientes temas sobre la conquista el espacio:\n");					
	printf("      -El origen de la conquista espacial.  (C)\n");
	printf("      -Objetivo: la Luna.  (O)\n");
	printf("      -La estacion espacial internacional.  (E)\n");
	printf("      -Un proyecto de base lunar.  (B)\n");
	printf("(RECORDATORIO: Introduce el caracter en mayuscula)\n");
	fflush(stdin);
	scanf("%c", &tema);
	switch (tema){
	 	case 'C':
			printf("     ***  El origen de la conquista espacial  ***\n\n");
			printf("La conquista del espacio comenzo realmente con el lanzamiento\n");
			printf("del primer satelite, el  Sputnik 1, el 4 de octubre de 1957.\n");
			printf("Fueron los sovieticos quienes consiguieron tal\n");
			printf(" proeza, ahi el nombre tan raro del satelite.\n");					
		break;
		case 'O':
			printf("     ***  Objetivo: la Luna  ***\n\n");
			printf("El 16 de julio de 1969, una tripulacion formada por tres austronautas\n");
			printf("americanos vivio en sus propias carnes la mayor aventura de la humanidad\n");
			printf("hasta la fecha: despegaron hacia la Luna a bordo del cohete Saturno V.\n");
			printf("Esta mision llamada Apolo 11, fue la primera en mandar humanos al espacio,\n");
			printf("los intrepidos astronautas fueron: Neil Armstrong, Michael Collins y Buzz Aldrin.\n");					
		break;
		case 'E':
			printf("     ***  La estacion espacial internacional  ***\n\n");
			printf("Esta situada a 400 km de altura sobre la Tierra, es la mayor nabe espacial jamas\n");
			printf("construida, 16 paises colaboraron en su construccion. La funcion de esta estructura\n");
			printf("gigantesca es la de realizar experimentos cientificos y observar el universo,\n");
			printf("da una vuelta a la Tierra cada 90 minutos. Mide 73 metros de ancho y 109 metros de largo.\n");				 	                
		break;
		case 'B':
			printf("     ***  Un proyecto de base lunar  ***\n\n");
			printf("Esta previsto como proyecto establecer una base en la Luna. Para que las tripulaciones con\n");
			printf("destino a Marte hicieran escala alli, entre otras funciones. La base incluiria modulos de vivienda y \n");
			printf("modulos de laboratorio, paneles solares para proporcionar la energia necesaria para disponer de luz y \n");
			printf("calefaccion. Alli se instalarian hasta una docena de cientificos para investigar la Luna y sus misterios.\n");				
		break;				                
		default:
	       	printf("\n");
	}	
}

void ordenarBurbuja(){
	int i,j,temp;
	
	for(i=1;i<N;i++) {
		temp=jugador[i].puntuacion;
		j=i-1;
		while((jugador[j].puntuacion < temp) && (j >=0)){
			jugador[j+1].puntuacion = jugador[j].puntuacion;
			j--;
		}
		jugador[j+1].puntuacion = temp;
	}
    /*int aux, i, j;
    for(i=0;i<5;i++){
        for(j=0;j<(5-1);j++){
            if(jugador[j].puntuacion > jugador[j+1].puntuacion){
                aux=jugador[j].puntuacion;
                jugador[j].puntuacion=jugador[j+1].puntuacion;
                jugador[j+1].puntuacion=aux;
            }
        }
    }*/


}
