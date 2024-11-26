#include <stdio.h>

// Definindo as estruturas para armazenar as informações
struct Voluntario {
    char nome[100];
    char endereco[200];
    char contatos[500];
};

struct Parceiro {
    char nome[100];
    char endereco[200];
    char contato[500];
    float contribuicao;
};

struct Material {
    char nome[100];
    int quantidade;
    float valorUnitario;
};

struct Participante {
    char nome[100];
    char funcao[100];
};

// Função para exibir todas as informações registradas
void exibirInformacoes(struct Voluntario voluntarios[], int numVoluntarios, struct Parceiro parceiros[], int numParceiros, struct Material materiais[], int numMateriais, struct Participante participantes[], int numParticipantes) {
    printf("\n\n===== RELATÓRIO DE INFORMAÇÕES REGISTRADAS =====\n");

    // Exibe os voluntários
    printf("\n--- Voluntários ---\n");
    for (int i = 0; i < numVoluntarios; i++) {
        printf("\nVoluntário %d:\n", i + 1);
        printf("Nome: %s\n", voluntarios[i].nome);
        printf("Endereço: %s\n", voluntarios[i].endereco);
        printf("Contatos: %s\n", voluntarios[i].contatos);
    }

    // Exibe os parceiros
    printf("\n--- Parceiros/Dadores ---\n");
    for (int i = 0; i < numParceiros; i++) {
        printf("\nParceiro %d:\n", i + 1);
        printf("Nome: %s\n", parceiros[i].nome);
        printf("Endereço: %s\n", parceiros[i].endereco);
        printf("Contato: %s\n", parceiros[i].contato);
        printf("Contribuição: R$ %.2f\n", parceiros[i].contribuicao);
    }

    // Exibe os materiais
    printf("\n--- Materiais ---\n");
    for (int i = 0; i < numMateriais; i++) {
        printf("\nMaterial %d:\n", i + 1);
        printf("Nome: %s\n", materiais[i].nome);
        printf("Quantidade: %d\n", materiais[i].quantidade);
        printf("Valor unitário: R$ %.2f\n", materiais[i].valorUnitario);
    }

    // Exibe os participantes
    printf("\n--- Participantes ---\n");
    for (int i = 0; i < numParticipantes; i++) {
        printf("\nParticipante %d:\n", i + 1);
        printf("Nome: %s\n", participantes[i].nome);
        printf("Função: %s\n", participantes[i].funcao);
    }
}

int main() {
    int usuario, numParticipantes, numMateriais, numParceiros, numVoluntarios;
    int opcao;

    // Inicializando as estruturas para armazenar os dados
    struct Voluntario voluntarios[10];  // Até 10 voluntários
    struct Parceiro parceiros[10];      // Até 10 parceiros/dadores
    struct Material materiais[10];      // Até 10 materiais
    struct Participante participantes[10]; // Até 10 participantes

    // Menu principal
    do {
        printf("\nSeja bem-vindo!\n");
        printf("Digite 1 para voluntário ou 2 para participante: ");
        scanf("%d", &usuario);   

        if (usuario == 1) {
            printf("Voluntário\n");

            // Mensagem para o voluntário
            printf("Informe seu nome completo, endereço e contatos de parceiros e doadores com suas respectivas contribuições:\n");

            // Cadastro de voluntários
            printf("Quantos voluntários você quer cadastrar? ");
            scanf("%d", &numVoluntarios);

            for (int i = 0; i < numVoluntarios; i++) {
                printf("\nVoluntário %d:\n", i + 1);
                printf("Nome completo: ");
                scanf(" %[^\n]%*c", voluntarios[i].nome);
                printf("Endereço: ");
                scanf(" %[^\n]%*c", voluntarios[i].endereco);
                printf("Contatos: ");
                scanf(" %[^\n]%*c", voluntarios[i].contatos);
            }

            // Cadastro de parceiros
            printf("\nQuantos parceiros/dadores você quer cadastrar? ");
            scanf("%d", &numParceiros);

            for (int i = 0; i < numParceiros; i++) {
                printf("\nParceiro %d:\n", i + 1);
                printf("Nome do parceiro: ");
                scanf(" %[^\n]%*c", parceiros[i].nome);
                printf("Endereço do parceiro: ");
                scanf(" %[^\n]%*c", parceiros[i].endereco);
                printf("Contato do parceiro: ");
                scanf(" %[^\n]%*c", parceiros[i].contato);
                printf("Contribuição do parceiro (em R$): ");
                scanf("%f", &parceiros[i].contribuicao);
            }

            // Cadastro de materiais utilizados
            printf("\nQuantos materiais foram utilizados na ação? ");
            scanf("%d", &numMateriais);

            for (int i = 0; i < numMateriais; i++) {
                printf("\nMaterial %d:\n", i + 1);
                printf("Nome do material: ");
                scanf(" %[^\n]%*c", materiais[i].nome);
                printf("Quantidade utilizada: ");
                scanf("%d", &materiais[i].quantidade);
                printf("Valor por unidade do material: ");
                scanf("%f", &materiais[i].valorUnitario);
            }

        } else if (usuario == 2) {
            printf("Participante\n");

            // Cadastro de participantes
            printf("\nQuantos participantes você quer cadastrar? ");
            scanf("%d", &numParticipantes);

            for (int i = 0; i < numParticipantes; i++) {
                printf("\nParticipante %d:\n", i + 1);
                printf("Nome do participante: ");
                scanf(" %[^\n]%*c", participantes[i].nome);
                printf("Função do participante (ex: costureira, artesã, etc.): ");
                scanf(" %[^\n]%*c", participantes[i].funcao);
            }

        } else {
            printf("Opção inválida, escolha o número 1 ou 2.\n");
        }

        // Pergunta se o usuário deseja exibir todas as informações
        printf("\nDeseja exibir todas as informações registradas?\n");
        printf("Digite 1 para exibir ou 0 para voltar ao menu: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            exibirInformacoes(voluntarios, numVoluntarios, parceiros, numParceiros, materiais, numMateriais, participantes, numParticipantes);
        }

        // Pergunta se o usuário deseja voltar ao início ou sair
        printf("\nDeseja adicionar mais informações?\n");
        printf("Digite 1 para voltar ao início ou 0 para sair: ");
        scanf("%d", &opcao);

    } while (opcao == 1);  // O loop continua até o usuário escolher sair

    printf("Obrigado por usar o sistema! Até logo!\n");
    return 0;
}
