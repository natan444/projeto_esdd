#include"lib.h"

#define TAM 1000000
void selection(int arr[], int tam){
    int i,j,pos_menor,elemento_auxiliar;

    for ( i = 0; i < tam; i++)
    {
        pos_menor=i;
        for ( j = i+1; j < tam; j++)
        {
            if (arr[j]< arr[pos_menor])
            {
                pos_menor=j;
            }
        }
        elemento_auxiliar=arr[i];
        arr[i]=arr[pos_menor];
        arr[pos_menor]=elemento_auxiliar;

    } 
}

void insetion(int arr[],int tam){
    int i,j,elemento_auxiliar;
    
    for ( i = 1; i < tam; i++)
    {
        elemento_auxiliar=arr[i];

        for ( j = i-1; j >=0 && arr[j] < elemento_auxiliar; j--)
        {
            arr[j+1]= arr[j];
        }
        arr[j+1]=elemento_auxiliar;
    }
}

void bubble(int arr[], int tam){
    int i,j,elemento_auxiliar;
    int trocou=true;

    for ( i = 0; i < tam && trocou; i++){
        trocou=false;
        for ( j = 0; j < tam-(1+1); j++){
            if (arr[j] > arr[j +1])
            {
                elemento_auxiliar=arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= elemento_auxiliar;
                trocou=true;
            } 
        }   
    } 
}
void intercala(int colecao[], int inicio, int fim, int meio){
	int pos_livre, inicio_arquivo1, inicio_arquivo2, i;
	int arquivo_aux[TAM];
	inicio_arquivo1 = inicio;
	inicio_arquivo2 = meio + 1;
	pos_livre = inicio;
	while(inicio_arquivo1 <= meio && inicio_arquivo2 <= fim){
		if(colecao[inicio_arquivo1] <= colecao[inicio_arquivo2]){
			arquivo_aux[pos_livre] = colecao[inicio_arquivo1];
			inicio_arquivo1 += 1;
		} 
		else
		{
			arquivo_aux[pos_livre] = colecao[inicio_arquivo2];
			inicio_arquivo2 += 1;
		}
		pos_livre += 1;
	}
	for(i=inicio_arquivo1; i<= meio; i++, pos_livre++){
		arquivo_aux[pos_livre] = colecao[i];
	}
	for(i=inicio_arquivo2; i<= fim; i++, pos_livre++){
		arquivo_aux[pos_livre] = colecao[i];
	}
	for(i=inicio; i <= fim; i++){
		colecao[i] = arquivo_aux[i];
	}
}
void merge(int colecao[], int inicio, int fim){
	int meio;
	if(inicio < fim){
		meio = (inicio + fim) / 2;
		merge(colecao, inicio, meio);
		merge(colecao, meio+1, fim);
		intercala(colecao, inicio, fim, meio);
	}
}
void carrega_vetor_aleatorio(int colecao[], int tamanho, int qtd_digitos){
	int i, digitos;
	
	for(i=1, digitos = 10; i < qtd_digitos; i++){
		digitos *= 10;
	}
	
	srand( (unsigned) time(NULL) );
	for(i=0; i < tamanho; i++){
		colecao[i] = rand() % digitos;
	}
	
}
void carrega_vetor_ordenado(int colecao[], int valor_inicial, int tamanho){
	int i;
	srand( (unsigned) time(NULL) );
	for(colecao[0] = valor_inicial, i=1; i<tamanho; i++){
		colecao[i] = colecao[i-1] + (rand() % 10);
	}
}

void imprime_vetor(int colecao[], int tamanho){
	int i=0;
	for(i=0; i < tamanho; i++){
		printf("%d, ", colecao[i]);
	}
	printf("\n");
}
