#include <stdio.h>
#include <stdlib.h>


typedef struct {
    int size;
    float **data;
} Matrix;

void init_matrix(int size, Matrix *m) {
    m->size = size;
    m->data = (float**)malloc(size * sizeof(float*));

    for (int i = 0; i < size; i++) {
        m->data[i] = (float*)malloc(size * sizeof(float));
    }
}

void create_matrix(Matrix *m) {
    for (int i = 0; i < m->size; i++) {
        for (int j = 0; j < m->size; j++) {
            printf("Enter element %d, %d: ", i, j);
            scanf("%f", &m->data[i][j]);
        }
    }
}

Matrix* sum_matrix(Matrix *A, Matrix *B){
if (A->size == B->size){
    Matrix *C = malloc(sizeof(Matrix));
    init_matrix(A->size, C);
    for (int i = 0; i < A->size; i++) {
        for (int j = 0; j < A->size; j++){
            C->data[i][j] = A->data[i][j] + B->data[i][j];
    }
    }
    return C;
}
else{
    printf("The sizes of the matrices must match");
    return NULL;
}
}

Matrix* multiply_matrix(Matrix *A, Matrix *B){
    if (A->size == B->size){
        Matrix *C = malloc(sizeof(Matrix));
        init_matrix(A->size, C);
        for (int i = 0; i < A->size; i++){
            for (int j = 0; j < A->size; j++){
                C->data[i][j] = 0;
            }
        }
        for (int i = 0; i < A->size; i++) {
            for (int j = 0; j < A->size; j++){
                for (int k = 0; k < A->size; k++){
                    C->data[i][j] += A->data[i][k] * B->data[k][j];
                }
            }
        }
        return C;
    }
    else{
        printf("The sizes of the matrices must match\n");
        return NULL;

    }
}

void multiply_matrix_digit(Matrix *m, float x) {
    for (int i = 0; i < m->size; i++) {
        for (int j = 0; j < m->size; j++) {
            m->data[i][j] = m->data[i][j] * x;
        }
    }
    
}

Matrix* AddLinearCombination(Matrix* matrix, int rowIndex, void* alhpas){
    

}

void print_matrix(Matrix *m){
    for (int i = 0; i < m->size; i++) {
        for (int j = 0; j < m->size; j++){
            printf("%f ", m->data[i][j]);
    }
    printf("\n");
    }
}

void free_matrix(Matrix *m){
    int size;
    size = m->size;
    for (int i = 0; i < size; i++) {
        free(m->data[i]);
    }
    free(m->data);
}
