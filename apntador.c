#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
char *cadena[4];
char *concat[1];
int i=0;


printf("");


for(i;i<4;i++){

printf("Ingrese una cadena: ");
scanf("%[^\n]",&cadena[i]);
getchar();
}
for(i=0;i<4;i++){
	printf("%s \n",&cadena[i]);
}/*
//strcat(&concat[0],&cadena[1]);
strcpy(&concat[0],&cadena[1]);
printf("%s\n",&concat[0]);
strcat(&concat[0],&cadena[0]);
printf("%s\n",&concat[0]);
for(i=0;i<4;i++){
	printf("%s \n",&cadena[i]);
}
int tam;
tam=strlen(&cadena[1]);
	printf("tama¤o cadena: %d",tam);// para imprimir la ñ alt+15
char *cad;
cad=(char*)malloc(sizeof(char)*tam);
//printf("%s",cad);
strcpy(cad,&cadena[1]);
printf("\n%s",cad);

printf("\n%c",cad[1]);
*/
//subsecuencia

char *cad;
char *elim;
char *copy;
copy=(char*)malloc(sizeof(char)*strlen(&cadena[0]));
strcpy(copy,&cadena[0]);
printf("ingrese cadena a eliminar: ");
scanf("%[^\n]",&cad);
elim=(char*)malloc(sizeof(char)*strlen(&cad));

strcpy(elim,&cad);

int j;
for(j=0;j<strlen(&cad);j++){
	for(i=0;i<strlen(&copy);i++){
		if(strcmp(&cad[j],&copy[i])==1) ++i;
		printf("%c",copy[i]);
	}
//	printf("%c",copy[j]);
}


}
