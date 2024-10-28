#include <stdio.h>

int main(){
	
	float mat[5][10], menor;
	int coluna, indlin, indcol;
	
	for(indlin=0; indlin<5; indlin++){
		for(indcol=0; indcol<10; indcol++){
			
			printf("Digite o elemento [%d][%d] da Matriz: ", indlin+1, indcol+1);
			scanf("%f", &mat [indlin][indcol]);
		}
	}
	
	menor = mat[0][0];
	coluna=0;
	
	for(indlin=0; indlin<5; indlin++){
		for(indcol=0; indcol<10; indcol++){
			
			if(mat[indlin][indcol]<menor){
				menor=mat[indlin][indcol];
				coluna=indcol;
			}
		}
	}
	
	
	printf("\n\n Exibe toda coluna que contem o menor elemento da Matriz \n\n");
	for(indlin=0; indlin<5; indlin++){
		printf("%.0f\n", mat[indlin][coluna]);
	}
	
	return 0;	
 
}
