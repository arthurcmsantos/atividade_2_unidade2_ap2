#include <stdio.h>
#include <stdlib.h>

void push(int valor);
int pop(void);
int size(void);
int stackPop(void);
void isEmpty(void);
void listElement(void);
void drainOut(void);

int pilha[10];
int topo = 0;

void push(int valor){
    if(topo >= 10){
        printf("Pilha Cheia");
    }else if(valor%2==0) {
        pilha[topo] = valor;
        topo++;
    } else if(valor%2!=0){
    	pop();
	}
	
    return;
}

int pop(void){
    int removido = --topo;
    int valorTopo = pilha[removido];
    pilha[removido] = 0;
    return (valorTopo);
}

int size(void){
    return topo;
}

int stackPop(void){
    return pilha[topo];
}

int estaVazia(void){
    if(topo == 0){
        return 1;
    }else{
        return 2;
    }
}

void listElement(void){
    printf("Elementos da pilha\n");
    int i;
    for(i=0;i<10; i++){
        printf("%d\n", pilha[i]);
    }
}

void drainOut(void){
    int tamanhoPinha = size();
    int i;
    for(i=0; i<tamanhoPinha; i++){
        pop();
        printf("o valor %d foi removido da pilha!\n", pilha[i]);
    }
}

int main(){
    //chame os metodos para testar

    //inserido 3 elementos
    push(4);
    push(2);
    push(3);

    //listando os elementos
    listElement();

    //limpando a pilha, descomente para executar a limpeza da pilha.
    //drainOut();
    return 0;
}

