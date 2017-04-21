#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int comprobar(char[],char[]);
void concatenar(char[],char[]);
void prefijo(char[],char[]);
void sufijo(char[],char[]);
void subcadena(char[],char[]);
void subsecuencia(char[],char[]);
void inversion(char[],char[]);
void potencia(char[],char[]);

unsigned int opc;


void menu(){
char *cadena;
char *aux;

char *cadena2;
int op=8,comp;

while(op==8){

comp=1;
while(comp==1){
	op=0;
//fflush(stdin);
getchar();


printf("\nIngrese cadena u: ");
scanf("%[^\n]",&aux);
getchar();
strcpy(&aux,&cadena);
//fflush(stdin);
//gets(NULL);
printf("\nIngrese cadena v: ");
scanf("%[^\n]",&cadena2);
getchar();
//fflush(stdin);

printf("%s \n%s",&cadena,&cadena2);
comp=comprobar(&cadena,&cadena2);
}
getchar();
//op=0;	
	while(op!=8){
printf("=========================================");
printf("\n|| practica 1: operaciones con cadenas ||");
printf("\n=========================================");
printf("\n\n Ingrese operacion a realizar: \n");
printf("1. Concatenar \n2. Prefijo \n3. Sufijo \n4. Subcadena \n5. Subsecuencia \n6. Inversion \n7. Potencia \n8. Cambiar cadenas \n9. Salir \n");
    scanf("%d",&op);
	   switch(op){
	   	case 1:
	   		concatenar(&cadena,&cadena2);
	   		getchar();
		break;
	   	case 2:
	   		prefijo(&cadena,&cadena2);
	   		getchar();
		break;
	   	case 3:
	   		sufijo(&cadena,&cadena2);
	   		getchar();
   		break;
	   	case 4:
	   		subcadena(&cadena,&cadena2);
	   		getchar();
		break;
	   	case 5:
	   		subsecuencia(&cadena,&cadena2);
	   	break;
	   	case 6:
	   		inversion(&cadena,&cadena2);
			getchar();
		break;
	   	case 7:
	   		potencia(&cadena,&cadena2);
	   		
	   		printf("\n\n");
	   		getchar();
   		break;
	   	case 8:
	   		
   		break;
	   	case 9:
	   		exit(0);
   		break;
	   	default:
	   		printf("ERROR: opcion invalida \n");
	   		getchar();
   		break;
	   }//fin switch
    }//fin while
  }
    
}//fin menu




void concatenar(char cad1[1], char cad2[1]){
char *concat[1];
  while(opc<1 ||opc>2){
printf("\nComo desea concatenar? \n 1.W=UV \n 2.W=VU \n");
scanf("%d",&opc);
getchar();
 
  switch(opc){
  	case 1:
	strcpy(concat[0],&cad1[0]);
	strcat(concat[0],&cad2[0]);
	printf("\nConcatenacion UV: \n%s \n",concat[0]);
	break;
    case 2:
  	  strcpy(concat[0],&cad2[0]);
	  strcat(concat[0],&cad1[0]);
	  printf("\nConcatenacion VU: \n%s \n",concat[0]);
    break;
    default:
   	printf("\nERROR: opcion incorrecta");
    break;
 }//fin switch
}//fin while
}//fin concatenar

void prefijo(char cad1[1],char cad2[1]){
	char *pre1;
	char *pre2;
	int tam1=strlen(&cad1[0]);
	int tam2=strlen(&cad2[0]);
	int num,i;
	pre1=(char*)malloc(sizeof(char)*tam1);
	strcpy(pre1,&cad1[0]);
	//printf("%d",tam1);
	pre2=(char*)malloc(sizeof(char)*tam2);
	strcpy(pre2,&cad2[0]);
	//printf("\t%d",tam2);
	while(num<0 || num>tam1 && num>tam2){
	
	printf("\nIngrese cantidad de elementos a eliminar: ");
	scanf("%d",&num);
	getchar();
	
	 if(num<0){
		printf("la cadena no puede tener menos de 0 carateres");
	}else{
	
	if(num>tam1 ){
		printf("ERROR: la cadena tiene menos caracteres\n");
	}
	if(num>tam2 ){
		printf("ERROR: la cadena tiene menos caracteres\n");
	}
	if(num>0 && num<tam1){
	  for(i=0;i<tam1-num;i++){
	  	printf("%c",pre1[i]);
	  }
	  printf("\n");
	}if(num>0 && num<tam2){
	  for(i=0;i<tam2-num;i++){
	  	printf("%c",pre2[i]);
	  }
	  printf("\n");
	}if(num==tam1){
		printf("lambda\n");
	}if(num==tam2){
		printf("lambda\n");
	}
	if(num==0){
	printf("%s \n%s",pre1,pre2);
	}
}//fin else
}//fin while
free(pre1);
free(pre2);

}//fin prefijo


void sufijo(char cad1[1],char cad2[1]){

	char *su1;
	char *su2;
	int tam1=strlen(&cad1[0]);
	int tam2=strlen(&cad2[0]);
	int num,i;
	su1=(char*)malloc(sizeof(char)*tam1);
	strcpy(su1,&cad1[0]);
	//printf("%d",tam1);
	su2=(char*)malloc(sizeof(char)*tam2);
	strcpy(su2,&cad2[0]);
	//printf("\t%d",tam2);
	while(num<0 || num>tam1 && num>tam2){
	
	printf("\nIngrese cantidad de elementos a eliminar: ");
	scanf("%d",&num);
	getchar();
	
	 if(num<0){
		printf("la cadena no puede tener menos de 0 carateres");
	}else{
	
	if(num>tam1 ){
		printf("ERROR: la cadena tiene menos caracteres\n");
	}
	if(num>tam2 ){
		printf("ERROR: la cadena tiene menos caracteres\n");
	}
	if(num>0 && num<tam1){
	  for(i=num;i<tam1;i++){
	  	printf("%c",su1[i]);
	  }
	  printf("\n");
	}if(num>0 && num<tam2){
	  for(i=num;i<tam2;i++){
	  	printf("%c",su2[i]);
	  }
	  printf("\n");
	}if(num==tam1){
		printf("lambda\n");
	}if(num==tam2){
		printf("lambda\n");
	}
	if(num==0){
	printf("%s \n%s",su1,su2);
	}
}//fin else
}//fin while
free(su1);
free(su2);
}//fin sufijo


void subcadena(char cad1[1],char cad2[1]){
	char *subcad1;
	char *subcad2;
	int pre,su,i;
	int tam1=strlen(&cad1[0]);
	int tam2=strlen(&cad2[0]);
	subcad1=(char*)malloc(sizeof(char)*tam1);
	strcpy(subcad1,&cad1[0]);
	subcad2=(char*)malloc(sizeof(char)*tam2);
	strcpy(subcad2,&cad2[0]);
	    while(pre<0 || su<0 || pre+su>tam1 && pre+su>tam2){
	
	printf("ingrese tama¤o prefijo: ");
	scanf("%d",&pre);
	getchar();
	printf("ingrese tama¤o sufijo: ");
	scanf("%d",&su);
	getchar();
	
	if(pre<0 || su<0){
		printf("ERROR: no puedes tener menos de 0 caracteres\n");
	}
	if(pre+su==tam1){
		printf("lambda\n");
	}
	if (pre+su<tam1){
		for(i=pre;i<tam1-su;i++){
			printf("%c",subcad1[i]);
		}printf("\n");
	}
	if(pre+su>tam1){
		printf("ERROR: no habria subcadena\n");
	}
	
	
	if(pre+su==tam2){
		printf("lambda\n");
	}
	if (pre+su<tam2){
		for(i=pre;i<tam2-su;i++){
			printf("%c",subcad2[i]);
		}printf("\n");
	}
	if(pre+su>tam2){
		printf("ERROR: no habria subcadena\n");
	}
}//fin while
free(subcad1);
free(subcad2);
}//fin subcadena

//agregar a subsecuencia
void subsecuencia(char cad1[1],char cad2[1]){
char *copy;
char *copy2;
char cad;
getchar();
printf("ingrese caracter a eliminar: ");
scanf("%c",&cad);
copy=(char*)malloc(sizeof(char)*strlen(&cad1[0]));
strcpy(copy,&cad1[0]);

copy2=(char*)malloc(sizeof(char)*strlen(&cad2[0]));
strcpy(copy2,&cad2[0]);

int i,j;
for(j=0;j<strlen(&cad1[0]);j++){
	if(cad==copy[j]){
	j++;
	}printf("%c",copy[j]);
}printf("\n");
for(j=0;j<strlen(&cad2[0]);j++){
	if(cad==copy2[j]){
	j++;
	}printf("%c",copy2[j]);
}printf("\n");
	
}//fin subsecuencia


void inversion(char cad1[1],char cad2[1]){

	char *ca1;
	char *ca2;
	ca1=(char*)malloc(sizeof(char)*strlen(&cad1[0]));
	ca2=(char*)malloc(sizeof(char)*strlen(&cad2[0]));
	
	strcpy(ca1,&cad1[0]);
	strcpy(ca2,&cad2[0]);
	int i;
	for(i=strlen(ca1)-1;i>=0;i--){
	   	printf("%c",ca1[i]);
	}//fin for
	
	printf("\n");
	
	for(i=strlen(ca2)-1;i>=0;i--){
	   	printf("%c",ca2[i]);
	}//fin for
	free(ca1);
	free(ca2);
	printf("\n\n");
}//fin inversion


void potencia(char cad1[1], char cad2[1]){
	char *pot1;
	char *pot2;
	pot1=(char*)malloc(sizeof(char)*strlen(&cad1[0]));
	pot2=(char*)malloc(sizeof(char)*strlen(&cad2[0]));
	float pot;
	strcpy(pot1,&cad1[0]);
	strcpy(pot2,&cad2[0]);
	printf("ingrese potencia de la cadena: ");
	scanf("%f",&pot);
	int poten,i;
	poten=(int)pot;
	  if(poten==0){
  	printf("lambda");
  }
  else{
  
	printf("que cadena desea elevar? \n1. U \n2. V \n3. UV \n4. VU\n");
	scanf("%d",&opc);
  if(poten>0){
  
	switch(opc){
		case 1:
			for(i=0;i<poten;i++){
				printf("%s",pot1);
			}
		break;
		case 2:
			for(i=0;i<poten;i++){
				printf("%s",pot2);
			}
		break;
		case 3:
			strcat(pot1,pot2);
			for(i=0;i<poten;i++){
				printf("%s",pot1);
			}
		break;
		case 4:
			strcat(pot2,pot1);
			for(i=0;i<poten;i++){
				printf("%s",pot2);
			}
		break;
		default:
			printf("ERROR: opcion no valida \n");
		break;
	}//fin switch
  }
  
  if(poten<0){

	int j;
   switch(opc){
	case 1:
	for(i=0;i<(-poten);i++){
		for(j=strlen(pot1)-1;j>=0;j--){
		   printf("%c",pot1[j]);	
		}//fin for j
	}//fin for i
	break;
	case 2:
	for(i=0;i<(-poten);i++){
		for(j=strlen(pot2)-1;j>=0;j--){
		   printf("%c",pot2[j]);	
		}//fin for j
	}//fin for i
	break;
	case 3:
		strcat(pot1,pot2);
		for(i=0;i<(-poten);i++){
		for(j=strlen(pot1)-1;j>=0;j--){
		   printf("%c",pot1[j]);	
		}//fin for j
	}//fin for i
	break;
	case 4:
		strcat(pot2,pot1);
		for(i=0;i<(-poten);i++){
		for(j=strlen(pot2)-1;j>=0;j--){
		   printf("%c",pot2[j]);	
		}//fin for j
	}//fin for i
	break;
	default:
		printf("ERROR: opcion no valida \n");
	break;	
   }
  }//fin if <0
}
free(pot1);
  free(pot2);
}//fin potencia


int comprobar(char cad1[1],char cad2[1]){
	
	
	char alfa[]={' ','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','0','1','2','3','4','5','6','7','8','9'};
	
	char *cadena1, *cadena2;
	cadena1=(char*)malloc(sizeof(char)*strlen(&cad1[0]));
	cadena2=(char*)malloc(sizeof(char)*strlen(&cad2[0]));
	strcpy(cadena1,&cad1[0]);
	strcpy(cadena2,&cad2[0]);
		int tam1,tam2;
	tam1=strlen(&cad1[0]);
	tam2=strlen(&cad2[0]);
	int i,j;
	
	for(i=0;i<tam1;i++){
	
		for(j=0;j<37;j++){
			//	printf("%d ",j);
			if(cadena1[i]==alfa[j]) break;
		if(j==36){
		
			printf("uno o mas caracteres no validos");
				return 1;
			break;
		}
		}
	}
	
	for(i=0;i<tam2;i++){
	
		for(j=0;j<37;j++){
			//	printf("%d ",j);
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



