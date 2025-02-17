//punto 1

#include <iostream>
using namespace std;

int main()
{
    
	int a, b, suma;
	cout << "Ingresa el primer numero a sumar: " << endl;
	cin >> a;
	cout << "Ingresa el segundo numero a sumar: " << endl;
	cin >> b;
	
    suma = a + b;
    cout << "El resultado de la suma entre a y b es " << suma << endl;
    
  
    
	int c, d, resta;
	cout << "Ingresa el primer numero a restar: " << endl;
	cin >> c;
	cout << "Ingresa el segundo numero a restar: " << endl;
	cin >> d;
	
    resta = c - d;
    cout <<"El resultado de la resta entre c y d es: " << resta << endl;
    
    int e, f, multi;
	cout << "Ingresa el primer numero a multiplicar: " << endl;
	cin >> e;
	cout << "Ingresa el segundo numero a multiplicar: " << endl;
	cin >> f;
	
    multi = e * f;
    cout <<"El resultado de la multuplicacion entre e y f es: " << multi << endl;

    int g, h, divi;
	cout << "Ingresa el numerador: " << endl;
	cin >> g;
	cout << "Ingresa el denominador: " << endl;
	cin >> h;
	
    divi = g / h;
    cout <<"El resultado de la division entre g y h es: " << divi << endl;

    int i, j, mod;
    cout <<"Ingrese el primer numero: " << endl;
    cin >> i;
    cout <<"Ingrese el segundo numero: " << endl;
    cin >> j;
    
    mod = i % j;
    cout <<"El modulo entre i y j es: " << mod << endl;

	return 0;
}



//punto 2
#include<iostream>
using namespace std;
int main(){
  int valor;
  int ahorro;
  int precio_con_descuento;

  cout << "ingrese el precio del producto sin el descuento: $";
  cin >> valor;

  ahorro= valor * 0.15;

precio_con_descuento = valor - ahorro;

cout << "el precio del producto haciendole un descuento del 15 porciento al valor de " << valor << " es:" << precio_con_descuento;


    return 0;
}


//punto 3
int main(){

    int numero;
    int suma;
    int resta;
    int multiplicacion; 
    int division;

    numero = 10; 
    cout << "siendo " << numero << " el numero con el que se va a operar, daria los siguientes resultados: "<< endl;

    suma = numero + 5;
    cout << suma << endl;

    resta = suma - 3;
    cout << resta << endl;

    multiplicacion = resta * 2;
    cout << multiplicacion << endl;

    division = multiplicacion / 4;
    cout << division;
}

