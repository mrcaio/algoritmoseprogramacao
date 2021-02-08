algoritmo "semnome"
// Função :
// Autor :
// Data : 10/08/2014
// Seção de Declarações 
var
    consumo: real // entrada
    valorbruto: real // saida
    valordesconto: real // saida
inicio
// Seção de Comandos 
   escreva ("Informe o KWh gastos na residência ")
   leia (consumo)
   valorbruto := consumo * 0.30
   valordesconto := valorbruto - valorbruto * 0.15
   escreval ("O Valor Bruto a pagar é de R$",valorbruto," reais e o Valor com Desconto é de R$",valordesconto," reais")
fimalgoritmo
