algoritmo "C�lculo de M�dia de Alunos"
// Fun��o : Calcular a m�dia baseado nas provas
// Autor : Caio L. Baader
// Data : 10/08/2014
// Se��o de Declara��es 
var
   notap1: real // entrada
   notap2: real // entrada
   notap3: real // entrada
   mediapt: real // saida
inicio
// Se��o de Comandos 
   escreva ("Nota da Prova 01  ")
   leia (notap1)
   escreva ("Nota da Prova 02  ")
   leia (notap2)
   escreva ("Nota da Prova 03  ")
   leia (notap3)
   mediapt := notap1 * 0.3 + notap2 * 0.4 + notap3 * 0.5
   /3
   escreval ("A m�dia do aluno �  ", mediapt)
fimalgoritmo

