#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
char *cadena[1];
char cad;
char *copy;
char *elim;

printf("ingrese cadena: ");
scanf("%[^\n]",&cadena[0]);
getchar();
printf("ingrese caracter a eliminar: ");
scanf("%c",&cad);
//printf("1");
copy=(char*)malloc(sizeof(char)*strlen(&cadena[0]));
strcpy(copy,&cadena[0]);
//printf("1");

//printf("1");
int i,j;
for(j=0;j<strlen(&cadena[0]);j++){
	if(cad==copy[j]){
	j++;
	}printf("%c",copy[j]);
}
}
