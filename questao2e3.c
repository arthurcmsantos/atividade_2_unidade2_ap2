#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_DA_FILA 100

struct fila {
	int itens[TAMANHO_DA_FILA];
	int frente;
	int atras;
};

int verificaFilaVazia(struct fila *nossaFila){
	if(nossaFila->frente != nossaFila->atras){
		return 1;
	}else{
		return 0;
	}
}

void inserirItemFila(struct fila *nossaFila, int elemento){
    int tamanho = TAMANHO_DA_FILA;
	if(nossaFila->atras+1 >= tamanho){
		printf("A Fila está cheia");
		exit(1);
	}else{
		nossaFila->itens[nossaFila->atras++] = elemento;
	}
}

int tamanhoDaFila(struct fila *nossaFila){
	return nossaFila->atras;
}

int frente(struct fila *nossaFila){
	return nossaFila->itens[0];
}

int removerElemento(struct fila *nossaFila){
	int itemRemovido;
	int i;
	if(verificaFilaVazia(nossaFila) == 1){
		printf("A fila está vazia!");
		exit(1);
	}
	itemRemovido = frente(nossaFila);

	for(i = 0; i < tamanhoDaFila(nossaFila); i++){
		nossaFila->itens[1] = nossaFila->itens[i+1];
	}

	nossaFila->atras--;

	return itemRemovido;

}

void tornaFilaVazia(struct fila *nossaFila){
	int tamanho;
	tamanho = tamanhoDaFila(nossaFila);
	int i;

	for(i = 0; i<tamanho ; i++)
		removerElemento(nossaFila);
}


//Função da Questão 3
void listarElementos(struct fila *nossaFila){
	int tamanho;
	tamanho = tamanhoDaFila(nossaFila);
	int i;
	printf("=================Itens da Fila===========\n");
	for(i = 0; i < tamanho; i++){
		printf("Posicao %d item: %d", i+1, nossaFila->itens[i]);
	}
}

int main(){
	struct fila nossaFila;
	nossaFila.frente = 0;
	nossaFila.atras = 0;

	// Chame aqui os metodos para testar.
	
	inserirItemFila(&nossaFila, 5);
	inserirItemFila(&nossaFila, 6);
	inserirItemFila(&nossaFila, 7);
	inserirItemFila(&nossaFila, 10);
	
	listarElementos(&nossaFila);

	return 0;
}
