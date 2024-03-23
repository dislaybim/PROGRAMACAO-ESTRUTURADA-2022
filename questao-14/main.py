f=float(input('digite a temperatura(ºF): '))

c=(f*5-32*5)/9
k=c+273

print('a sua temperatura de {:.2f}ºF equivale a: \n\n{:.2f}ºC \n{:.2f}K'.format(f,c,k))
