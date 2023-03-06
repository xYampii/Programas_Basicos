#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <windows.h>
#include <stdio.h>
#include <string>
#include <bitset>
#include <cstring>
#include <sstream>
#include <cmath>
#include <iomanip>
#include <stdlib.h>

using namespace std;

//Funcion para centrar texto
void gotoxy(int x,int y)
{
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwpos;
    dwpos.X = x;
    dwpos.Y = y;
    SetConsoleCursorPosition(hcon, dwpos);
}

int main()
{
    int opcion;
    bool repetir = true;
    char op;
    

    do {
        system("cls");
        
        gotoxy(50,0);cout <<"Menu De Programas" << endl;
        gotoxy(50,1);cout <<"" << endl;
        cout << "1. Suma, Resta, Multiplicacion y Division de Dos Numeros" << endl;
        cout << "2. Determinar si un Numero es Par o Impar" << endl;
        cout << "3. Convertir Km a Mi, Mts a In, de Lbs a Kg "<< endl;
        cout << "4. Determinar si una Palabra o un Numero es Palindromo" << endl;
        cout << "5. Conversion de Numeros Ordinales a Numeros Romanos" << endl;
        cout << "6. Conversion de Numeros Enteros a Letras" << endl;
        cout << "7. Conversion de Numeros Enteros con Decimal a Letras" << endl;
        cout << "8. Tabla de Multiplicar" << endl;
        cout << "9. Tablas de Multiplicar (1 al 10)" << endl;
        cout << "10. Forma Grafica la Multiplicacion Manual" << endl;
        cout << "11. Conversion de Numeros Decimales a Binario" << endl;
        cout << "12. Conversion de Numeros Decimales a Hexadecimales" << endl;
        cout << "13. Figuras Geometricas Basicas" << endl;  
        cout << "14. Mover un Punto en Toda la Pantalla" << endl;
        cout << "15. Simulacion de un Cajero" << endl;
        cout << "16. Calcular la Hipotenusa" << endl;
        cout<<  "17. Calcular El Area de un Triangulo"<<endl;
        cout << "18. Ordenamiento de Numeros (Mayor a Menor) " << endl;
        cout << "19. Mostrar Numeros Pares Hasta 100" << endl;
        cout << "20. Calcular el IVA de un Producto" << endl;
        cout << "0. SALIR" << endl;
        
        cout << "\nIngrese una opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:
                
                
                float a, b;
                cout <<"\n1. Suma, Resta, Multiplicacion y Division de Dos Numeros" << endl;
                cout << "\nIngrese dos numeros: ";
                cin >> a >> b;

                cout << "La suma es: " << a + b << endl;
                cout << "La resta es: " << a - b << endl;
                cout << "La multiplicacion es: " << a * b << endl;

                if (b != 0) {
                    cout << "La division es: " << a / b << endl;
                } else {
                    cout << "No se puede dividir por cero." << endl;
                }

                cout << "\nPresione Cualquier Tecla Para Regresar al Menu";
                system("pause>nul"); 
                break;
                
            case 2:

                int num;
                cout<<"\n2. Determinar si un Numero es Par o Impar"<<endl;
                cout<<"\nIngrese un Numero:";
                cin>>num;

                    if ((num%2)==0){
                        cout<<"Par"<<endl;
                    }else{
                        cout<<"Impar"<<endl;
                        }
                            
                cout << "\nPresione Cualquier Tecla Para Regresar al Menu";
                system("pause>nul"); 
                break;
                
            case 3:

                float km, millas, metros, pulgadas, libras, kilos;
                
                cout<<"\n3. Convertir Km a Mi, Mts a In, de Lbs a Kg"<<endl;
                cout <<"\nIngrese una Distancia en Kilometros: ";
                cin >> km;

                millas = km * 0.621371;
                cout << km << " Kilometros es Igual a " << millas << " Millas." << endl;

                cout << "\nIngrese una Distancia en metros: ";
                cin >> metros;

                pulgadas = metros * 39.3701;
                cout << metros << " Metros es igual a " << pulgadas << " Pulgadas." << endl;

                cout << "\nIngrese un peso en Libras: ";
                cin >> libras;

                kilos = libras * 0.453592;
                cout << libras << " Libras es Igual a " << kilos << " Kilos." << endl;

                cout << "\nIngrese un Peso en Kilos: ";
                cin >> kilos;

                libras = kilos * 2.20462;
                cout << kilos << " Kilos es Igual a " << libras << " Libras." << endl;

                cout << "\nPresione Cualquier Tecla Para Regresar al Menu";
                system("pause>nul"); 
                break;
                
            case 4:

                cout << "\n4. Determinar si una Palabra o un Numero es Palindromo" << endl;

                { 
                float input;
                cout << "Ingrese una Palabra: ";
                cin >> input;
                char* ptr = reinterpret_cast<char*>(&input);
                int tamano = sizeof(input);
                bool es_palindromo = true;
                for (int i = 0; i < tamano / 2; i++) {
                    if (ptr[i] != ptr[tamano - 1 - i]) {
                        es_palindromo = false;
                        break;
                    }
                }
                if (es_palindromo) {
                    cout << "Es un Palidromo" << endl;
                } else {
                    cout << "No es un Palidromo" << endl;
                }
                }
                   
                              
                cout << "\nPresione Cualquier Tecla Para Regresar al Menu";
                system("pause>nul"); 
                break;
            
            case 5:

                int numero,unidades,decenas,centenas,millares;

                cout << "\n5. Conversion de Numeros Ordinales a Numeros Romanos" << endl;
                cout << "\nIngrese un Numero (1 a 4000) Para Convertirlo a Numero Romano: ";
                cin >> numero;
                
                unidades = numero%10; numero /= 10;
                decenas = numero%10; numero /= 10;
                centenas = numero%10; numero /= 10;
                millares = numero%10; numero /= 10;
                
                switch(millares){
                    case 1: cout << "M"; break;
                    case 2: cout << "MM"; break;
                    case 3: cout << "MMM"; break;
                }
                
                switch(centenas){
                    case 1: cout << "C"; break;
                    case 2: cout << "CC"; break;
                    case 3: cout << "CCC"; break;
                    case 4: cout << "CD"; break;
                    case 5: cout << "D"; break;
                    case 6: cout << "DC"; break;
                    case 7: cout << "DCC"; break;
                    case 8: cout << "DCCC"; break;
                    case 9: cout << "CM"; break;
                }
                
                switch(decenas){
                    case 1: cout << "X"; break;
                    case 2: cout << "XX"; break;
                    case 3: cout << "XXX"; break;
                    case 4: cout << "XL"; break;
                    case 5: cout << "L"; break;
                    case 6: cout << "LX"; break;
                    case 7: cout << "LXX"; break;
                    case 8: cout << "LXXX"; break;
                    case 9: cout << "XC"; break;
                }
                
                switch(unidades){
                    case 1: cout << "I"; break;
                    case 2: cout << "II"; break;
                    case 3: cout << "III"; break;
                    case 4: cout << "IV"; break;
                    case 5: cout << "V"; break;
                    case 6: cout << "VI"; break;
                    case 7: cout << "VII"; break;
                    case 8: cout << "VIII"; break;
                    case 9: cout << "IX"; break;
                }
                     
                cout << "\nPresione Cualquier Tecla Para Regresar al Menu";
                system("pause>nul"); 
                break;

            case 6: 
            cout << "6. Conversion de Numeros Enteros a Letras" << endl;

               {
                    int x;
                    cout<<"Ingrese un Numero: "<<endl;
                    cin>>x;
                    if((x<1)||(x>999)) 

                        {
                        if(x>=900)	{cout<<"NOVECIENTOS "	;x=x-900;}
                    else if(x>=800)	{cout<<"OCHOCIENTOS "	;x=x-800;}
                    else if(x>=700)	{cout<<"SETECIENTOS "	;x=x-700;}
                    else if(x>=600)	{cout<<"SEISCIENTOS "	;x=x-600;}
                    else if(x>=500)	{cout<<"QUINIENTOS "	;x=x-500;}
                    else if(x>=400)	{cout<<"CUATROCIENTOS "	;x=x-400;}
                    else if(x>=300)	{cout<<"TRESCIENTOS "	;x=x-300;}
                    else if(x>=200)	{cout<<"DOSCIENTOS "	;x=x-200;}
                    else if(x>100)	{cout<<"CIENTO "	;x=x-100;}
                    else if(x==100)	{cout<<"CIEN"		;x=x-100;}
                        if(x>90)	{cout<<"NOVENTA Y "	;x=x-90; }
                            if(x==90)	{cout<<"NOVENTA"	;x=x-90; }  
                            if(x>80)	{cout<<"OCHENTA Y "	;x=x-80; }
                            if(x==80)	{cout<<"OCHENTA"	;x=x-80; }
                            if(x>70)	{cout<<"SETENTA Y "	;x=x-70; }
                            if(x==70)	{cout<<"SETENTA"	;x=x-70; }
                            if(x>60)	{cout<<"SESENTA Y "	;x=x-60; }
                            if(x==60)	{cout<<"SESENTA"	;x=x-60; }
                            if(x>50)	{cout<<"CINCUENTA Y "	;x=x-50; }
                            if(x==50)	{cout<<"CINCUENTA"	;x=x-50; }
                            if(x>40)	{cout<<"CUARENTA Y "	;x=x-40; }
                            if(x==40)	{cout<<"CUARENTA"	;x=x-40; }
                            if(x>30)	{cout<<"TREINTA Y "	;x=x-30; }
                            if(x==30)	{cout<<"TREINTA"	;x=x-30; }
                            if(x>20)	{cout<<"VEINTI"		;x=x-20; }
                            if(x==20)	{cout<<"VEINTE"		;x=x-20; }
                        if(x>=16)	{cout<<"DIECI"		;x=x-10; }
                    else if(x==15)	{cout<<"QUINCE"		;x=x-15; }
                    else if(x==14)	{cout<<"CATORCE"	;x=x-14; }
                    else if(x==13)	{cout<<"TRECE"		;x=x-13; } 
                    else if(x==12)	{cout<<"DOCE"		;x=x-12; }
                    else if(x==11)	{cout<<"ONCE"		;x=x-11; }
                    else if(x==10)	{cout<<"DIEZ"		;x=x-10; }		
                        if(x==9)	{cout<<"NUEVE"		;x=x-9;  }
                        if(x==8)	{cout<<"OCHO"		;x=x-8;  }
                        if(x==7)	{cout<<"SIETE"		;x=x-7;  }
                            if(x==6)	{cout<<"SEIS"		;x=x-6;  }
                    else if(x==5)	{cout<<"CINCO"		;x=x-5;  }
                    else if(x==4)	{cout<<"CUATRO"		;x=x-4;	 }
                    else if(x==3)	{cout<<"TRES"		;x=x-3;	 }
                    else if(x==2)	{cout<<"DOS"		;x=x-2;	 }
                    else if(x==1)	{cout<<"UNO"		;x=x-1;	 }
                    }
                    cout<<endl;
                    cin.ignore();return 0;
                    }

                              
                cout << "\nPresione Cualquier Tecla Para Regresar al Menu";
                system("pause>nul"); 
                break;

            case 7:
            cout << "7. Conversion de Numeros Enteros con Decimal a Letras" << endl;
                {
                    double valor;
                    int miles,cientos,unidades,decimales;
                    char numeros[100][20] = 
                    {
                    {""},{"un"},{"dos"},{"tres"},{"cuatro"},{"cinco"},{"seis"},{"siete"},{"ocho"},{"nueve"},
                    {"diez"},{"once"},{"doce"},{"trece"},{"catorce"},{"quince"},{"dieciseis"},{"dieceisiete"},{"dieciocho"},{"diecinueve"},
                    {"veinte"},{"veintun"},{"veintidos"},{"veintitres"},{"veinticuatro"},{"veinticinco"},{"veintiseis"},{"veintisiete"},{"veintiocho"},{"veintinueve"},
                    {"treinta"},{"treinta y uno"},{"treinta y dos"},{"treinta y tres"},{"treinta y cuatro"},{"treinta y cinco"},{"treinta y seis"},{"treinta y siete"},{"treinta y ocho"},{"treinta y nueve"},
                    {"cuarenta"},{"cuarenta y uno"},{"cuarenta y dos"},{"cuarenta y tres"},{"cuarenta y cuatro"},{"cuarenta y cinco"},{"cuarenta y seis"},{"cuarenta y siete"},{"cuarenta y ocho"},{"cuarenta y nueve"},
                    {"cincuenta"},{"cincuenta y uno"},{"cincuenta y dos"},{"cincuenta y tres"},{"cincuenta y cuatro"},{"cincuenta y cinco"},{"cincuenta y seis"},{"cincuenta y siete"},{"cincuenta y ocho"},{"cincuenta y nueve"},
                    {"sesenta"},{"sesenta y uno"},{"sesenta y dos"},{"sesenta y tres"},{"sesenta y cuatro"},{"sesenta y cinco"},{"sesenta y seis"},{"sesenta y siete"},{"sesenta y ocho"},{"sesenta y nueve"},
                    {"setenta"},{"setenta y uno"},{"setenta y dos"},{"setenta y tres"},{"setenta y cuatro"},{"setenta y cinco"},{"setenta y seis"},{"setenta y siete"},{"setenta y ocho"},{"setenta y nueve"},
                    {"ochenta"},{"ochenta y uno"},{"ochenta y dos"},{"ochenta y tres"},{"ochenta y cuatro"},{"ochenta y cinco"},{"ochenta y seis"},{"ochenta y siete"},{"ochenta y ocho"},{"ochenta y nueve"},
                    {"noventa"},{"noventa y uno"},{"noventa y dos"},{"noventa y tres"},{"noventa y cuatro"},{"noventa y cinco"},{"noventa y seis"},{"noventa y siete"},{"noventa y ocho"},{"noventa y nueve"},
                    };
                    char centenas[10][20] = 
                    {
                    {""},{"ciento"},{"doscientos"},{"trescientos"},{"cuatrocientos"},{"quinientos"},{"seiscientos"},{"sietecientos"},{"ochocientos"},{"novecientos"},
                    };
                    cout << "Introduzca numero a transcribir: ";
                    cin >> valor;
                    miles = ((int)valor)/1000;
                    cientos = (((int)valor)%1000)/100;
                    unidades = ((int)valor)%100;
                    decimales = ((int) (valor*100.0))%100 ;
                    if (miles)
                    cout << numeros[miles] << " mil ";
                    if (cientos)
                    cout << centenas[cientos] << " ";
                    if (unidades) 
                    cout << numeros[unidades];
                    if (decimales)
                    {
                    if(miles || cientos || unidades)
                    {
                    cout << " con ";
                    }
                    cout << numeros[decimales] << " centimos.";
                    }
                    cout <<endl;
                    
                    } 
  
                              
                cout << "\nPresione Cualquier Tecla Para Regresar al Menu";
                system("pause>nul"); 
                break;

            case 8:

                int n1;
                
                do{
                    cout << "\n8. Tabla de Multiplicar" << endl;
                    cout<<"\nIngrese un Numero: ";
                    cin>>n1;
                    
                }while((n1<1) || (n1>10));
                
                for(int i=1; i<=10; i++){
                    cout<<n1<<" * "<<i<<" = "<<n1 * i<<endl;
                }
                              
                cout << "\nPresione Cualquier Tecla Para Regresar al Menu";
                system("pause>nul"); 
                break;
            
            case 9:
              int x;
                
                do{
                    cout << "\n9. Tablas de Multiplicar del 1 al 10:" << endl;
                    cout<<"\nIngrese un Numero: ";
                    cin>>x;
                    
                }while((x<1) || (x>10));
                
                cout<<"La tabla del "<<x<<" es:"<<endl;;
                for(int i=1; i<=10; i++){
                    cout<<x<<" * "<<i<<" = "<<x * i<<endl;
                }
                              
                cout << "\nPresione Cualquier Tecla Para Regresar al Menu";
                system("pause>nul"); 
                break;
            
            case 10:
                cout<<"\n10. Forma Grafica la Multiplicacion Manual"<<endl;
                {
                float num1 = 45.0, num2 = 32.0, resultado, espacio = 0.0;
                cout << "  " << num1 << endl;
                cout << "x " << num2 << endl;
                cout << "-----" << endl;
                while (num2 > 0.0) {
                resultado = num1 * (num2 - int(num2));
                    num2 = int(num2);
                    espacio += 1.0;
                    for (float i = 0.0; i < espacio; i += 1.0) {
                        cout << " ";
                    }
                    cout << resultado << endl;
                    resultado = num1 * num2;
                    for (float i = 0.0; i < espacio; i += 1.0) {
                        cout << " ";
                    }
                    cout << resultado << endl;
                    for (float i = 0.0; i < espacio; i += 1.0) {
                        cout << " ";
                    }
                    cout << "-----" << endl;
                    num2 /= 10.0;
                }
                resultado = num1 * int(num2);
                for (float i = 0.0; i < espacio; i += 1.0) {
                    cout << " ";
                }
                cout << resultado << endl;
                cout << "-----" << endl;
                cout << " " << num1 * num2 << endl;
                
                }

                cout << "\nPresione Cualquier Tecla Para Regresar al Menu";
                system("pause>nul"); 
                break;

            case 11: 
                float binario;
                int n;
                float valo;

                cout << "\n11. Conversion de Numeros Decimales a Binario" << endl;
                cout << "\nIngresa un Numero" << endl;
                cin >> n;
                cout << "El Numero " << n << " Convertido a Binario es: " << endl;
                valo = 1;
                binario = 0;
                while (n>=1) {
                    if (n%2==1) {
                        binario = binario+valo;
                    }
                    n = int(n/2);
                    valo = valo*10;
                }
                cout << binario << endl;

                cout << "\nPresione Cualquier Tecla Para Regresar al Menu";
                system("pause>nul"); 
                break;

            case 12:
                int mynum;

                cout << "\n12. Conversion de Numeros Decimales a Hexadecimales" << endl;
                cout << "\nIngrese un Numero: ";
                cin >> mynum;
                cout.unsetf(ios::dec);
                cout.setf(ios::hex | ios::showbase);
                cout << "\nLa Convercion a Hexadecimal es: " << mynum;
                cout.unsetf(ios::hex);
                cout.setf(ios::oct);
                cout << "\nLa Convercion a Octal es: " << mynum;
                cout.unsetf(ios::oct | ios::showbase);
                cout.setf(ios::dec);
                cout << "\n\n";

                cout << "\nPresione Cualquier Tecla Para Regresar al Menu";
                system("pause>nul"); 
                break;

            case 13:
            int choice, height, width;
                

            cout << "\n13. Figuras Geometricas Basicas" << endl;
            cout << "\nIngrese una Opcion\n";
            cout << "1. Cuadrado\n";
            cout << "2. Rectangulo\n";
            cout << "3. Triangulo\n";

            cin >> choice;

            switch (choice)
            {
                case 1:
                    cout << "Ingrese la Altura: ";
                    cin >> height;
                    width = height;

                    for (int i = 1; i <= height; i++)
                    {
                        for (int j = 1; j <= width; j++)
                        {
                            cout << "* ";
                        }

                        cout << endl;
                    }
                    break;

                case 2:
                    cout << "Ingrese la Altura: ";
                    cin >> height;
                    cout << "Ingrese el Ancho: ";
                    cin >> width;

                    for (int i = 1; i <= height; i++)
                    {
                        for (int j = 1; j <= width; j++)
                        {
                            cout << "* ";
                        }

                        cout << endl;
                    }
                    break;

                case 3:
                    cout << "Ingrese el Alto: ";
                    cin >> height;

                    for (int i = 1; i <= height; i++)
                    {
                        for (int j = 1; j <= i; j++)
                        {
                            cout << "* ";
                        }

                        cout << endl;
                    }
                    }
                default:
                
                cout << "\nPresione Cualquier Tecla Para Regresar al Menu";
                system("pause>nul"); 
                break;

            case 14:
            
                cout << "\n14. Mover un Punto en Toda la Pantalla" << endl;

                {
                int x = 0, y = 0; 
                int dx = 1, dy = 1; 
                while (true)
                {
                system("cls");
                for (int i = 0; i < y; i++)
                std::cout << std::endl;
                for (int i = 0; i < x; i++)
                std::cout << " ";
                std::cout << "*" << std::endl;
                x += dx;
                y += dy;
                if (x == 0 || x == 10) 
                    dx = -dx;
                if (y == 0 || y == 10) 
                dy = -dy;

                    
                }
                }

                cout << "\nPresione Cualquier Tecla Para Regresar al Menu";
                system("pause>nul"); 
                break;


            case 15:
            cout << "\n15. Simulacion de un Cajero" << endl;
            {
                float contador;
                string contrasena;
                float deposito;
                int respuesta;
                float retiro;
                float saldo;
                saldo = 1000;
                contador = 1;
                while (contador<=3) {
                    cout << "\nIngrese su Contraseña" << endl;
                    cin >> contrasena;
                    if (contrasena=="abc") {
                        contador = 4;
                        respuesta = 0;
                        while (respuesta!=4) {
                            cout << "1. Consulta de Saldo" << endl;
                            cout << "2. Deposito de Dinero" << endl;
                            cout << "3: . Retiro de Dinero" << endl;
                            cout << "4. Salir" << endl;
                            cin >> respuesta;
                            switch (respuesta) {
                            case 1:
                                cout << "\nSu Saldo Actual es de: Q. " << saldo << endl;
                                break;
                            case 2:
                                cout << "\nIngrese la Cantidad a Depositar: " << endl;
                                cin >> deposito;
                                saldo = saldo+deposito;
                                cout << "\nSu Salso Actual es de: Q. " << saldo << endl;
                                break;
                            case 3:
                                cout << "\nIngresa la Cantidad a Retirar" << endl;
                                cin >> retiro;
                                if (retiro>saldo) {
                                    cout << "\nLa Cantidad Supera su Saldo" << endl;
                                    cout << "\nTu saldo actual es: Q. " << saldo << endl;
                                } else {
                                    saldo = saldo-retiro;
                                    cout << "\nTu saldo actual es: Q. " << saldo << endl;
                                }
                                break;
                            }
                        }
                    } else {
                        contador = contador+1;
                        if (contador==4) {
                            cout << "\nIncorrecto, Intentelo mas tarde." << endl;
                        } else {
                            cout << "\nLa Contraseña es Incorrecta." << endl;
                        }
                    }
                }
                    return 0;
                    }  
                cout << "\nPresione Cualquier Tecla Para Regresar al Menu";
                system("pause>nul"); 
                break;

            case 16:
            
                cout << "\n16. Calcular la Hipotenusa" << endl;
                float cateto1, cateto2;{
                cout << "\nIngrese el Valor del Primer Cateto: ";
                cin >> cateto1;
                cout << "\nIngrese el Valor del Segundo Cateto: ";
                cin >> cateto2;
                float hipotenusa = sqrt(cateto1*cateto1 + cateto2*cateto2);
                cout << "La Hipotenusa es: " << hipotenusa << endl;
                }
                cout << "\nPresione Cualquier Tecla Para Regresar al Menu";
                system("pause>nul"); 
                break;

            case 17: 
                cout<<"\n17. Calcular El Area de un Triangulo"<<endl;
                {
                float base = 4.5;
                float altura = 3.2;
                float area = (base * altura) / 2;
                cout << "\nEl area del Triangulo es: " << area <<endl;
    
                }

                cout << "\nPresione Cualquier Tecla Para Regresar al Menu";
                system("pause>nul"); 
                break;

            case 18:

                cout << "\n18. Ordenamiento de Numeros (Mayor a Menor) " << endl;

                {
                int numeros[] = { 5, 2, 8, 1, 3 };
                int n = sizeof(numeros) / sizeof(numeros[0]);

                
                for (int i = 0; i < n - 1; i++) {
                    for (int j = 0; j < n - i - 1; j++) {
                        if (numeros[j] < numeros[j + 1]) {
                            int temp = numeros[j];
                            numeros[j] = numeros[j + 1];
                            numeros[j + 1] = temp;
                        }
                    }
                }

                
                for (int i = 0; i < n; i++) {
                    cout << numeros[i] << " ";
                }
                cout << endl;
            }

 
                cout << "\nPresione Cualquier Tecla Para Regresar al Menu";
                system("pause>nul"); 
                break;

            case 19:
                cout<<"\n19. Mostrar Nunmeros Pares Hasta el 100"<<endl;
                {
                float i = 0.0;
                while (i <= 100.0) {
                    if (fmod(i, 2.0) == 0.0) {
                        std::cout << i << " ";
                    }
                    i += 0.5;
                }
                }

                cout << "\nPresione Cualquier Tecla Para Regresar al Menu";
                system("pause>nul"); 
                break;

            case 20:
                cout<<"\n20. Calcular el Iva de un Producto";
                {
                float r,x,iva;
                
                cout<<"\nIntroduzca el precio de un producto:";
                scanf("%f", &x);
                
                iva=(16*x/100);
                r=x-iva;
                
                cout<<"\nEl precio con IVA es de: %f\n\n",x+iva;
                cout<<"\nEl precio sin IVA es de: %f\n\n",r;
                
                }
                
                cout << "\nPresione Cualquier Tecla Para Regresar al Menu";
                system("pause>nul"); 
                break;
            
            case 0:
            	repetir = false;
            	break;
        }        
    } while (repetir);
	 
    return 0;
}