#include <iostream>

using namespace std;

int const MAX = 5;

int frente, tras;
int fila[MAX];

void criar(){ // inicializar fila
    frente = 0;
    tras = -1;
}

bool fila_Vazia(){
    if(frente>tras){
        cout << "\n\nFila vazia\n\n";
        return true;
    }else{
        return false;
    }
}

bool fila_Cheia(){
    if(tras==MAX-1){
        cout << "\n\nFila cheia\n\n";
        return true;
    }else{
        return false;
    }
}

bool enfileirar(int valor){ // insere um elemento no fim da fila
    if(fila_Cheia()){
        return false;
    }else{
        tras++;
        fila[tras] = valor;
        return true;
    }
}

bool desenfileirar(int valor){ // remover um elemento no início da fila.
    if(fila_Vazia()){
        return false;
    }else{
        valor=fila[frente];
        frente++;
        cout << "\n\nValor retirado: " << valor << endl;
        return true;
    }
}

bool exibir_Inicio(int valor){ // exibe o elemento do início da fila.
    if(fila_Vazia()){
        return false;
    }else{
        valor=fila[frente];
        cout << "\n\nValor no inicio: " << valor << endl;
        return true;
    }
}

void exibir_Qtd(){
    cout << "\n\nElementos na fila: " << (tras-frente)+1;
}

bool esvaziar(){
    if(fila_Vazia()){
        return false;
    }else{
        for(int i=0; i<=tras; i++){
            cout << "\n\nValor retirado: " << fila[frente];
            frente++;
        }
        return true;
    }
}

int main()
{
    int valor;

    criar();
    enfileirar(3);
    enfileirar(5);
    enfileirar(7);
    exibir_Inicio(valor);

    return 0;
}
