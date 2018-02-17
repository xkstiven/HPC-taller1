#include <stdio.h>

int main(){
	int af,ac,bf,bc,i,j,k;
	
	printf("numero de filas matriz A:");
	scanf("%d",&af);
	printf("numero de columnas matriz A:");
	scanf("%d",&ac);
	printf("numero de filas matriz B:");
	scanf("%d",&bf);
	printf("numero de columnas matriz B:");
	scanf("%d",&bc);
	
	if (ac != bf){
		printf("Error: no es posible multimplicar estas matrices");
		return 0;
	}
	
	int A[af][ac], B[bf][bc], C[af][bc];
	
	for(i=0;i<af;i++){
		for(j=0;j<ac;j++){
			printf("escriba el valor de la matris 1 (%d,%d)-->",i+1,j+1);
			scanf("%d",&A[i][j]);
		}
	}
	
	printf("\n\n");
	for(i=0;i<bf;i++){
		for(j=0;j<bc;j++){
			printf("escriba el valor de la matris 2 (%d,%d)-->",i+1,j+1);
			scanf("%d",&B[i][j]);
		}
	}
	
	for(i=0;i<af;i++){
		for(j=0;j<bc;j++){
			C[i][j]=0;
			for(k=0;k<ac;k++){
				C[i][j]=(C[i][j]+(A[i][k]*B[k][j]));
			}
		}
	}
	
	printf("\n\n\t\t\t Matriz A");
	printf("\n");
	for(i=0;i<af;i++){
		printf("\n\t\t");
		for(j=0;j<ac;j++){
			printf("  %d",A[i][j]);
		}
	}
	
	printf("\n\n\t\t\t Matriz B");
	printf("\n");
	for(i=0;i<bf;i++){
		printf("\n\t\t");
		for(j=0;j<bc;j++){
			printf("  %d",B[i][j]);
		}
	}
	
	printf("\n\n\t\t\t Matriz resultado");
	printf("\n");
	for(i=0;i<af;i++){
		printf("\n\t\t");
		for(j=0;j<bc;j++){
			printf("  %d",C[i][j]);
		}
	}
	printf("\n");
	system("PAUSE");
	
}
