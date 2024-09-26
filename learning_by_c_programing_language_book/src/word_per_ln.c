#include <stdio.h>
#include <string.h>

#define IN 1
#define OUT 0

int word_per_ln() {
	char frase[200];

	printf("Digite uma frase: ");
	fgets(frase, sizeof(frase), stdin); // Lê a frase do usuário

	// Remove a nova linha que fgets pode adicionar
	frase[strcspn(frase, "\n")] = '\0';


	char fraseCopia[200];
	strcpy(fraseCopia, frase); // Copia a frase para evitar modificar a original

	char *palavra = strtok(fraseCopia, " "); // Divide a frase em palavras

	// Imprime cada palavra em uma nova linha
	while (palavra != NULL) {
		printf("%s\n", palavra);
		palavra = strtok(NULL, " ");
	}
	return 0;	
}
