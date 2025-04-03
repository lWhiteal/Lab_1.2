#include "matrix.h"
#include <stdio.h>
#include <stdlib.h>


int main(){
    Matrix A;
    Matrix B;
    Matrix *C;
    int size;
    scanf("%d", &size);
    init_matrix(size, &A);
    create_matrix(&A);
    scanf("%d", &size);
    init_matrix(size, &B);
    create_matrix(&B);
    C = multiply_matrix(&A, &B);
    print_matrix(C);
    free_matrix(&A);
    free_matrix(&B);
    free_matrix(C);
}