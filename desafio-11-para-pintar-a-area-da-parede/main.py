#exercício 11) cálculo dee para e para pintar, lembrando que cada m² da parede necessita de 1 lito de tinta
#quantos litros de tinta necessario para pintar essa parede e sua área

x=float(input('qual a largura da parede(m)? '))
y=float(input('qual a altura da parede(m)? '))

area=x*y
tinta=area/2

print('\na largura é: {} m \na altura é: {} m \na área total é: {} m² \nlitos de tinta para a pintura: {} l'. format(x,y,area,tinta))