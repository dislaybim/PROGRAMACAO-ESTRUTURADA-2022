#015, aluguel de um carro, levando em consideração a variavel dia e km que corrobora no valor finally
#1km=R$0,15
#1dia=R$60,00
#logo a função sera valor=(0,15*km+60*dia)

km=float(input('digite o valor de quilometros rodados(km): '))
dia=int(input('\ndigite a quantidade de dias alugado: '))

valor=km*0,15+60*dia

print('\no aluguel do carro custará R${}, levando em consideração os {} km rodados e {} dias alugado'.format(valor,km,dia))