#include <stdio.h>

int main()
{
  printf("Bienvenido, este es un programa para calcular 3 conjuntos\n");

  int size [3];

  for(int i=0; i<3; i++)
  {
    printf("\nPara el conjunto %d\n", (i+1));
    printf("Teclea su número de elementos\n");
    scanf("%d", &size[i]);
  }

  char conjunto1 [size[0]];
  char conjunto2 [size[1]];
  char conjunto3 [size[2]];

  for(int i=0; i<3; i++)
  {
    printf("\nPara el conjunto %d:\n", (i+1));
    for(int j=0; j<size[i]; j++)
    {
      printf("Introduce un elemento para el conjunto %d\n", (i+1));
      switch (i) {
        case 0:
          scanf("%c", &conjunto1[j]);
          printf("%c", conjunto1[j]);
        case 1:
          scanf("%c", &conjunto2[j]);
          printf("%c", conjunto2[j]);
        case 2:
          scanf("%c", &conjunto3[j]);
          printf("%c", conjunto3[j]);
      }
    }
  }
}
