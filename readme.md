Programa Criado para manipular seu Dinheiro e simular investimentos de diversos tipos, o programa segue em andamento para tomar melhores decisões em relação a manipulação.
o arquivo investir0-1.cpp é apenas uma tentativa de cadastro no sistema bancário, ignorem.

Funcionalidades do Programa:

O código inclui várias bibliotecas, como iostream, cstdlib, ctime, string e cctype, que fornecem ferramentas para entrada e saída de dados, manipulação de strings, geração de números aleatórios e manipulação de caracteres.

Em seguida, são declaradas várias variáveis, como guardar, resgatar, quantidade, opcao, depositar, sacar, categoria, saldo, investir, cardacess, dinlock, limite, feedback, opcaoexp, nome, SN, firstinv, investirvalor e valor. Essas variáveis são usadas para armazenar informações e dados usados durante a execução do programa.

Duas classes são definidas: Investimento e financas. A classe Investimento tem membros privados valorinv e tipoinv e métodos para definir e obter esses valores. A classe financas não tem membros privados, mas possui métodos para resgatar dinheiro guardado e investir.

A função main é definida como a função principal do programa.
No início do main, são criados objetos das classes financas e Investimento chamados geral e pessoalinvest, respectivamente.

O programa imprime uma mensagem de boas-vindas e solicita o nome do usuário e o saldo atual.

Em um loop do-while, o programa exibe o saldo atual e oferece várias opções para o usuário, como sacar, depositar, guardar, investir, cartão de crédito e sair.
Com base na opção selecionada pelo usuário, o programa executa o código correspondente dentro de um switch-case.

Para a opção 1, o programa solicita a quantidade a ser sacada e verifica se é possível sacar com base no saldo atual.
Para a opção 2, o programa solicita a quantidade a ser depositada e atualiza o saldo.
Para a opção 3, o programa oferece ao usuário a escolha de guardar mais dinheiro ou visualizar o saldo guardado. Dependendo da escolha, o programa permite que o usuário guarde mais dinheiro ou resgate parte do dinheiro guardado.
Para a opção 4, o programa solicita ao usuário o valor a ser investido e o tipo de investimento. O valor é armazenado no objeto pessoalinvest, e o saldo é atualizado.
Para a opção 5, o programa gera um limite de cartão de crédito aleatório e permite que o usuário acesse o cartão se desejar.
Para a opção 6, o programa encerra a execução.

Após sair do loop principal, o programa solicita ao usuário que avalie o software de 1 a 5 estrelas e exibe uma mensagem de agradecimento com base na avaliação fornecida.
O programa retorna 0 para indicar uma execução bem-sucedida.