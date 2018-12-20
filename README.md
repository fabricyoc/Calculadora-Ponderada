# MediaPonderada

## Compilar

```
$ gcc mediaPonderadaIFRN.c -o mediaPonderadaIFRN
```
## Objetivos
Este arquivo tem o objetivo de expor as funcionalidades do script, assim como o elucidar a abstração do mesmo. Essa 
simples calculadora foi criada (ainda está em construção) com o objetivo de reduzir a dificuldade de calcular as 
notas, de forma ponderada, dos alunos do IFRN. Lembrando que já existe um app específico para tal função. Mas quis
elaborar um autoral.

## Glossário
Etapa => Um semestre é dividido em dois blocos, denominei cada bloco de etapa.

## Detalhes do script
<h2>Caso o professor use soma simples:</h2>
<ol>
<li>SOME todas as notas da etapa e coloque, mesmo que de forma repetida, no script, quando for solicitado</li>
<li>Caso você deseje saber quantos pontos você precisa para passar na segunda etapa:<br/>2.1 Digite o número zero na segunda etapa e dê enter</li>
</ol>

## O que ainda irá ser implementado
1. Adequar o script para atender a quantidade de notas que o professor atribui por etapa;
2. Menu de opções mais adequado;
3. Interface gráfica (o script é utilizado, atualmente, pelo terminal-linux);
