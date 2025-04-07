📚 Projeto: Análise de Equivalências Lógicas em C
Bem-vindo ao repositório onde exploramos equivalências lógicas através da programação em C! Aqui, transformamos conceitos abstratos da lógica proposicional em código tangível, com tabelas-verdade, explicações detalhadas e visualizações claras.

🧠 O Que Estamos Fazendo?
Este projeto visa:

Implementar equivalências lógicas da lista de exercícios em C.

Gerar tabelas-verdade automáticas para verificar validade.

Explicar passo a passo o raciocínio por trás de cada equivalência.

Oferecer visualizações intuitivas (via Python/Matplotlib).

✨ Destaques
Código Comentado: Cada linha explica a lógica por trás das operações.

Abordagem Prática: Transformamos teoria em programas executáveis.

Tabelas-Verdade: Resultados claros e fáceis de interpretar.

Visualização: Heatmaps e gráficos para análise visual.

🛠️ Tecnologias Utilizadas
Linguagem/Ferramenta	Uso
C	Implementação das equivalências lógicas
Python	Visualização dos resultados
Git	Controle de versão
Matplotlib	Gráficos e heatmaps

🚀 Como Usar?
Compile um arquivo (ex: questao_a.c):

bash
$ gcc src/questao_a.c -o bin/questao_a
Execute:

bash
$ ./bin/questao_a
Visualize os resultados:

bash
$ python scripts/visualize.py

🌟 Exemplo de Saída
Tabela-Verdade (Questão a):
 p | q | p→q | (p∧¬q)→F | Equivalente?
-----------------------------------
 0 | 0 |  1  |    1     |      1
 0 | 1 |  1  |    1     |      1
 1 | 0 |  0  |    0     |      1
 1 | 1 |  1  |    1     |      1
Heatmap (Python):
Heatmap da equivalência

🤔 Por Que Isso Importa?
Aprender Lógica na Prática: Código torna conceitos abstratos palpáveis.

Melhorar Habilidades em C: Prática com operadores lógicos e loops.

Visualização de Dados: Transformar tabelas-verdade em gráficos claros.

📝 Licença
Este projeto é open-source sob a licença MIT. Sinta-se à vontade para usar, modificar e distribuir!

💬 Vamos Conversar!
Encontrou um bug? Tem uma ideia para melhorar?
Abra uma issue ou envie um pull request!

Happy coding! 🚀