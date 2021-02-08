algoritmo "Calcular divida de parcelas"
// Função : Saber o saldo devedor em parcelas de um consórcio
// Autor :   Caio
// Data : 11/08/2014
// Seção de Declarações 
var
   numerototal: inteiro // entrada
   numeropago: inteiro // entrada
   valordaparcela: real // entrada
   devendoparcela1: real // saida
   devendoparcela2: real // saida
inicio
// Seção de Comandos 
   escreva ("Informe o Número Total de Parcelas do Consórcio ")
   leia (numerototal)
   escreva ("Informe o Número de Parcelas Pagas ")
   leia (numeropago)
   escreva ("Informe o Valor Atual da Prestação ")
   leia (valordaparcela)
   devendoparcela1 := numerototal * valordaparcela
   devendoparcela2 := devendoparcela1 - numeropago * valordaparcela
   escreval ("Você ainda resta pagar R$", devendoparcela2)
   fimalgoritmo
