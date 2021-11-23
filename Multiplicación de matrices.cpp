#include <stdio.h>
#include <stdlib.h>

void SQUARE_MATRIX_MULTIPLY(int A[2][2], int B[2][2]){
    int i, j, k, A_rows, n;
    
	//hacemos la peticion y lectura del tamano de las matrices cuadradas
	printf("**********Multiplicacion de matrices cuadradas**********\n\nIntroduzca el numero de filas de las matrices:\n");
	scanf("%d", &A_rows);
	n = A_rows;
	
	//llenamos las matrices
	for(i=0; i<n; i++){
        for(j=0; j<n; j++){
			A[i][j] = rand()%5;
			B[i][j] = rand()%5;
		}
    }
    printf("La matriz A resultante es:\n");
	for(i=0; i<A_rows; i++){
        for(j=0; j<A_rows; j++){
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	printf("La matriz B resultante es:\n");
	for(i=0; i<A_rows; i++){
        for(j=0; j<A_rows; j++){
			printf("%d ", B[i][j]);
		}
		printf("\n");
	}
	
	//realizamos la multiplicacion de matrices
	int C[n][n];
	for(i=0; i<n; i++){
        for(j=0; j<n; j++){
			C[i][j]=0;
			for(k=0; k<n; k++){
                C[i][j]= C[i][j] + A[i][k]*B[k][j];
			}
		}
	}
	printf("La matriz resultante es:\n");
	for(i=0; i<A_rows; i++){
        for(j=0; j<A_rows; j++){
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int A[2][2], B[2][2];

	//llamamos la funcion que hara el proceso del programa
	SQUARE_MATRIX_MULTIPLY(A, B);

	system("PAUSE");
	return 0;
}
