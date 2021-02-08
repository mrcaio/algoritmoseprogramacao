algoritmo "Cercar terreno"
// Função :  Calculo de custos para cercar terreno
// Autor :   Caio
// Data : 17/08/2014
// Seção de Declarações 
var

    ladodoterreno,ladodoterreno1:real  // entrada
    custodomourao:real    // entrada
    precoemmetrosdearamefarpado:real
    quantidadedemouroes:real
    custototal:real
    custoemarame:real
    custoemmouroes:real
    
inicio
// Seção de Comandos 

        ESCREVA("Informe a medida de um lado do terreno         ")
        LEIA(ladodoterreno)
        ESCREVAl("Informe a medida do lado adjacente ao que você informou")
        ESCREVAl("anteriormente       ")
        LEIA(ladodoterreno1)
        ESCREVA("Informe o custo de um mourão        ")
        LEIA(custodomourao)
        ESCREVA("Informe o custo de um metro de arame farpado       ")
        LEIA(precoemmetrosdearamefarpado)
        quantidadedemouroes := (((ladodoterreno/3)+1)*2) + ((((ladodoterreno1/3)+1)-2)*2)
        custoemarame := (((ladodoterreno+ladodoterreno1)*2)*4)* precoemmetrosdearamefarpado
        custoemmouroes := quantidadedemouroes * custodomourao
        custototal := custoemarame + custoemmouroes
        ESCREVAl("O numero de mouroes utilizado para cercar esse terreno será")
        ESCREVAl("de ",quantidadedemouroes:5:2," mourões")
        ESCREVAl("O gasto total para a construção dessa cerca será de R$ ", custototal)
        ESCREVAl("Sendo R$ ",custoemmouroes," em mourões e R$ ",custoemarame," em arame farpado")
        
fimalgoritmo
