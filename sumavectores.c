#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
     
     
int main(){
  int longitud=0;

  printf("introduce la longitud de los vectores\n");
  scanf("%d",&longitud);
     
  float* vect1;
  float* vect2;
  float* vect3;
  int i;

  vect1 = (float*)malloc(longitud*sizeof(float));
  vect2 = (float*)malloc(longitud*sizeof(float));
  vect3 = (float*)malloc(longitud*sizeof(float));
  srand(time(NULL));
  FILE *archivo;
  archivo = fopen("taller1.cvs","w");
  for(i=0;i<longitud;i++){
  
      float valor = 1+ rand() % (11-1);
      vect1[i]= (float)(valor / 11.0);
      fprintf(archivo,"%f",vect1[i]);
      fprintf(archivo,"%s"," ");

      }
    fprintf(archivo,"%s","\n");

  for(i=0;i<longitud;i++){

      float valor = 1+ rand() % (11-1);
      vect2[i]= (float)(valor / 11.0);
      fprintf(archivo,"%f",vect2[i]);
      fprintf(archivo,"%s"," ");
        }
    fprintf(archivo,"%s","\n");

  printf("******la suma de los vectores es:****\n");

  for(i=0;i<longitud;i++){
    vect3[i]=vect1[i]+vect2[i];
    printf("posicion %d -->%2.2f\n",i,vect3[i]);
    fprintf(archivo,"%f",vect3[i]);
    fprintf(archivo,"%s"," ");
        }
	system("PAUSE");
  return 0;
}
