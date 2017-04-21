#include<stdio.h>
#include<stdio.h>
#include<string.h>

int main(){
char *cadena[1];
char *cad;
char *copy;
char *elim;

printf("ingrese cadena: ");
scanf("%[^\n]",&cadena[0]);
printf("ingrese cadena a eliminar: ");
scanf("%[^\n]",&cad);

copy=(char*)malloc(sizeof(char)*strlen(&cadena[0]));
strcpy(copy,&cadena[0]);

elim=(char*)malloc(sizeof(char)*strlen(&cad));
strcpy(elim,&cad);

for(j=0;j<strlen(&cad);j++){
	for(i=0;i<strlen(&copy);i++){
		if(srtcmp(&cad[j],&copy[i])==1) i++;
		printf("%c",copy[i]);
	}
}
}
