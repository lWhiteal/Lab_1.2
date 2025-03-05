#include <stdio.h>


typedef struct{
    int size;
    float **data;
}Matrix;


void init_matrix(int size, int *data){
    data = (int**)malloc(size * sizeof(int*));

    for (int i = 0; i < size; i++) {
        data[i] = (int*)malloc(size * sizeof(int));


}

void* create_matrix(int size, Matrix* m){
    
    for(int i; i < size; i++){    
        for(int j; j < size; j++){
            scanf("%f", m->data[i][j]);
        }
    
    }
}