#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.141592
int main(void){
	
    int datos[128], realW[128], imagW[128], realK[128], imagK[128], paresA[128], paresB[128], imparesA[128], imparesB[128];
    float arguW[128];
    int i, k, n;
    
    printf("Numero de digitos para la serie (potencia de 2): ");
    scanf("%d",&n);
    
    for (i=0; i<=(n-1); i++){
      printf("Ingresar el valor de la serie %d: ",(i+1));
      scanf("%d",&datos[i]);
    }

    if(n==1){
        return datos[i];
    }
    
    for (i=0; i<=(n-1); i++){
       arguW[i]=(-2*PI)/i;
       realW[i]=cos(arguW[i]);
       imagW[i]=sin(arguW[i]);
       if ((i%2)==0){
            paresA[i]=datos[i];
            paresB[i]=datos[i];
        }
        else {
            imparesA[i]=datos[i];
            imparesB[i]=datos[i];
        }
    }

    for (k=0; k<=(n-1); k++){
        printf("El complejo del %d dato es: (%d, %di)  \n",(k+1), realW[k], imagW[k]);
    }
    
    return 0;
    
}
