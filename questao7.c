#include <stdio.h>
#include <stdlib.h>

void push(int valor);
int pop(void);
int size(void);
int stackPop(void);
void isEmpty(void);
void listElement(void);

int pilha[10];
int topo = 0;

void push(int valor){
    if(topo >= 10){
        printf("Pilha Cheia");
    }else {
        pilha[pos] = valor;
    topo++;
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

int isEmpty(void){
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

int main(){
    //chame os metodos para testar

    //inserido 3 elementos
    push(1);
    push(2);
    push(3);

    //listando os elementos
    listElement();

    //removendo um elemento
    pop();

    //listando os elementos
    listElement();
    return 0;
}

