#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<stdbool.h>




void gerar_crescente(int arr[], int tam);
void gerar_decrescente(int arr[], int tam);
void bubble(int arr[], int tam);
void selection(int arr[], int tam);
void insetion(int arr[],int tam);
void intercala(int[], int, int, int);
void merge(int colecao[], int incio,int fim );
void partition(int x[], int lb, int ub, int *j);
void quick(int arr, int lb, int ub);
void carrega_vetor_aleatorio(int colecao[], int tamanho, int qtd_digitos);
void carrega_vetor_ordenado(int colecao[], int valor_inicial, int tamanho);
void imprime_vetor(int colecao[], int tamanho);
