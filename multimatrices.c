#include<stdio.h>
#include<stdlib.h>

int main(){
	srand(time(NULL));
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
	
	FILE *archivo;
  	archivo = fopen("taller1-2.cvs","w");
	
	float **A;
	A= (float **)malloc(af*sizeof(float *));
	for(i=0;i<af;i++){
		A[i]= (float *)malloc(ac*sizeof(float));
	}
	
	float **B;
	B= (float **)malloc(bf*sizeof(float *));
	for(i=0;i<bf;i++){
		B[i]= (float *)malloc(bc*sizeof(float));
	}
	
	float **C;
	C= (float **)malloc(af*sizeof(float *));
	for(i=0;i<af;i++){
		C[i]= (float *)malloc(bc*sizeof(float));
	}
	
	for(i=0;i<af;i++){
		for(j=0;j<ac;j++){
			float valor = 1+ rand() % (11-1);
      		A[i][j]= (float)(valor / 11.0);
		}
	}
	
	for(i=0;i<bf;i++){
		for(j=0;j<bc;j++){
			float valor = 1+ rand() % (11-1);
      		B[i][j]= (float)(valor / 3.0);
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
	
	for(i=0;i<af;i++){
		printf("\n");
		fprintf(archivo,"%s","\n");
		for(j=0;j<ac;j++){
			printf("%f2.2   ",A[i][j]);
			fprintf(archivo,"%f   ",A[i][j]);
		}
	}
	
	printf("\n\n");
	fprintf(archivo,"%s","\n\n");
	for(i=0;i<bf;i++){
		printf("\n");
		fprintf(archivo,"%s","\n");
		for(j=0;j<bc;j++){
			printf("%f2.2   ",B[i][j]);
			fprintf(archivo,"%f   ",B[i][j]);
		}
	}
	
	printf("\n\n");
	printf("\n");
	fprintf(archivo,"%s","\n\n\n");
	for(i=0;i<af;i++){
		printf("\n");
		fprintf(archivo,"%s","\n");
		for(j=0;j<bc;j++){
			printf("%f2.2   ",C[i][j]);
			fprintf(archivo,"%f   ",C[i][j]);
		}
	}
	printf("\n\n\n");
	system("PAUSE");
	
}
