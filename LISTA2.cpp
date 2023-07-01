#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

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
		printf("LISTA 2\n");
		printf("Exercício 01\n");
		printf("Exercício 02\n");
		printf("Exercício 03\n");
		printf("Exercício 04\n");
		printf("Exercício 05\n");
		printf("Exercício 06\n");
		printf("Exercício 07\n");
		printf("Exercício 08\n");
		printf("Exercício 09\n");
		printf("Exercício 10\n");
		printf("Exercício 11\n");
		printf("Exercício 12\n");
		
		printf("Comando: "); 
		scanf("%d",&op); printf("\n");
		
				switch(op){
			case 0:
				printf("Encerrando...");
				break;
				
			case 1:
				system("cls");
				printf("Exercício 01\n");
				ex1();
				break;
				
			case 2:
				system("cls");
				printf("Exercício 02\n");
				ex2();
				break;
			
			case 3:
				system("cls");
				printf("Exercício 03\n");
				ex3();
				break;
				
			case 4:
				system("cls");
				printf("Exercício 04\n");
				ex4();	
				break;
				
			case 5:
				system("cls");
				printf("Exercício 05\n");
				ex5();	
				break;
			
			case 6:
				system("cls");
				printf("Exercício 06\n");
				ex6();	
				break;
			
			case 7:
				system("cls");
				printf("Exercício 07\n");
				ex7();	
				break;
			
			case 8:
				system("cls");
				printf("Exercício 08\n");
				ex8();	
				break;
			
			case 9:
				system("cls");
				printf("Exercício 9\n");
				ex9();	
				break;
				
			case 10:
				system("cls");
				printf("Exercício 10\n");
				ex10();	
				break;
				
			case 11:
				system("cls");
				printf("Exercício 11\n");
				ex11();	
				break;
			
			case 12:
				system("cls");
				printf("Exercício 12\n");
				ex12();	
				break;
				
			case 100:
				system("cls");
				break;
				
			default:
				printf("Erro\n\n");
				
				break;				
		}
	}while(op != 0);
	
	
	return 0;
}

void ex1(){
	float a,b,c,x1,x2,delta;
		
	printf("Valor de a: ");
	scanf("%f",&a);	printf("\n");
	while(a < 0){
		system("cls");
		printf("Valor inválido\n");
		printf("Valor de a: ");
		scanf("%f",&a);	printf("\n");
	}
	printf("Valor de b: ");
	scanf("%f",&b);	printf("\n");
	printf("Valor de c: ");
	scanf("%f",&c);	printf("\n");	
	
	delta = (b*b)-4*a*c;
	x1 = (b + sqrt(delta))/(2*a);
	x2 = (b - sqrt(delta))/(2*a);
	
	if(delta < 0){
		printf("Não possui raízes reais\n");
	}else{
	
		if(delta == 0){
			printf("Possui apenas umas raiz real\n");
		}
		printf("X1: %.2f\n",x1);
		printf("X2: %.2f\n\n",x2);
	}
}

void ex2(){
	int qtd,nivel;
	float salario,ha;
	printf("Quantidade de aulas: ");
	scanf("%d",&qtd); printf("\n");
	while(qtd < 0){
		system("cls");
		printf("Valor inválido\n");
		printf("Quantidade de aulas: ");
		scanf("%d",&qtd); printf("\n");
	}
	printf("Nível do professor: ");
	scanf("%d",&nivel); printf("\n");
	while(nivel != 1 && nivel != 2 && nivel != 3){
		system("cls");
		printf("Valor inválido\n");
		printf("Nível do professor: ");
		scanf("%d",&nivel); printf("\n");
	}

	if(nivel == 1){
		ha = 55;
		salario = ha*qtd;
	}else{
		if(nivel == 2){
			ha = 67;
			salario = ha*qtd;	
		}else{
			if(nivel == 3){
				ha = 78;
				salario = ha*qtd;
			}
		}
	}
	printf("Salário: R$%.2f\n",salario);
}

void ex3(){
	float n1,n2;
	printf("1º número: ");
	scanf("%f",&n1);
	printf("2º número: ");
	scanf("%f",&n2);
	
	if(n1 == n2){
		printf("São iguais\n");
	}else{
		printf("São diferentes\n");
		if(n1 > n2){
			printf("O 1º número é maior\n");
		}
		if(n2 > n1){
			printf("O 2º número é maior\n");
		}
		
	}
	

}

void ex4(){
	float n1,n2,n3;
	printf("1º número: ");
	scanf("%f",&n1);	printf("\n");
	printf("2º número: ");
	scanf("%f",&n2);	printf("\n");
	printf("3º número: ");
	scanf("%f",&n3);	printf("\n");
	while(n1 == n2 == n3){
		system("cls");
		printf("São iguais. Por favor, insira novos dados.\n");
		printf("1º número: ");
		scanf("%f",&n1);	printf("\n");
		printf("2º número: ");
		scanf("%f",&n2);	printf("\n");
		printf("3º número: ");
		scanf("%f",&n3);	printf("\n");
	}
	if(n1 > n2){
		if(n1 > n3){
			printf("O 1º número é maior.\n");
		}
	}else{
		if(n2 > n3){
			if(n2 > n1){
				printf("O 2º número é maior.\n");
			}
		}else{
			if(n3 > n2){
				if(n3 > n1){
					printf("O 3º número é maior.\n");
				}
			}
		}
	}
}

void ex5(){
	int n1;
	printf("Digite um número: ");
	scanf("%d",&n1);	printf("\n");
	if(n1 % 2 == 0){
		printf("É par\n");
	}else{
		printf("Não é par\n");
	}

}

void ex6(){
	float L1,L2,L3;
	
	printf("1º lado: ");
	scanf("%f",&L1);	printf("\n");
	printf("2º lado: ");
	scanf("%f",&L2);	printf("\n");
	printf("3º lado: ");
	scanf("%f",&L3);	printf("\n");
	while(L3 > L2 + L1 || L2 > L3 + L1 || L1 > L2 + L3){
		system("cls");
		printf("Impossível criar este triângulo\n");
		printf("1º lado: ");
		scanf("%f",&L1);	printf("\n");
		printf("2º lado: ");
		scanf("%f",&L2);	printf("\n");
		printf("3º lado: ");
		scanf("%f",&L3);	printf("\n");	
	}
	printf("Classificação: "); 
	if(L1 == L2 == L3){
		printf("Triângulo Equilátero\n");
	}else{
		if(L1 == L2 != L3 || L1 == L3 != L2 || L3 == L2 != L1){
			printf("Triângulo Isósceles\n");
		}else{
			if(L1 != L2 != L3){
				printf("Triângulo Escaleno\n");
			}
		}
	}
}

void ex7(){
	float salmin,bruto,h,imposto,liq;
	printf("Salário mínimo: ");
	scanf("%f",&salmin); printf("\n");
	printf("Horas trabalhadas: ");
	scanf("%f",&h); printf("\n");
	bruto = h*salmin/2;
	imposto = 0.03*bruto;
	liq = bruto - imposto;
	printf("Salário líquido: R$%.2f\n",liq);

}

void ex8(){
	int degrau,altura,quantidade;
	printf("Altura do degrau: ");
	scanf("%d",&degrau); printf("\n");
	printf("Altura desejada: ");
	scanf("%d",&altura); printf("\n");
	quantidade = altura/degrau;
	if(altura % degrau != 0){
		quantidade++;
	}
	printf("Quantidade de degraus: %d\n",quantidade);
}

void ex9(){
	float altura,peso;
	int sexo;
	do{
	printf("Altura: ");
	scanf("%f",&altura);
	printf("Qual o sexo?\n");
	printf("0 - Voltar\n");
	printf("1 - Homem\n");
	printf("2 - Mulher\n");
	scanf("%i",&sexo);
	
	switch(sexo){
		case 0:
			system("cls");
			printf("Voltando...");
			break;
			
		case 1:
			system("cls");
			peso = (72*altura)-58;
			printf("Peso ideal: %.2fKg\n",peso);
			break;
			
		case 2:
			system("cls");
			peso = (62.1*altura) - 44.7;
			printf("Peso ideal: %.2fKg\n",peso);
			break;
			
		default:
			printf("Opção inválida\n");
			break;
			
	}
	}while(sexo != 0);
	

}

void ex10(){
	float peso,altura,IMC;
	printf("Peso: ");
	scanf("%f",&peso); printf("\n");
	while(peso < 0){
		system("cls");
		printf("Peso inválido\n");
		printf("Peso: ");
		scanf("%f",&peso); printf("\n");
	}
	printf("Altura: ");
	scanf("%f",&altura); printf("\n");
	while(altura < 0){
	system("cls");
	printf("Peso inválido\n");
	printf("Altura: "); 
	scanf("%f",&altura); printf("\n");
	}
	
	IMC = peso/(altura*altura);
	if(IMC < 17){
		printf("Muito abaixo do peso\n");
	}else{
		if(IMC > 17 && IMC <= 18.49){
			printf("Abaixo do peso\n");
		}else{
			if(IMC >= 18.5 && IMC <= 24.99){
				printf("Peso normal\n");
			}else{
				if(IMC >= 25 && IMC <= 29.99){
					printf("Acima do peso\n");
				}else{
					if(IMC >= 30 && IMC <= 34.99){
						printf("Obesidade I\n");
					}else{
						if(IMC >= 35 && IMC <= 39.99){
							printf("Obesidade II (severa)\n");
						}else{
							if(IMC >= 40){
								printf("Obesidade III (mórbida)\n");
						}
					}
				}
			}
		}
	}
}
}		
void ex11(){
	float peso,altura;
	printf("Peso: ");
	scanf("%f",&peso); printf("\n");
	while(peso < 0){
		system("cls");
		printf("Peso inválido\n");
		printf("Peso: ");
		scanf("%f",&peso); printf("\n");
	}
	printf("Altura: ");
	scanf("%f",&altura); printf("\n");
	while(altura < 0){
	system("cls");
	printf("Peso inválido\n");
	printf("Altura: "); 
	scanf("%f",&altura); printf("\n");
	}
	if(altura < 1.20){
		if(peso < 60){
			printf("A\n");
		}else{
			if(peso > 60 && peso <= 90){
				printf("D\n");
			}else{
				if(peso > 90){
					printf("G\n");
				}
			}
		}
	}else{
		if(altura >= 1.20 && altura <= 1.70){
			if(peso < 60){
				printf("B\n");
			}else{
				if(peso > 60 && peso <= 90){
					printf("E\n");
				}else{
					if(peso > 90){
						printf("H\n");
				}
			}
		}
	}else{
		if(altura > 1.70){
			if(peso < 60){
				printf("C\n");
			}else{
				if(peso > 60 && peso <= 90){
					printf("F\n");
				}else{
					if(peso > 90){
						printf("I\n");
				}
			}
		}
	}			
	}
}
}


void ex12(){
	int idade,sexo;
	float salario,abono,salnovo;
	printf("1 - Homem\n");
	printf("2 - Mulher\n");
	printf("Sexo: ");
	scanf("%d",&sexo);
	while(sexo != 1 && sexo != 2){
		system("cls");
		printf("Sexo inválido\n");
		printf("1 - Masculino\n");
		printf("2 - Feminino\n");
		printf("Sexo: ");
		scanf("%i",&sexo); printf("\n");
	}
	printf("Idade: ");
	scanf("%d",&idade); printf("\n");
	printf("Salário: R$");
	scanf("%f",&salario); printf("\n");
	if(sexo == 1){
		if(idade >= 30){
			abono = 200;
		}else{
			if(idade < 30){
				abono = 120;
			}
		}
	}else{
		if(sexo == 2){
			if(idade >= 30){
			abono = 220;
			}else{
				if(idade < 30){
				abono = 130;
			}
		}
		}
	}
	salnovo = salario + abono;
	printf("Salário com abono: R$%.2f\n",salnovo);
}

