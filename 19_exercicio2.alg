algoritmo "Calculo de quantidade de barbante para amarrar pacote"
// Função : Calcular a quantidade de barbante
// Autor : Caio
// Data : 15/08/2014
// Seção de Declarações 
var
   largurapacote: real // entrada
   alturapacote: real // entrada
   comprimentopacote: real // entrada
   quantidadebarbante: real // saida
inicio
// Seção de Comandos 
   escreva ("Informe a largura do pacote em cm ")
   leia (largurapacote)
   escreva ("Informe a altura do pacote em cm ")
   leia (alturapacote)
   escreva ("Informe o comprimento do pacote em cm ")
   leia (comprimentopacote)
   quantidadebarbante := (largurapacote+alturapacote *4) + (alturapacote+comprimentopacote *4) * 4
   escreval ("A quantidade de barbante será em cm ", quantidadebarbante)
fimalgoritmo
