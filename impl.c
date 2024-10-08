#include"lib.h"

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
