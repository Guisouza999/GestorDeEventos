# GestorDeEventos
Gestor de eventos para ONG's e afins.

GestorDeEventos é um sistema simples em C projetado para gerenciar informações de eventos, como cadastro de voluntários, participantes, parceiros, materiais e contribuições. Ideal para ações colaborativas ou eventos organizados por equipes.

Funcionalidades
Cadastro de voluntários: inclui informações como nome, endereço e contatos.
Registro de parceiros/dadores: nome, endereço, contato e valor da contribuição.
Gestão de materiais utilizados em eventos, especificando quantidade e valor unitário.
Inclusão de participantes: define os integrantes e suas funções no evento.
Exibição de relatórios detalhados com todas as informações registradas.
Como usar
Compile o código utilizando um compilador C, como o gcc:

bash
Copiar código
gcc GestorDeEventos.c -o GestorDeEventos
Execute o programa:

bash
Copiar código
./GestorDeEventos
Siga as instruções no menu para registrar informações e visualizar os relatórios.

Estrutura do Código
Estruturas:
Voluntario: Armazena dados pessoais e de contato dos voluntários.
Parceiro: Registra informações sobre dadores e suas contribuições.
Material: Gerencia os recursos materiais utilizados no evento.
Participante: Armazena informações sobre as funções desempenhadas pelos integrantes.
Função Principal (main): Apresenta o menu interativo e gerencia o fluxo do programa.
Função exibirInformacoes: Exibe todas as informações cadastradas em formato de relatório.
Requisitos
Compilador C (como GCC ou equivalente).
Sistema operacional com suporte a execução de programas baseados em linha de comando.
Melhorias Futuras
Implementar persistência de dados com arquivos.
Expandir os limites de registros para permitir entrada dinâmica.
Desenvolver uma interface gráfica para melhorar a experiência do usuário.
