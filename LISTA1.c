#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct aluno{
	
	int id;
	float n1,n2,n3,me,media;
	
}aluno;
aluno controle[10];
int x = -1;

aluno pesquisar(int x);
void ex1();
void ex2();
void ex3();
void ex4();
void ex5();
void ex6();
void ex7();
void ex8();
void ex9();
void ex10();
void ex11();
void ex12();

int main(){
	setlocale(LC_ALL, "Portuguese");
	int op;
	
	do{
		printf("01 - Exercício 01\n");
		printf("02 - Exercício 02\n");
		printf("03 - Exercício 03\n");
		printf("04 - Exercício 04\n");
		printf("05 - Exercício 05\n");
		printf("06 - Exercício 06\n");
		printf("07 - Exercício 07\n");			
		printf("08 - Exercício 08\n");
		printf("09 - Exercício 09\n");
		printf("10 - Exercício 10\n");
		printf("11 - Exercício 11\n");
		printf("12 - Exercício 12\n");
		printf("100 - clear\n");
		
		printf("Comando: ");
		scanf("%d",&op);	printf("\n");
		
		switch(op){
			case 100:
				system("cls");
				break;
			case 1:
				system("cls");
				ex1();
				break;
				
			case 2:
				system("cls");
				ex2();
				break;
			
			case 3:
				system("cls");
				ex3();
				break;
				
			case 4:
				system("cls");
				ex4();	
				break;
				
			case 5:
				system("cls");
				ex5();	
				break;
			
			case 6:
				system("cls");
				ex6();	
				break;
			
			case 7:
				system("cls");
				ex7();	
				break;
			
			case 8:
				system("cls");
				ex8();	
				break;
			
			case 9:
				system("cls");
				ex9();	
				break;
				
			case 10:
				system("cls");
				ex10();	
				break;
				
			case 11:
				system("cls");
				ex11();	
				break;
			
			case 12:
				system("cls");
				ex12();	
				break;
				
			default:
				printf("Erro\n\n");
				
				break;				
		}	
		
	}while(op != 0);
	
	return 0;
}	

void ex1(){
	int n,suc,ant;
	printf("Escolha um numero: ");
	scanf("%d",&n);  printf("\n");
	suc = n++;
	ant = n--;
	printf("Antecessor: %d\n",ant);
	printf("Sucessor: %d\n\n",suc);
	
}

void ex2(){
	float v,rj,vf;
	int tipo;
	printf("Digite um valor: ");
	scanf("%f",&v); printf("\n");
	while(v < 0){
		system("cls");
		printf("Valor inválido\n");
		printf("Digite um valor: ");
		scanf("%f",&v); printf("\n");
	}
	system("cls");
	rj = v*0.1;
	printf("Reajuste positivo(1) ou negativo(2)?\n");
	scanf("%d",&tipo);
	system("cls");
	if(tipo == 1){
		vf = v + rj;
		printf("Valor reajustado: %.2f",vf);
	}else{
		if(tipo == 2){
		vf = v - rj;
		printf("Valor reajustado: %.2f",vf);
	}else{
		printf("\nPor favor, digite positivo ou negativo\n");
		}
	
	}
	
}

void ex3(){
	float p,d,pf;
	system("cls");
	printf("Informe o preço do produto: ");
	scanf("%f",&p); printf("\n");
	while(p < 0){
		system("cls");
		printf("Valor inválido\n");
		printf("Informe o preço do produto: ");
		scanf("%f",&p); printf("\n");
	}
	system("cls");
	d = p*0.09;
	pf = p + d;
	system("cls");
	printf("Preco final: R$ %.2f \n\n",pf);
}

void ex4(){
	float duracao,horas,aulas,ha,sal,inss,desc;
	
	printf("Quanto dura uma aula?\n");
	scanf("%f",&duracao);
	while(duracao < 0){
		system("cls");
		printf("Valor inválido\n");
		printf("Quanto dura uma aula?\n");
		scanf("%f",&duracao);
	}
	system("cls");
	
	printf("Quantas aulas foram dadas?\n");
	scanf("%f",&aulas);
	while(aulas < 0){
		system("cls");
		printf("Valor inválido\n");
		printf("Quantas aulas foram dadas?\n");
		scanf("%f",&aulas);
	}
	system("cls");
	
	printf("Quanto custa a hora/aula?\n");
	scanf("%f",&ha);
	while(ha < 0){
		system("cls");
		printf("Valor inválido\n");
		printf("Quanto custa a hora/aula?\n");
		scanf("%f",&ha);
	}
	system("cls");
	
	printf("Insira o desconto do INSS(%%): \n");
	scanf("%f",&inss);
	while(inss < 0){
		system("cls");
		printf("Valor inválido\n");
		printf("Insira o desconto do INSS(%%): \n");
		scanf("%f",&inss);
	}
	system("cls");
	horas = duracao*aulas/60;
	sal = horas*ha;
	desc = inss/100*sal;
	sal = horas*ha - desc;
	
	printf("Salario líquido: R$%.2f\n\n",sal);
}

void ex5(){
	float fabrica,lucrop,impostop,lucro,imposto,final;
	printf("Preço de fabrica do veiculo: R$");
	scanf("%f",&fabrica); printf("\n");
	while(fabrica < 0){
		system("cls");
		printf("Valor inválido\n");
		printf("Preço de fabrica do veiculo: R$");
		scanf("%f",&fabrica); printf("\n");
	}
	system("cls");
	
	printf("Percentual de lucro(%%): ");
	scanf("%f",&lucrop);  printf("\n");
	while(lucrop < 0){
		system("cls");
		printf("Valor inválido\n");
		printf("Percentual de lucro(%%): ");
		scanf("%f",&lucrop);  printf("\n");	
	}
	system("cls");
	
	printf("Imposto(%%): ");
	scanf("%f",&impostop);  printf("\n");
	while(impostop < 0){
		system("cls");
		printf("Valor inválido\n");
		printf("Imposto(%%): ");
		scanf("%f",&impostop);  printf("\n");
	}
	lucro = fabrica*lucrop/100;
	imposto = fabrica*impostop/100;
	final = fabrica + lucro + imposto;
	system("cls");
	printf("Lucro estimado: R$%.2f\n",lucro);
	printf("Imposto estimado: R$%.2f\n",imposto);
	printf("Preco final: R$%.2f\n\n",final);
	
}

void ex6(){
	float antigosal,reajuste,novosal;
	
	printf("Salário atual: R$");
	scanf("%f",&antigosal); printf("\n");
	while(antigosal < 0){
		system("cls");
		printf("Valor inválido\n");
		printf("Salário atual: R$");
		scanf("%f",&antigosal); printf("\n");
	}
	
	if(antigosal < 800){
		reajuste = 0.15;
		novosal = antigosal*reajuste + antigosal;
	}else{
		if(antigosal >= 800 && antigosal <= 1000){
			reajuste = 0.1;
			novosal = antigosal*reajuste + antigosal;
		}else{
			if(antigosal > 1000){
				reajuste = 0.05;
				novosal = antigosal*reajuste + antigosal;
			}
		}
	}
	
	printf("Salario antigo: R$%.2f\n",antigosal);
	printf("Salario reajustado: R$%.2f\n\n",novosal);
	
}

void ex7(){
	 float p1,p2,p3,p4,media;
	
	printf("P1: ");
	scanf("%f",&p1); printf("\n");
	while(p1 > 10 || p1 < 0){
		printf("Nota invalida\n\n");
		printf("P1: ");
		scanf("%f",&p1); printf("\n");
		system("cls");
	}
	printf("P2: ");
	scanf("%f",&p2); printf("\n");
	while(p2 > 10 || p2 < 0){
		printf("Nota invalida\n\n");
		printf("P2: ");
		scanf("%f",&p2); printf("\n");
		system("cls");
	}
	printf("P3: ");
	scanf("%f",&p3); printf("\n");
	while(p3 > 10 || p2 < 0){
		printf("Nota invalida\n\n");
		printf("P3: ");
		scanf("%f",&p3); printf("\n");
		system("cls");
	}
	printf("P4: ");
	scanf("%f",&p4); printf("\n");
	while(p4 > 10 || p4 < 0){
		printf("Nota invalida\n\n");
		printf("P4: ");
		scanf("%f",&p4); printf("\n");
		system("cls");
	}
	media = (p1 + p2 + p3 + p4)/4;
	system("cls");
	if(media >= 6){
		printf("Aprovado\n");
	}else{
		printf("Reprovado\n");
	}
	printf("Media: %.2f\n\n",media);
}

void ex8(){
	float n1,n2,soma,produto,quadrados;
	
	do{
	
	
	printf("Digite o 1º numero: ");
	scanf("%f",&n1); printf("\n");
	while(n1 <= 10 || n1 >= 25){
		printf("Valor invalido\n");
		printf("Digite o 1º numero: ");
		scanf("%f",&n1); printf("\n");
		system("cls");
	}
	
	printf("Digite o 2º numero: ");
	scanf("%f",&n2); printf("\n");
	while(n1 < 0){
		printf("Valor invalido\n");
		printf("Digite o 2º numero: ");
		scanf("%f",&n2); printf("\n");
		system("cls");
	}
	soma = n1 + n2;
	produto = n1*n2*soma;
	quadrados = n1*n1 + n2*n2 + soma*soma + produto*produto;
	printf("3º numero: %.2f\n",soma);
	printf("4º numero: %.2f\n",produto);
	system("cls");
	printf("Soma dos quadrados: %.2f\n",quadrados);
	if(quadrados < 50000){
		printf("Soma dos quadrados insuficiente\n\n");
	}
	}while(quadrados < 50000);
}

void ex9(){
	int a,b;
	printf("A: ");
	scanf("%d",&a); printf("\n");
	
	printf("B: ");
	scanf("%d",&b); printf("\n");
	
	if(a > b){
		if(a % b == 0){
			printf("Multiplos\n\n");
		}else{
			printf("Não multiplos\n\n");
		}
	}else{
		if(b % a == 0){
			printf("Multiplos\n\n");
		}else{
			printf("Não multiplos\n\n");
		}
	}
}

void ex10(){
	float produto,produtoinf;
	
	printf("Valor do produto: R$");
	scanf("%f",&produto); printf("\n");
	while(produto < 0){
		system("cls");
		printf("Valor inválido\n");
		printf("Valor do produto: R$");
		scanf("%f",&produto); printf("\n");
	}
	system("cls");
	if(produto < 100){
		produtoinf = produto*0.1 + produto;
		printf("Produto inflacionado: R$%.2f\n\n",produtoinf);
	}else{
		produtoinf = produto*0.2 + produto;
		printf("Produto inflacionado: R$%.2f\n\n",produtoinf);
	}
}

void ex11(){
	int n1,n2;
	
	printf("Numero 1: ");
	scanf("%d",&n1); printf("\n");
	printf("Numero 2: ");
	scanf("%d",&n2); printf("\n");
	
	if(n1 > n2){
		printf("Maior: %d\n\n",n1);
	}else{
		printf("Maior: %d\n\n",n2);
	}
}

void ex12(){	
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
