#include <stdio.h>
#include <stdlib.h>

int main(){
	//definimos algunas variables necesarias para el algoritmo
    int n=2;
    int A[n][n], B[n][n];
    int C[n][n];
    int i, j, k;
    int S1, S2, S3, S4, S5, S6, S7, S8, S9, S10;
    int P1, P2, P3, P4, P5, P6, P7;

    //llenamos las matrices
	for(i=0; i<n; i++){
        for(j=0; j<n; j++){
			A[i][j] = rand()%10;
			B[i][j] = rand()%10;
		}
    }
    
	//definimos las siguientes matrices destacadas
    S1 = B[0][1] - B[1][1];
    S2 = A[0][0] + A[0][1];
    S3 = A[1][0] + A[1][1];
    S4 = B[1][0] - B[0][0];
    S5 = A[0][0] + A[1][1];
    S6 = B[0][0] + B[1][1];
    S7 = A[0][1] - A[1][1];
    S8 = B[1][0] + B[1][1];
    S9 = A[0][0] - A[1][0];
    S10 = B[0][0] + B[0][1];

	//con dichas matrices, y los componentes de las matrices originales definimos las siguientes multiplicaciones
    P1 = A[0][0]*S1;
    P2 = S2*B[1][1];
    P3 = S3*B[0][0];
    P4 = A[1][1]*S4;
    P5 = S5*S6;
    P6 = S7*S8;
    P7 = S9*S10;

	//con las multiplicaciones, podemos sumarlas y restarlas para obtener las componentes de nuestra matriz resultante
    C[0][0]=P5+P4-P2+P6;
    C[0][1]=P1+P2;
    C[1][0]=P3+P4;
    C[1][1]=P5+P1-P3-P7;

    printf("La matriz A resultante es:\n");
    for (i=0; i<n; i++){
      for (j=0; j<n; j++){
        printf(" %d ", A[i][j]);
      }
      printf("\n");
    }

    printf("La matriz B resultante es:\n");
    for (i=0; i<n; i++){
      for (j=0; j<n; j++){
        printf(" %d ", B[i][j]);
      }
      printf("\n");
    }

    printf("La matriz C resultante es:\n");
    for (i=0; i<n; i++){
      for (j=0; j<n; j++){
        printf(" %d ", C[i][j]);
      }
      printf("\n");
    }
}
