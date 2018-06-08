//
// Created by guilherme on 08/06/18.
//

#include <cstdlib>

// Supondo que o ponteiro N está referenciando a memória de uma variável inteira X, preencha a
// função abaixo para que ela incremente o valor da variável X "num" vezes
// Ex: X=10 e num=20  => Depois da função incrementa, X conterá o valor 30.
void incrementa(int * N, int num){
    *N+=num;
}
// Troque os valores das variáveis apontadas pelos ponteiros A e B
void swap1(int *A, int *B){
    int aux=*A;
    *A=*B;
    *B=aux;
}
// Troque os valores entre a variável apontada pelo ponteiro A e a variável referenciada por B
void swap2(int *A, int &B){
    int aux=*A;
    *A=B;
    B=aux;
}

// Calcule a soma de x e y e coloque o resultado na variável apontada pelo ponteiro soma.
// Depois disso, calcule x - y e coloque o resultado na variável referenciada por subt.
void calc (int x, int y, int *soma, int &subt){
    *soma = x+y;
    subt = x-y;
}

// Retorne o ENDEREÇO da variável do vetor que contém a primeira ocorrência do valor da
// variável elem.
// Se não existir, retorne NULL.
int * find ( int *vet, int tam, int elem){
    for( int i=0; i<tam; i++ ){
        if(vet[i]==elem) return &vet[i];
    }
    return NULL;
}

/*
 * A variável inicio representa o inicio de um vetor de inteiros (endereço de memória) e fim informa a
 * posição do último elemento desse vetor (endereço da última variável do vetor).
 * Você deve retornar o tamanho do vetor (quantidade de elementos no vetor).
 */
int qual_tamanho(int *inicio, int *fim){
    int cont=0;
    while(inicio != fim){
        cont++;
        inicio++;
    }
    return cont+1;
    return 0;
}

// Implemente uma função que adiciona a string strb ao final da string stra.
// Você não pode ultrapassar a quantidade de caracteres (int max) que a string stra pode receber!
// EXEMPLO:
// stra="Hello " e strb="World" e max = 10 elementos, então a string retornada seria "Hello Worl" pois o
// espaço também conta.
//
char * append( char *stra, char*strb, int max){
    return stra;
}

/*
 *     ALOCACAO DINAMICA DE VETORES
 */

/* Crie uma função que clona uma string str e a retorna. Você deve então alocar memória dinamicamente para essa string clonada. Além disso, você deve colocar em tam o tamanho da quantidade de memoria que foi alocada em bytes.
   Por fim, retorne o endereço da string clone.
 */
char * strclone (char *str, int *tam)
{
    return str; //Atenção: Deve-se retornar o endereço da string clone e não da string original "str".
}

/*
 * Crie uma nova string para armazenar o valor da string stra concatenada com o valor da string strb.
 * Retorne a nova string, que deve ter sido alocada dinamicamente, e na variável apontada pelo ponteiro tam coloque a quantidade de bytes que foi necessária alocar para a nova string.
 */
char * newcat (char *stra, char *strb, int *tam){

    return stra;
}

/*
 * Retorne a substring da string texto dada pelos índices inicio e fim.
 * A substring retornada deve ser alocada dinamicamente e a quantidade de bytes da memória que foi necessária deve ser
 * colocada na variável apontada pelo ponteiro tam.
 *
 * Ex: subst("hoje vou pro jogo", 5, 7, &tam);
 *     A substring a ser retornar é "vou" e o valor da variável apontada por tam deve ser 4.
 */
char * subst(char *texto, int inicio, int fim, int *tam) {

    return texto;
}

/* Crie um novo vetor apenas com os números que são menores que a média
 * do vetor passado.
 * Coloque na variável apontada pelo ponteiro tam_novo o tamanho do novo vetor criado
 * e retorne esse vetor, que deve ter sido alocado dinamicamente.
 */
int * new_vetor_menores(int *vet, int tam, int *tam_novo){

    return vet;
}

/*
 *      UTILIZANDO PONTEIRO PARA STRUCTS
 */


struct Ponto{
    int x;
    int y;
};

// Atribua os valores de um ponto com os valores das variáveis X e Y
void set_ponto( Ponto * p, int X, int Y){

}


// Troque todos os valores dos campos dos pontos p e q
void swap_ponto(Ponto * p, Ponto * q){

}

// Crie uma funcao que retorne a distancia entre dois pontos
float distancia_pontos(Ponto *a, Ponto *b){
    return 0;
}

struct Circulo{
    Ponto p;
    float raio;
};

/* Crie agora uma funcao que receba um vetor de pontos e me retorne o
 * índice do ponto mais distante do centro de um circulo tambem dado
 * como parametro
 */
int maior_distancia(Ponto *pontos, int tam, Circulo *c){
    return 0;
}

/*
 * quad[0] = true se x e y não-negativos
 * quad[1] = true se x não-negativo e y não-positivo
 * quad[2] = true se x não-positivo e y não-positivo
 * quad[3] = true se x não-positivo e y não-negativo
 * se x = 2 e y = 0, entao quad[0] e quad[1] devem ser true pois o ponto
 * esta na intercessao dos dois quadrantes
 */
struct Quadrante{
    bool quad[4];
};

// Zerar (colocar false) todos os valores do vetor de bool do Quadrante
void zerar_quad(Quadrante *q){

}

// Colocar em Quadrante 'q' os valores booleanos referentes ao ponto 'p'.
// Ex: Se 'p' está no quadrante 0 ('p' tem as coordenadas x e y não-negativas), então quad[0] da variável 'q' tem que ser true
void quais_quadrantes( Ponto p, Quadrante *q){

}

/* Dados um vetor de pontos de tamanho tam, contar quantos pontos
 * aparecem no quadrante passado por parametro e retornar essa
 * quantidade. Use a função quais_quadrantes
 */
int contar_localizando( Ponto *pontos, int tam, int quadrante){

    return 0;
}
/*
 *      ALOCACAO DINAMICA DE STRUCTS
 */

Ponto * cria_ponto(int X, int Y){
    return NULL;
}

/*
 * Retorne um vetor de pontos criados a partir de dois vetores X e Y de
 * mesmo tamanho passados como parametros. O vetor de pontos terá de
 * ter o mesmo tamanho dos vetores auxiliares e saiba que seu vetor terá
 * de ser alocado dinamicamente.
 */
Ponto * cria_vetor_pontos(int *vet_X , int *vet_Y, int tamanho ){
    return NULL;
}

struct Aluno
{
    char *nome;
    int idade;
    float peso;
};

// Crie dinamicamente um registro Aluno e atribua os valores de seus campos com os valores passados como parâmetro.
Aluno * cria_aluno(char *nome, int idade, float peso){
    return NULL;
}

// Retorne a soma das idades dos alunos.
int soma_idade_alunos(Aluno * alunos, int tam){
    return 0;
}

// Retorne a referencia para o aluno mais velho do vetor alunos.
Aluno * aluno_mais_velho(Aluno * alunos, int tam){
    return NULL;
}

struct Poligono{
    Ponto *p;
    int tam;
};

/*
 * Crie um novo poligono e o vetor de pontos de acordo com o tamanho tam passado
 * e retorne esse poligono. Inicialize todos os pontos do vetor com x = 0 e y = 0.
 */
Poligono * novo_poligono(int tam){
    return NULL;
}

/*
 *  Questões que envolvem vetor de vetores
 */

// Ordene um vetor de strings, sendo que cada caráter está em minúsculo.
void sort_string( char vet[], int tam){

}
/*
 * Agora ordene com maiusculas e minusculas. Caso duas letras sejam
 * iguais mas de tamanhos diferentes, a maior dever ficar à direita,
 * Ex: CasA >> aACs, cabriItA >> aAbciIrt;
 */

void sort_string_maius_minus( char vet[], int tam){

}



// Procure o menor valor do vetor "vet" e armazene na variável apontada pelo ponteiro menor
void find_menor(int *vet, int tam, int *menor){

}

/*
 * A unica forma de retornar um endereço atraves de um parametro é passando o endereço de um ponteiro, saiba tambem que nesse vetor só existem valores distintos. Encontre o menor e o
maior valor do vetor "vet" e armazene os endereços das variáveis desses valores nos ponteiros
end_menor e end_maior, respectivamente.
 */
void find_extremos(int *vet, int tam, int **end_menor, int **end_maior){

}


/*
 * Receba um texto com palavras separadas por espaço e retorne um vetor
 * de inteiros alocados dinâmicamente. A quantidade de elementos do
 * vetor de inteiros é igual a quantidade de palavras e um elemento
 * informa quantas letras contém naquela palavra. Na variável referenciada por tam, deve-se
 * colocar a quantidade de palavras encontradas.
 *
 * Ex: A frase "Hello World My Friends!" deve gerar o vetor com os seguintes valores {5,5,2,8}.
 */
int * contar_palavras(char *texto, int &tam){
    return NULL;
}

/*
 * Crie um vetor de strings que armazene uma palavra do texto por linha.
 * Cada linha deve ter apenas o espaco necessário de memoria para
 * armazenar a palavra.
 * A string texto contém apenas letras e espaços.
 * Retorne esse vetor de strings criado.
 */
char ** make_matriz(char *texto){
    return NULL;
}

/*
 * Retorne um vetor de endereços com os endereços de todos os elementos
 * que são menores que 10 no vetor "vet".
 */
int ** end_menores_10(int *vet, int tam){
    return NULL;
}


