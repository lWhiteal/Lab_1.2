#include "matrix.h"
#include <stdio.h>
#include <stdlib.h>


int main(){
    Matrix matrix;
    int size;
    scanf("%d", &size);
    init_matrix(size, &matrix);
    create_matrix(&matrix);
    multiply_matrix(&matrix, 10.0);
    print_matrix(&matrix);
    free_matrix(&matrix);
    
}