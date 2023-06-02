El trabajo practico 1 pedia calcular pi utilizando la serie de Liebniz, iterando hasta que el valor de pi sea correcto en sus 6 primeros decimales (3,141592)

Para resolver esto se realizaron los siguientes pasos:

1-Conocer o estudiar como se calcula pi a traves de la serie Liebniz.
2-Reconocer como escribir el calculo adecuado en c++; en este caso se uso: pow(-1,variable)/((2*variable)+1), donde las variables son las iteraciones
3-Definir el valor de pi pedido utilizando una constante.
4-Definir 3 variables; en este caso "cal" para el calculo, "aux" para sumar los valores del calculo y "iter" para las iteraciones.
5-Realizamos un While para repetir el proceso de la cuenta hasta que "aux" sea diferente de pi/4; y dentro de este realizamos:

    cal=pow(-1,iter)/((2*iter)+1);  //para realizar el calculo
    aux+= cal; //para guardar y sumar los resultados del calculo
    iter ++; //para contar las iteraciones y poder realizar el calculo

6-Ultilizamos el cout fixed y precision para acortar el valor de pi a la cantidad de decimas pedidas (6)
7-Mostramos el valor de pi calculado por pantalla y la cantidad de iteraciones que se realizaron.
