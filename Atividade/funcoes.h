#include<stdio.h>
#include<stdlib.h>
#include"unidade.h"
#include"cursos.h"

void gravar()
{
    /*criar um arquivo de texto para
    guardar os dados pedidos em unidade.h e cursos.h
    O tipo FILE é utlizado para criar arquivos.
    Este arquivo deve ser alocado em memória, portanto, sua
    criação deve ser feita como ponteiro*/
    FILE *dados;
    dados = fopen("dados.txt", "w");

    /*verificar se o arquivo existe, caso não exista,
    fechar o programa e criar o arquivo.*/
    if(dados ==NULL)
    {
        printf("Arquivo não encontrado ou não existe.\n");
        printf("O programa irá ser encerrado para a criação do mesmo,\n");
        printf("logo após, você deverá abrí-lo novamente.\n");
        exit(1);//encerrar programa
    }

    curso curs, *pcurs;
    unidade uni, *puni;

    pcurs =&curs;
    puni =&uni;

    //dados do curso
    printf("Digite o nome do curso: ");
    fgets(pcurs->nome,30,stdin);
    printf("Digite o descrição do curso:\n");
    fgets(pcurs->descricao,100,stdin);
    printf("Digite a carga horária: ");
    fgets(pcurs->carga_horaria,5,stdin);
    printf("Digite a data de início do curso: ");
    fgets(pcurs->datainicio,10,stdin);
    printf("Digite a data de término: ");
    fgets(pcurs->datatermino,10,stdin);
    printf("Digite o valor do curso: ");
    scanf("%f",&pcurs->valor);

    //dados das unidade

    printf("Agora entre com os dados das unidades\n");
    printf("Digite o nome da unidade: ");
    fgets(puni->nomeunidade,30,stdin);
    printf("Digite o endereço da unidade: \n");
    fgets(puni->localizacao,50,stdin);
    printf("Digite o horário de funcionamento: ");
    fgets(puni->horario_func,20,stdin);
    printf("Digite o telefone de contato: ");
    fgets(puni->telefoneP_ctt,15,stdin);

    //gravar dados do curso no arquivo
    fprintf(dados,pcurs->nome);
    fprintf(dados,pcurs->descricao);
    fprintf(dados,pcurs->carga_horaria);
    fprintf(dados,pcurs->datainicio);
    fprintf(dados,pcurs->datatermino);
    fprintf(dados,&pcurs->valor);

    //gravar dados da unidade no arquivo

    fprintf(dados,puni->nomeunidade);
    fprintf(dados,puni->localizacao);
    fprintf(dados,puni->horario_func);
    fprintf(dados,puni->telefoneP_ctt);

    //fechar arquivo

    fclose(dados);

}