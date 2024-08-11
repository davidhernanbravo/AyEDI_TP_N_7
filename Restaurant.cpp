/* Desarrolla una aplicación para un restaurante que tiene: entrada, plato principal y
postre, toma pedidos de los mozos. Estos envían la comanda codificada por número para cada plato.
El cocinero recibe el pedido en formato de texto con el número de mesa, nombre mozo, fecha, hora, 
entrada, plato principal y postre. Se pide desarrollar una app que pida la comanda y muestre
por pantalla la Info solicitada. Se recomienda utilizar Funciones, Tipos definidos por el usuario 
y Enumeradores.
*/

#include <iostream>
#include <string>
using namespace std;

// Enumeradores para: Entradas, Platos Principales y Postres.
enum Entradas 
    {
        ENSALADA = 1,
        DIP = 2,
        SOPA = 3

    };

enum PlatosPrincipales 
    {
        POLLO = 1,
        CARNE = 2,
        PASTA = 3
    };

enum Postres 
    {
        FRUTA = 1,
        FLAN = 2,
        HELADO = 3
    };

// Tipos Definidos Personalizados para representar la comanda y otras partes del pedido.

typedef string tNombreMozo;
typedef string tFecha;
typedef string tHora;
typedef int tNumeroMesa;
typedef int tCodigoEntrada;
typedef int tCodigoPlatoPrincipal;
typedef int tCodigoPostre;

// Encabezados de Funciones.

string obtenerNombreEntrada(tCodigoEntrada codigo);
string obtenerNombrePlatoPrincipal(tCodigoPlatoPrincipal codigo);
string obtenerNombrePostre(tCodigoPostre codigo);
void mostrarComanda(tNumeroMesa mesa, tNombreMozo mozo, tFecha fecha, tHora hora, 
    tCodigoEntrada entrada, tCodigoPlatoPrincipal principal, tCodigoPostre postre);
void tomarPedido();


int main()
    {
        tomarPedido();

        return 0;
    }

    // Función para convertir el código numérico en texto de las Entradas.

    string obtenerNombreEntrada(tCodigoEntrada codigo) 
        {
            switch (codigo) 
            {
                case ENSALADA: 
                    return "Ensalada";
                    break;
                case DIP: 
                    return "Dip";
                    break;
                case SOPA: 
                    return "Sopa";
                    break;
                default: 
                    return "Entrada Desconocida";
                    break;
            }
        }

    // Función para convertir el código numérico en texto de los Platos Principales.

    string obtenerNombrePlatoPrincipal(tCodigoPlatoPrincipal codigo) 
        {
        switch (codigo) 
            {
                case POLLO: 
                    return "Pollo";
                    break;
                case CARNE: 
                    return "Carne";
                    break;
                case PASTA: 
                    return "Pasta";
                    break;
                default: 
                    return "Plato Principal Desconocido";
                    break;
            }
        }

    // Función para convertir el código numérico en texto de los Postres.
    string obtenerNombrePostre(tCodigoPostre codigo) 
        {
            switch (codigo) 
                {
                    case FRUTA: 
                        return "Fruta";
                        break;
                    case FLAN: 
                        return "Flan";
                        break;
                    case HELADO: 
                        return "Helado";
                        break;
                    default: 
                        return "Postre Desconocido";
                        break;
                }
        }

    // Función para mostrar la comanda.

    void mostrarComanda(tNumeroMesa mesa, tNombreMozo mozo, tFecha fecha, tHora hora, 
    tCodigoEntrada entrada, tCodigoPlatoPrincipal principal, tCodigoPostre postre) 
        {   
            cout << "Comanda de cocina" << endl;
            cout << "-----------------" << endl;
            cout << "Mesa: " << mesa << endl;
            cout << "Mozo: " << mozo << endl;
            cout << "Fecha: " << fecha << endl;
            cout << "Hora: " << hora << endl;
            cout << "Entrada: " << obtenerNombreEntrada(entrada) << endl;
            cout << "Plato Principal: " << obtenerNombrePlatoPrincipal(principal) << endl;
            cout << "Postre: " << obtenerNombrePostre(postre) << endl;
            cout << endl;
        }

    // Función para tomar el pedido.

    void tomarPedido() 
        {
            tNumeroMesa mesa;
            tNombreMozo mozo;
            tFecha fecha;
            tHora hora;
            tCodigoEntrada entrada;
            tCodigoPlatoPrincipal principal;
            tCodigoPostre postre;

            cout << "***************************************************" << endl;
            cout << "RESTAURANTE COMA HASTA REVENTAR O REVIENTE COMIENDO" << endl;
            cout << "***************************************************" << endl;
            cout << endl;

            cout << "Ingreso de Pedido" << endl;
            cout << "-----------------" << endl;

            cout << "Ingrese el numero de la mesa: ";
            cin >> mesa;
            cin.ignore(); // Por las dudas...

            cout << "Ingrese el nombre del mozo: ";
            getline(cin, mozo);

            cout << "Ingrese la fecha (dd/mm/aaaa): ";
            getline(cin, fecha);

            cout << "Ingrese la hora (hh:mm): ";
            getline(cin, hora);

            cout << "Ingrese el codigo de la entrada (1 = Ensalada, 2 = Dip 3 = Sopa): ";
            cin >> entrada;

            cout << "Ingrese el codigo del plato principal (1 = Pollo, 2 = Carne, 3 = Pasta): ";
            cin >> principal;

            cout << "Ingrese el codigo del postre (1 = Fruta, 2 = Flan, 3 = Helado): ";
            cin >> postre;

            cout << endl;

            mostrarComanda(mesa, mozo, fecha, hora, entrada, principal, postre);
    }





