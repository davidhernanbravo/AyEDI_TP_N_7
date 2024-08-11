/* Una Verdulería nos pide que armemos el pedido para el mayorista para lo cual deberemos pedir al usuario el código proveedor, 
razón social, fecha de solicitud y fecha de entrega. Las frutas estarán enumeradas (tomar solo 6 a modo de ejemplo), 
mostrando los datos por pantalla.*/

#include <iostream>
#include <string>
using namespace std;

// Definir Tipos Personalizados.

typedef string tCadena;
typedef int tEntero;

// Enumerador para las Frutas disponibles
enum Frutas 
    {
        FRUTILLA = 1,
        BANANA = 2,
        NARANJA = 3,
        MANZANA = 4,
        KIWI = 5,
        ANANA = 6
    };
    
// Encabezado de Funciones.

void mostrarFrutas();
void tomarDatosPedido(tCadena &codigoProveedor, tCadena &razonSocial, tCadena &fechaSolicitud, 
tCadena &fechaEntrega, tEntero frutasElegidas[], tEntero &cantidadFrutas);
void mostrarPedido(const tCadena &codigoProveedor, const tCadena &razonSocial, const tCadena &fechaSolicitud, 
const tCadena &fechaEntrega, const tEntero frutasElegidas[], const tEntero &cantidadFrutas);

int main()
    {
        // Variables para almacenar los datos del pedido.

        tCadena codigoProveedor, razonSocial, fechaSolicitud, fechaEntrega;
        tEntero frutasElegidas[6]; // Se permite seleccionar hasta 6 frutas diferentes.
        tEntero cantidadFrutas = 0;

        // Tomar los datos del Pedido.

        tomarDatosPedido(codigoProveedor, razonSocial, fechaSolicitud, fechaEntrega, frutasElegidas, cantidadFrutas);

        // Mostrar el Pedido realizado.

        mostrarPedido(codigoProveedor, razonSocial, fechaSolicitud, fechaEntrega, frutasElegidas, cantidadFrutas);

        return 0;
    }

    // Función que muestra las Frutas disponbles.
    
    void mostrarFrutas() 
        {
            cout << "Frutas disponibles:" << endl;
            cout << "------------------" << endl;
            cout << FRUTILLA << ". Frutilla" << endl;
            cout << BANANA << ". Banana" << endl;
            cout << NARANJA << ". Naranja" << endl;
            cout << MANZANA << ". Manzana" << endl;
            cout << KIWI << ". Kiwi" << endl;
            cout << ANANA << ". Anana" << endl;
            cout << 0 << ". Finalizar Pedido" << endl;
            cout << endl;
        }
    
    // Función para tomar la información del Pedido.

    void tomarDatosPedido(tCadena &codigoProveedor, tCadena &razonSocial, tCadena &fechaSolicitud, 
    tCadena &fechaEntrega, tEntero frutasElegidas[], tEntero &cantidadFrutas)
        {
            cout << "************************" << endl;
            cout << "VERDULERIA DON COCO SECO" << endl;
            cout << "************************" << endl;
            cout << endl;

            cout << "Planilla de pedidos" << endl;
            cout << "-------------------" << endl;
            
            cout << "Ingrese el codigo del proveedor: ";
            getline(cin, codigoProveedor);

            cout << "Ingrese la razon social: ";
            getline(cin, razonSocial);

            cout << "Ingrese la fecha de solicitud (dd/mm/aaaa): ";
            getline(cin, fechaSolicitud);

            cout << "Ingrese la fecha de entrega (dd/mm/aaaa): ";
            getline(cin, fechaEntrega);

            tEntero opcion = 0;
            cantidadFrutas = 0;

            // Permitir seleccionar más de una fruta.

            do 
                {
                    mostrarFrutas();
                    cout << "Seleccione el numero de la fruta que desea: ";
                    cin >> opcion;
                    if (opcion >= FRUTILLA && opcion <= ANANA) 
                    {
                        frutasElegidas[cantidadFrutas++] = opcion;

                    } else if (opcion != 0) 
                        {
                            cout << "Opcion no valida. Intente de nuevo." << endl;
                        }
                } while(opcion != 0 && cantidadFrutas < 6);  // Permite un máximo de 6 frutas.

            cout << endl;
        }   

    // Función para mostrar los datos del Pedido.

    void mostrarPedido(const tCadena &codigoProveedor, const tCadena &razonSocial, const tCadena &fechaSolicitud, 
    const tCadena &fechaEntrega, const tEntero frutasElegidas[], const tEntero &cantidadFrutas) 
        {
            cout << "*********************************" << endl;
            cout << "Datos de su Pedido" << endl;
            cout << "------------------" << endl;
            cout << "Codigo del proveedor: " << codigoProveedor << endl;
            cout << "Razon social: " << razonSocial << endl;
            cout << "Fecha de solicitud: " << fechaSolicitud << endl;
            cout << "Fecha de entrega: " << fechaEntrega << endl;

            // Mostrar las Frutas seleccionadas.

            cout << "Frutas seleccionadas:" << endl;
            for (tEntero i = 0; i < cantidadFrutas; ++i) 
                {
                    switch(frutasElegidas[i]) 
                        {
                            case FRUTILLA: 
                                cout << "- Frutilla" << endl; 
                                break;
                            case BANANA: 
                                cout << "- Banana" << endl; 
                                break;
                            case NARANJA: 
                                cout << "- Naranja" << endl; 
                                break;
                            case MANZANA: 
                                cout << "- Manzana" << endl; 
                                break;
                            case KIWI: 
                                cout << "- Kiwi" << endl; 
                                break;
                            case ANANA: 
                                cout << "- Anana" << endl; 
                                break;
                            default: 
                                cout << "- Opcion no valida" << endl; 
                                break;
                        }
                }
            cout << endl;
            cout << "*********************************" << endl;
            cout << endl;
        }
