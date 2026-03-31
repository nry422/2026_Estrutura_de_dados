Exercícios — Estrutura de Dados em C
Disciplina: Estrutura de Dados
Curso: RAU — IFSC Jaraguá do Sul - Desenvolvimento de Sistemas
Ano: 2026
Linguagem: C

Descrição dos Exercícios

exemplo_funcao.c — Introdução a Funções
Demonstra a criação e o uso de funções em C com três exemplos:

soma(n1, n2) — retorna a soma de dois inteiros.
mult(n1, n2) — retorna o produto de dois inteiros.
primo(n) — verifica se um número é primo, contando seus divisores via laço for. Retorna 1 se for primo, 0 caso contrário.

O main chama as três funções e exibe os resultados no terminal. É um exercício introdutório que reforça o conceito de modularização com retorno de valor.

exercicio02.c — Vetor com Classificação Par/Ímpar
Lê exatamente 10 números do usuário e os armazena em um vetor vNum[MAX].
Para cada número inserido, informa imediatamente se é par ou ímpar.
Ao final, exibe a contagem total de pares e ímpares.
Conceitos: vetor de tamanho fixo, laço for, operador módulo (%), contadores.

exercicio03.c — Soma Elemento a Elemento de Dois Vetores
Lê dois vetores de 5 inteiros cada (v1 e v2), exibe seus conteúdos formatados e calcula um terceiro vetor vs, onde cada posição vs[i] = v1[i] + v2[i].
Conceitos: múltiplos vetores, laços separados para leitura, exibição e operação, formatação com %3d.

exercicio04.c — Entrada Dinâmica e Impressão Invertida
O usuário digita números até inserir 0 (zero encerra a entrada).
Os valores são armazenados em vNum[MAX] com um contador ocup.
Ao final, exibe a quantidade de números inseridos e os imprime em ordem inversa percorrendo o vetor do fim para o início.
Conceitos: vetor com ocupação parcial, sentinela de parada (0), laço for decrescente.

exercicio06.c — Múltiplos (Versão com Bug)

Atenção: Esta versão contém um problema intencional ou de desenvolvimento.

Lê uma sequência de valores até 0 e depois pede um divisor. Tenta armazenar os múltiplos em multvet, mas o tamanho desse vetor é declarado com a variável ctdvet antes de ser inicializada, o que causa comportamento indefinido. Esta versão serve de ponto de partida para o exercicio06a.

exercicio06a.c — Múltiplos (Versão Corrigida)
Versão corrigida do exercício anterior.
Lê valores até 0, depois solicita um número mult e exibe diretamente todos os elementos do vetor que são múltiplos de mult (sem usar um vetor auxiliar).
Conceitos: vetor dinâmico (ocupação parcial), filtragem com %, entrada com sentinela.

exercicio07.c — Múltiplos com Vetor de Saída
Evolução do exercicio06a: além de filtrar os múltiplos, armazena os resultados em um vetor de saída vSaida[qtdval] declarado com VLA (Variable Length Array).
Os múltiplos encontrados são primeiro armazenados, depois impressos em um laço separado.
Conceitos: VLA, dois vetores (entrada e saída), índice separado j para o vetor de saída.

exercicio08.c — Busca Linear com Confirmação de Zero
Lê valores até 0, com um tratamento especial: se o primeiro valor for 0, pergunta ao usuário se deseja realmente encerrar (sim/não).
Após a entrada, solicita um número para busca e percorre o vetor imprimindo a posição e o valor de cada ocorrência encontrada.
Conceitos: busca linear, tratamento de caso especial na entrada, return 0 para encerramento antecipado.

exercicio09_10.c — Busca com Todas as Ocorrências
Busca um valor no vetor e armazena todas as posições onde ele aparece em vPosicao[].
A saída é adaptada conforme o resultado:

Não encontrado → mensagem de ausência.
1 ocorrência → informa a posição única.
2+ ocorrências → lista todas as posições com formatação em português ("posições X, Y e Z.").

O laço de impressão usa lógica condicional para inserir vírgulas e "e" corretamente.
Conceitos: VLA para posições, múltiplos casos de saída, formatação de lista em linguagem natural.

exercicio11.c — Busca — Primeira Ocorrência
Mesma estrutura dos exercícios 09/10, mas a saída para múltiplas ocorrências informa apenas a primeira posição onde o valor foi encontrado: "o primeiro está na posição X".
Conceito: uso de vPosicao[0] para acessar o primeiro elemento do vetor de posições.

exercicio12.c — Busca — Última Ocorrência
Idêntico ao exercício 11, com a diferença que exibe a última posição onde o valor aparece: "o último está na posição X".
Conceito: uso de vPosicao[j-1] para acessar o último elemento preenchido no vetor.

exercicio13.c — Média e Valores Acima da Média (Float)
Lê números de ponto flutuante (float) até 0. Exibe todos os valores com seus índices, calcula e mostra a soma e a média. Em seguida, percorre novamente o vetor e lista apenas os valores acima da média, com suas posições e a contagem final.
Conceitos: vetor de float, dois laços sobre o mesmo vetor, cálculo de média, uso de %g para impressão limpa de floats.

exercicio14.c — Separação em Vetores Par e Ímpar com Função
Lê números até 0 e separa em dois vetores: vPar[] e vImp[].
Usa uma função auxiliar printVetor(int v[], int q) para imprimir qualquer vetor, evitando repetição de código.
Conceitos: passagem de vetor para função, dois vetores de saída com contadores independentes, reutilização de função.

exercicio15.c — Entrada com Validação (Filtro de Intervalo)
Aceita apenas números no intervalo entre 3 e 7 (exclusive: 4, 5 ou 6).
Valores fora do intervalo exibem "Err!" e são descartados. Valores válidos exibem "ok!" e são armazenados. O laço continua até o usuário digitar 0.
Conceitos: validação de entrada com if/else, filtragem antes de armazenar, vetor de ocupação parcial.

vetoresA.c — Temperatura Média com Vetor Inicializado
Vetor de temperaturas (double) já inicializado com 7 valores fixos.
Calcula a média percorrendo o vetor, exibe todos os elementos e depois lista apenas as temperaturas acima da média.
Conceitos: inicialização de vetor na declaração, double, formatação %.2lf, reutilização do índice i após o laço.

vetoresB.c — Notas e Nomes (Vetor 2D de Strings)
Armazena nomes e notas de alunos usando um vetor de double e uma matriz de char (char nome[MAX][50]).
Lê strings com espaços usando scanf(" %[^\n]s", ...). Calcula a média das notas e exibe os alunos com nota acima da média.
Conceitos: vetor bidimensional de char (array de strings), leitura de string com espaço, double, associação de dois vetores pelo mesmo índice.



Observações Gerais

Os vetores utilizam a constante MAX definida com #define para facilitar ajustes de tamanho.
A maioria dos exercícios usa 0 como sentinela para encerrar a entrada.
Os exercícios 09/10, 11 e 12 são variações do mesmo problema de busca, cada um com uma saída diferente.
O exercicio06.c é mantido como registro do desenvolvimento; use o exercicio06a.c ou exercicio07.c para a versão funcional.
