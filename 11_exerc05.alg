algoritmo "Calcular divida de parcelas"
// Fun��o : Saber o saldo devedor em parcelas de um cons�rcio
// Autor :   Caio
// Data : 11/08/2014
// Se��o de Declara��es 
var
   numerototal: inteiro // entrada
   numeropago: inteiro // entrada
   valordaparcela: real // entrada
   devendoparcela1: real // saida
   devendoparcela2: real // saida
inicio
// Se��o de Comandos 
   escreva ("Informe o N�mero Total de Parcelas do Cons�rcio ")
   leia (numerototal)
   escreva ("Informe o N�mero de Parcelas Pagas ")
   leia (numeropago)
   escreva ("Informe o Valor Atual da Presta��o ")
   leia (valordaparcela)
   devendoparcela1 := numerototal * valordaparcela
   devendoparcela2 := devendoparcela1 - numeropago * valordaparcela
   escreval ("Voc� ainda resta pagar R$", devendoparcela2)
   fimalgoritmo
