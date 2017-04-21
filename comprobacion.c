#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//void comprobar();
int comprobar(char cad1[1],char cad2[1]){
	
	
	char alfa[]={' ','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','0','1','2','3','4','5','6','7','8','9'};
	
	char *cadena1, *cadena2;
	cadena1=(char*)malloc(sizeof(char)*strlen(&cad1[0]));
	cadena2=(char*)malloc(sizeof(char)*strlen(&cad2[0]));
	strcpy(cadena1,&cad1[0]);
	strcpy(cadena2,&cad2[0]);

	int i,j;
	int tam1,tam2;
	tam1=strlen(&cad1[0]);
	tam2=strlen(&cad2[0]);
	printf("%d %d",tam1,tam2);
	
	for(i=0;i<tam1;i++){
	
		for(j=0;j<37;j++){
				printf("%d ",j);
			if(cadena1[i]==alfa[j]) break;
		if(j==36){
		
			printf("uno o mas caracteres no validos");
				return 1;
			break;
		}
		}
	}
	printf("\n\n");
	for(i=0;i<tam2;i++){
	
		for(j=0;j<37;j++){
				printf("%d ",j);
			if(cadena2[i]==alfa[j]) break;
		if(j==36){
		
			printf("uno o mas caracteres no validos");
				return 1;
			break;
		}
		}
	}
	//return 0;
}//fin comprobar

int main(){
	char *cadena[2];
	printf("Cadena 1: ");
	scanf("%[^\n]",&cadena[0]);
	getchar();
	printf("Cadena 2: ");
	scanf("%[^\n]",&cadena[1]);
	getchar();
	printf("%s",&cadena[0]);
	printf("%s",&cadena[1]);	
	int res=0;
	res=comprobar(&cadena[0],&cadena[1]);
	printf("\n %d",res);

}

