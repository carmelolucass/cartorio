#include <stdio.h>
#include <stdlib.h>  // bibl de aloca��o de espa�o em memoria
#include <locale.h> //bibl de aloca��o de texto por regiao
#include <string.h> // bibli responsavel por cuidar das strings


int registro ()
{
	char arquivo [40];
	char cpf [40];
	char nome [40];
	char sobrenome [40];
	char cargo [40];
	
	printf("Digite o cpf a ser cadastrado: ");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf); //responsavel por copiar os valores da string
	
	FILE *file; // cria o arquivo
	file = fopen (arquivo,"w");// "w" cria o arquivo
	fprintf(file, cpf);// salva o valor da variavel
	fclose(file); // fecha o arquivo
	
	file = fopen (arquivo, "a");
	fprintf (file,",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s", nome);
	
	file = fopen(arquivo, "a");
	fprintf(file, nome);
	fclose(file);
	
	file = fopen (arquivo, "a");
	fprintf(file ,",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s", sobrenome);
	
	file = fopen(arquivo,"a");
	fprintf (file, sobrenome);
	fclose (file);
	
	file = fopen (arquivo, "a");
	fprintf(file ,",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s", cargo);
	
	file = fopen (arquivo, "a");
	fprintf (file, cargo);
	fclose(file);
	
	system("pause");
	
}

int consulta ()

{
		setlocale(LC_ALL, "portuguese"); 

	char cpf [40];
	char conteudo[200];	
	
	printf("digite o cpf a ser consultado: ");
	scanf("%s", cpf);
	
	FILE *file;
	file = fopen (cpf,"r"); // "r" significa read
	
	if(file==NULL)
	{
		printf("informa��es n�o localizadas\n");
	}
	
	while (fgets(conteudo, 200, file) != NULL)
	{
		printf("essas sao as informa��es do usu�rio:\n");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system ("pause");


}

int deletar ()
{
		setlocale(LC_ALL, "portuguese"); 
		
	char cpf[40];
	
	printf("digite o CPF do usuario a ser deletado: ");
	scanf("%s", cpf);

	if (remove(cpf)==0)
	{
		printf("usuario removido com sucesso\n", cpf);
	}

	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL)
	{
		printf("Usuario n�o se encontra no sistema\n");
		system("pause");
	} 
	 
	
}

int main ()	
	{
	int opcao=0; // definindo as variaveis
	int laco=1;
	char senhadigitada[10]="a";
	int comparacao;
	
	printf("### Cart�rio. ###\n\n");
	printf("login de administrador\n\nDigite sua senha: ");
	scanf("%s", senhadigitada);
	
	comparacao= strcmp (senhadigitada, "admin"); //strcmp == compara��o de strings
	
	if (comparacao==0)
	{	
		system("cls");
	for(laco=1;laco=1;)
	{ 
		

	
			setlocale(LC_ALL, "portuguese"); 
		
			printf("### Cart�rio. ###\n\n"); //inicio do menu
			printf ("Escolha a op��o desejada do menu.\n\n");
			printf ("\t1- Registrar nomes.\n"); // \t indica espa�amento no texto
			printf ("\t2- Consultar nomes.\n");  
			printf ("\t3- Deletar nomes.\n");
			printf ("\t4- Sair do sistema.\n\n");
			printf ("op��o: "); // fim do menu
		
			scanf("%d", &opcao);
		
			system("cls"); //limpeza
			
			switch(opcao){
			
				case 1:
				registro ();
				break;
			
				case 2: 
				consulta();
				break;
				
				case 3: 
				deletar();
				break;
				
				case 4: 
				printf("obrigado por usar o sistema\n");
				return 0;
				break;
			
				default: // tudo exceto as op��es dadas
				printf("op��o n�o dispon�vel\n");
				system("pause");
				break;
			}
				
}

}
	else
	printf("senha incorreta.");
}

