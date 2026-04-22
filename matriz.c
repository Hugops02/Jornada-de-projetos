#include <stdio.h>

int main (){

int matA [4][4];

//população
for (int i = 0; i < 4; i++){

for (int j = 0; j < 4; j++){

scanf("%d", &matA[i][j]);
}
printf("\n");
}

//exibição da matriz
for (int i = 0; i < 4; i++){

for (int j = 0; j < 4; j++){

printf("%d", matA[i][j]);
}
printf("\n");  
}

}