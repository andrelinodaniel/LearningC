#include <stdio.h>
#include <stdbool.h> 
#include <stdlib.h> 
#define MAXTAM 10


struct carro {
    char modelo[50];
    int ano;
    float preco;
};

struct carro pilha[MAXTAM], S[MAXTAM];
int topo , topo2; 
bool inicializado = false;


void inicializar() {
    if (!inicializado) {
        topo = -1;
        topo2 = -1;
        printf("Inicializado com sucesso!\n");
        inicializado = true;
    } else {
        printf("Pilha ja foi inicializada\n");
    }
}


bool isNull() {
    return topo == -1;
}


bool isFull() {
    return topo == (MAXTAM - 1);
}


void insert() {
    if (isFull()) {
        printf("\nPilha esta cheia!\n");
    } else {
        struct carro c;
        printf("\nCadastro carro:\n");
        printf("Digite o modelo: ");
        fgets(c.modelo, 50, stdin);
        printf("Digite o ano: ");
        scanf("%d", &c.ano);
        getchar();

        topo++;
        pilha[topo] = c;
        printf("Item adicionado com sucesso!\n");
    }
}

void removeCar() {
    if (isNull()) {
        printf("\nPilha esta vazia!\n");
    } else {
        topo2++;
        S[topo2] = pilha[topo];
        pilha[topo] = (struct carro){};
        topo--;
        printf("Item removido com sucesso!\n");
    }
}

void verifytopo() {
    if (isNull()) {
        printf("Pilha esta vazia!\n");
    } else {
        printf("Modelo: %s\n", pilha[topo].modelo);
        printf("Ano: %d\n", pilha[topo].ano);
        printf("Modelo (S): %s\n", S[topo2].modelo);
        printf("Ano (S): %d\n", S[topo2].ano);
    }
}

int main() {
    int op;
    carro c;

    do {
    	system("cls");
        printf("--Estacionamento--\n\n");

        if (!inicializado) {
            printf("1.Inicializar\n");
        }

        printf("2.Adicionar\n");
        printf("3.Remover\n");
        printf("4.Verificar topo\n");
        printf("0.Sair\n");
        scanf("%d", &op);
        getchar(); 

        switch (op) {
            case 1:
            	system("cls");

                inicializar();
                break;
            case 2:
            	system("cls");

                insert();
                break;
            case 3:
            	system("cls");
                removeCar();
                break;
            case 4:
            	system("cls");

                verifytopo();
                break;
            case 0:
            	system("cls");

                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (op != 0);

    return 0;
}

