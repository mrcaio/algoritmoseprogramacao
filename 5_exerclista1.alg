algoritmo "calculaidade"
// Função : Mostra a idade recebidade em meses, dias, horas e minutos
// Autor :  Caio
// Data : 08/08/2014
// Seção de Declarações 
var
   idade: inteiro        // entrada
   meses,dias,horas: inteiro // saida
   minutos: real // saida

inicio
// Seção de Comandos
   escreva ("Informe sua idade em anos ")
   leia (idade)
   meses := idade * 12
   dias := idade * 365
   horas := dias * 24
   minutos := horas * 60
   escreval ("Você já viveu ", meses, " meses ", dias, " dias " )
   escreval ("que representa ", horas, " horas e ", minutos, " minutos ")
   
fimalgoritmo
