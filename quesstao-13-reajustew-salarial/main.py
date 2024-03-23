#desafio 13, calculode reajuste salarial:

salario=float(input('digite o seu salário: R$ '))
novo=salario+salario*(15/100)
print('seu salario R$ {:.2f} teve um acréscimo de 15%, assim ficou R$ {:.2f}'.format(salario,novo))