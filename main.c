/*
 ============================================================================
 Name        : Arreglos.c
 Author      : ech0Server
 Version     :
 Copyright   :
 Description : Arreglos en C
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	int variable[2];
	int variable2[3] = { 3, 3, 3 };
	int variable3[4] = { 3 };

	// Inicializar indice
	int indice = 0;
	/*
	 for (indice = 0; indice < 2; indice++) {
	 printf("%d \n", variable[indice]);
	 }

	 for (indice = 0; indice < 3; indice++) {
	 printf("Arreglo: variable2 posicion %d tiene un valor de %d \n", indice,
	 variable2[indice]);
	 }

	 for (indice = 0; indice < 4; indice++) {
	 printf("Arreglo: variable3 posicion %d tiene un valor de %d \n", indice,
	 variable3[indice]);
	 }
	 */

	char nombre[] = "El Nombre!! :)";

	for (indice = 0; indice < sizeof(nombre); indice++) {
		//printf("%c \n", nombre[indice]);
	}

	int letra = 65;
	//printf("%c \n", letra);

	//Multidimensionales

	int a[3][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 } };
	int otroIndice = 0;

	for (indice = 0; indice < 3; indice++) {
		for (otroIndice = 0; otroIndice < 4; otroIndice++) {
			printf("a[%d][%d] = %d ", indice, otroIndice,
					a[indice][otroIndice]);
		}
		printf("\n");
	}

	srand(time(NULL));

	//Iniciar indices
	int i, j;
	int arreglo[2];
	//Llenar arreglo
	for (i = 0; i < 2; i++) {
		arreglo[i] = rand();
	}

	for (i = 0; i < 2; i++) {
		printf("Arreglo: qrreglo posicion %d tiene un valor de %d \n", i,
				arreglo[i]);
	}

	char tracks[][80] = {
		"I left my heart in Harvard Med School", "Newark, Newark - a wonderful town", "Dancing with a Dork",
		"From here to maternity",
		"The girl from Iwo Jima",
		};
		printf("%s", tracks[0]);

	return EXIT_SUCCESS;
}

