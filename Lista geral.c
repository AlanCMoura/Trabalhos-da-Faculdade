#define ex9
#include <stdio.h>
#include <stdlib.h>

#ifdef ex1
int numero[2];
int calcula(int N){
	int proximo;
	numero[0] = N;
	N++;
	proximo = N;
	numero[1] = proximo;
	return proximo;	
}
int main(){
	int N;
	printf("Digite um numero:");
	scanf("%d",&N);
	printf("Sucessor: %d\n",calcula(N));
	for(int i = 0;i < 2;i++){
		printf("%d ",numero[i]);
	}
}
#endif

#ifdef ex2
float precos[5];
float reajuste(float x){
	float novopreco = x*1.09;
	return novopreco;
}
int main(){
	for(int i = 0;i < 5;i++){
		printf("Preco %d:",i);
		scanf("%f",&precos[i]);
		while(precos[i] < 0){
			printf("Valor invalido\n");
			scanf("%f",&precos[i]);
		}
	}
	for(int i = 0;i < 5;i++){
		precos[i] = reajuste(precos[i]);
	}
	printf("Valores reajustados:\n");
	for(int i = 0;i < 5;i++){
		printf("Preco %d: %f\n",i,precos[i]);
	}
}
#endif

#ifdef ex3
int numeros[5];
void cadastrar(int n){
	printf("Cadastrar numeros:\n");
	for(int i = 0;i < n;i++){
		scanf("%d",&numeros[i]); printf("\n");
	}
}
int main(){
	int N;
	printf("Digite a quantidade de numeros ate 5:\n");
	scanf("%d",&N);
	while(N <= 0 || N > 5){
		printf("Numero invalido.");
		scanf("%d",&N);
	}
	cadastrar(N);
	int maior = 0;
	for(int i = 0;i < N;i++){
		if(numeros[i] > maior){
			maior = numeros[i];
		}
	}
	printf("Maior:%d",maior);
}

#endif

#ifdef ex4
int hora_aula[5];
void cadastrar(int n){
	printf("Cadastrar numeros:\n");
	for(int i = 0;i < n;i++){
		scanf("%d",&hora_aula[i]); printf("\n");
	}
}
void calculo(float valor,float desconto,int n){
	for(int i = 0;i < n;i++){
		printf("Digite a hora/aula:");
		scanf("%d",&hora_aula[i]); printf("\n");
		float result = hora_aula[i]*valor*(1-desconto);
		printf("Salario[%d]: %f\n",i,result);
	}
}
int main(){
	float valor;
	float desconto;
	printf("Valor da hora/aula\n");
	scanf("%f",&valor);
	printf("Desconto do inss:");
	scanf("%f",&desconto);
	int N;
	printf("Digite a quantidade de hora/aula ate 5:\n");
	scanf("%d",&N);
	while(N <= 0 || N > 5){
		printf("hora/aula invalida.");
		scanf("%d",&N);
	}
	calculo(valor,desconto,N);
	
}
#endif

#ifdef ex5
int hora_aula[5];
void cadastrar(int n){
	printf("Cadastrar numeros:\n");
	for(int i = 0;i < n;i++){
		scanf("%d",&hora_aula[i]); printf("\n");
	}
}
void calculo(float desconto,int n){
	for(int i = 0;i < n;i++){
		int nivel;
		float valor;
		printf("DIgite o nivel do professor:\n");
		scanf("%d",&nivel);
		while(nivel > 3 || nivel < 0){
			printf("Nivel invalido\n");
			scanf("%d",&nivel);
		}
		if(nivel == 1){
			valor = 55;
		}else{
			if(nivel == 2){
				valor = 67;
			}else{
				if(nivel == 3){
					valor = 78;
				}
			}
		}
		printf("Digite a hora/aula:");
		scanf("%d",&hora_aula[i]); printf("\n");
		float result = hora_aula[i]*valor*(1-desconto);
		printf("Salario[%d]: %f\n",i,result);
	}
}
int main(){
	float valor;
	float desconto;
	printf("Desconto do inss:");
	scanf("%f",&desconto);
	int N;
	printf("Digite a quantidade de hora/aula ate 5:\n");
	scanf("%d",&N);
	while(N <= 0 || N > 5){
		printf("hora/aula invalida.");
		scanf("%d",&N);
	}
	calculo(desconto,N);
	
}
#endif

#ifdef ex6
int numeros[5];
void cadastrar(int n){
	printf("Cadastrar numeros:\n");
	for(int i = 0;i < n;i++){
		scanf("%d",&numeros[i]); printf("\n");
	}
	
}
void mostrar(int n){
	for(int i = 0;i < n;i++){
		if(numeros[i] % 2 == 0){
			printf("%d e'par\n",numeros[i]);
			}else{
				printf("%d e'impar\n",numeros[i]);
			}
		}
	}

int main(){
	int N;
	printf("Digite a quantidade de numeros ate 5:\n");
	scanf("%d",&N);
	while(N <= 0 || N > 5){
		printf("numero invalida.");
		scanf("%d",&N);
	}
	cadastrar(N);
	mostrar(N);
}
#endif

#ifdef ex7
float numeros[5];
void cadastrar(int n){
	printf("Cadastrar numeros:\n");
	for(int i = 0;i < n;i++){
		scanf("%f",&numeros[i]); printf("\n");
		while(n <= 0){
		printf("numero invalido.");
		scanf("%f",numeros[i]);
	}
	}
}
void mostrar(int n){
	for(int i = 0;i < n;i++){
		float calculo = numeros[i]*(1+0.1);
		printf("Reajuste[%d]: %f\n",i,calculo);
		}
	}
int main(){
	int N;
	printf("Digite a quantidade de numeros ate 5:\n");
	scanf("%d",&N);
	while(N <= 0 || N > 5){
		printf("numero invalido.");
		scanf("%d",&N);
	}
	cadastrar(N);
	mostrar(N);
}
#endif

#ifdef ex8
typedef struct aluno{
	
	int id;
	float n1,n2,n3,me,media;
	
}aluno;
aluno controle[10];
int x = -1;
aluno pesquisar(int a){
	for(int i = 0; i <= x;i++){
		if(a == controle[i].id){
		printf("ID: %d\n",controle[i].id);
		printf("ME: %.2f\n",controle[i].me);
		printf("P1: %.2f\n",controle[i].n1);
		printf("P2: %.2f\n",controle[i].n2);
		printf("P3: %.2f\n",controle[i].n3);
		printf("Media: %.2f\n\n",controle[i].media);
		if(controle[i].media >= 9){
			printf("Conceito: A APROVADO\n\n");
		}else{
			if(controle[i].media >= 7.5 && controle[i].media < 9){
			printf("Conceito: B APROVADO\n\n");
		}else{
			if(controle[i].media >= 6 && controle[i].media < 7.5){
			printf("Conceito: C APROVADO\n\n");
		}else{
			if(controle[i].media >= 4 && controle[i].media < 6){
			printf("Conceito: D REPROVADO\n\n");
		}else{
			if(controle[i].media < 4){
			printf("Conceito: E REPROVADO\n\n");
		}
		}
		}
		}
		}
		}
	}	
}
int main(){
	int opc;
	
	do{	
	if(x == -1){
		printf("Nenhum aluno cadastrado\n");
	}else{
		printf("Alunos cadastrados: %d\n",x + 1);
	}
	printf("0 - voltar\n");
	printf("1 - cadastrar\n");
	printf("2 - pesquisar\n\n");
	
	printf("Comando: ");
		scanf("%d",&opc);	printf("\n");
	switch(opc){
		case 0:
			system("cls");
			printf("Encerrando\n");
			system("cls");
			break;
		case 1:
			system("cls");
			aluno novo;
			printf("ID: ");
			scanf("%d",&novo.id); printf("\n");
			while(novo.id < 0){
				system("cls");
				printf("ID inválido\n");
				printf("ID: ");
				scanf("%d",&novo.id); printf("\n");
			}
			system("cls");
			printf("ME: ");
			scanf("%f",&novo.me); printf("\n");
			while(novo.me < 0 || novo.me > 10){
				system("cls");
				printf("Nota inválida\n");
				printf("ME: ");
				scanf("%f",&novo.me); printf("\n");
			}
			system("cls");
			
			printf("P1: ");
			scanf("%f",&novo.n1); printf("\n");
			while(novo.n1 < 0 || novo.n1 > 10){
				system("cls");
				printf("Nota inválida\n");
				printf("P1: ");
				scanf("%f",&novo.n1); printf("\n");
			}
			system("cls");
			
			printf("P2: ");
			scanf("%f",&novo.n2); printf("\n");
			while(novo.n2 < 0 || novo.n2 > 10){
				system("cls");
				printf("Nota inválida\n");
				printf("P2: ");
				scanf("%f",&novo.n2); printf("\n");
			}
			system("cls");
			
			printf("P3: ");
			scanf("%f",&novo.n3); printf("\n");
			while(novo.n3 < 0 || novo.n3 > 10){
				system("cls");
				printf("Nota inválida\n");
				printf("P3: ");
				scanf("%f",&novo.n3); printf("\n");
			}
			system("cls");
			novo.media = (novo.n1 + novo.n2*2 + novo.n3*3 + novo.me)/7;
			x++;
			controle[x] = novo;
			
			break;
		case 2:
			int cod;
			printf("Insira o ID: ");
			scanf("%d",&cod); printf("\n");
			pesquisar(cod);
			break;
			
		default:
			printf("Erro\n\n");
			break;
	}
	}while(opc != 0);
	
}

#endif

#ifdef ex9
typedef struct par{
	int n1;
	int n2;
}par;
par pares[5];
void cadastrar(int n){
	for(int i = 0;i < n;i++){
		printf("Grupo %d\n",i + 1);
		printf("n1[%d]:\n",i + 1);
		scanf(" %d",&pares[i].n1);
		printf("n2[%d]:\n",i + 1);
		scanf(" %d",&pares[i].n2);
		system("cls");
	}
}
void mostrar(int n){
	for(int i = 0;i < n;i++){
		if(pares[i].n1 % pares[i].n2 == 0 || pares[i].n2 % pares[i].n1 == 0){
			printf("Grupo %d sao multiplos\n",i + 1);
		}else{
			printf("Grupo %d nao sao multiplos\n",i + 1);
		}
	}
}
int main(){
	int N;
	printf("Digite a quantidade de grupos:\n");
	scanf("%d",&N);
	while(N <= 0 || N > 5){
		printf("numero invalido.");
		scanf("%d",&N);
}
	cadastrar(N);
	mostrar(N);
}
#endif

#ifdef ex10
float numeros[5];
void cadastrar(int n){
	printf("Cadastrar numeros:\n");
	for(int i = 0;i < n;i++){
		scanf("%f",&numeros[i]); printf("\n");
		while(n <= 0){
		printf("numero invalido.");
		scanf("%f",numeros[i]);
	}
	}
}
void mostrar(int n){
	for(int i = 0;i < n;i++){
		if(numeros[i] < 100){
			float calculo = numeros[i]*(1+0.1);
			printf("Reajuste[%d]: %f\n",i,calculo);
			}else{
				if(numeros[i] >= 100){
				float calculo = numeros[i]*(1+0.2);
				printf("Reajuste[%d]: %f\n",i,calculo);
			}
			}
		}
	}
int main(){
	int N;
	printf("Digite a quantidade de numeros ate 5:\n");
	scanf("%d",&N);
	while(N <= 0 || N > 5){
		printf("numero invalido.");
		scanf("%d",&N);
	}
	cadastrar(N);
	mostrar(N);
}
#endif


