#include<iostream> //Iniciamos el programa añadiendo la libreria
using namespace std;

int fibonacci(int); //Se crea la funcion fibonacci de tipo entero, la cual realizara las operaciones

int main(){ //En el main se agregara lo siguiente
	int n; //Declaramos n = numero de serie, que introdujo el usuario
	cout<<"SERIE DE FIBONACCI"<<endl; //Mensaje en pantalla de lo que trata el programa
	cout<<"Ingrese numero: "; //Pedimos al usuario ingresar un numero
    cin>>n; //Se guardara en n, antes ya declarada
    cout<<"La serie de fibonacci de: "<<n<<" es: "<<fibonacci(n); //Se muestra un mensaje al usuario, seguido de llamar a la funcion fibonacci con el resultado
    
    return 0; //Finaliza el programa
}

int fibonacci(int n){ //Se desarrollo la funcion fibonacci antes ya declarada
	if(n>1){ //Inicia con una condicion si n es mayor a uno
		return fibonacci(n-1)+fibonacci(n-2); //Si se llega a cumplir, aqui aplicamos la recursividad, mandar a llamar a la misma funcion
		//Aqui se aplica de restarle n-1 sumandole n-2--Prueba: 
		//6>1  fibonacci(6-1)+fibonacci(6-2)
		//5>1  fibonacci(5-1)+fibonacci(5-2)
		//4>1  fibonacci (4-1)+fibonacci(4-2) asi hasta generar un bucle y llegar a encontrar el fibonacci de 5 y 4 = 5+3 = 8
	}
	else{ //Sino se realiza lo siguiente
		if(n==0){ //Si n=0
			return 0; //Retorna a cero
		}
		if(n==1){ //Si n=1
			return 1; //Retorna un uno
		}
	}
}
