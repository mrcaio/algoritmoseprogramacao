algoritmo "semnome"
// Fun��o :
// Autor :
// Data : 10/08/2014
// Se��o de Declara��es 
var
    consumo: real // entrada
    valorbruto: real // saida
    valordesconto: real // saida
inicio
// Se��o de Comandos 
   escreva ("Informe o KWh gastos na resid�ncia ")
   leia (consumo)
   valorbruto := consumo * 0.30
   valordesconto := valorbruto - valorbruto * 0.15
   escreval ("O Valor Bruto a pagar � de R$",valorbruto," reais e o Valor com Desconto � de R$",valordesconto," reais")
fimalgoritmo
