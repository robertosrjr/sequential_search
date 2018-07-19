/*
 ============================================================================
 Name        : BuscaSequencial.c
 Author      : Roberto S. Ramos Jr
 Version     : 1.0
 Copyright   : robertosrjr@gmail.com
 Description : Algoritmo de Busca Sequencial in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int vec[] = {10, 20, 12, 18, 8, 9, 57, 21, 11, 2};

int main(void) {

	int resp_busca_sequencial = -1;
	int num_a_ser_pesquisado = 9;

	resp_busca_sequencial = buscaSequencial(vec, num_a_ser_pesquisado, 10);

	if (resp_busca_sequencial == -1) {

		printf("O número %d não foi encontrado.", num_a_ser_pesquisado);
	} else {

		printf("O número %d foi encontrado na posição %d.", num_a_ser_pesquisado, resp_busca_sequencial);
	}


	return EXIT_SUCCESS;
}


int buscaSequencial(int vec[], int arg, int tam) {

	int i = 0;
	int achou = -1;

	while (( i < tam) && (achou ==-1)) {

		if (vec[i] == arg) {

			achou = i;
		}
		i++;
	}
	return (achou);
}
