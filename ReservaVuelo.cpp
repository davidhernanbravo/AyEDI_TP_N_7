/* Una empresa de viajes nos pide que realicemos un programa para tomar
reservas en avión, las mismas pueden ser clase Primera, Bussiness y
Económica, además del DNI, Apellido y Nombre, Aeropuerto origen y Destino:

Código Aeropuerto:
1.	Bahía Blanca: BHI
2.	Buenos Aires Aeroparque: AEP
3.	Buenos Aires El Palomar: EPA
4.	Buenos Aires Ezeiza: EZE
5.	San Carlos de Bariloche: BRC
6.	San Fernando del Valle de Catamarca: CTC
7.	Comodoro Rivadavia: CRD

El usuario introduce los datos personales, la clase, el origen y destino,
mostrando el resultado x pantalla.
*/

#include <iostream>
#include <string>
using namespace std;

// Enumerador para las Clases.

enum Clase 
    {
        PRIMERA,
        BUSINESS,
        ECONOMICA
    };

// Tipos Definidos Personalizados para los Códigos de Aeropuertos.

typedef enum 
    {
        BHI,
        AEP,
        EPA,
        EZE,
        BRC,
        CTC,
        CRD
    } tCodigoAeropuerto;

// Encabezado de Funciones.

string obtenerNombreAeropuerto(tCodigoAeropuerto codigo);
string obtenerNombreClase(Clase clase);
void tomarReserva();

int main()
    {
        tomarReserva();
        return 0;
    }

    // Función para levantar el nombre del Aeropuerto según Código.

    string obtenerNombreAeropuerto(tCodigoAeropuerto codigo) 
        {
            switch(codigo) 
            {
                case BHI: 
                    return "Bahia Blanca";
                    break;
                case AEP: 
                    return "Buenos Aires Aeroparque";
                    break;
                case EPA: 
                    return "Buenos Aires El Palomar";
                    break;
                case EZE: 
                    return "Buenos Aires Ezeiza";
                    break;
                case BRC: 
                    return "San Carlos de Bariloche";
                    break;
                case CTC: 
                    return "San Fernando del Valle de Catamarca";
                    break;
                case CRD: 
                    return "Comodoro Rivadavia";
                    break;
                default: 
                    return "Desconocido";
                    break;
            }
        }

    // Función para levantar la Clase.
    
    string obtenerNombreClase(Clase clase) 
        {
        switch(clase) 
            {
                case PRIMERA: 
                    return "Primera";
                    break;
                case BUSINESS: 
                    return "Business";
                    break;
                case ECONOMICA: 
                    return "Economica";
                    break;
                default: 
                    return "Desconocida";
                    break;
            }
        }

    // Función para tomar Reservas.

    void tomarReserva() 
        {
            string dni, apellido, nombre;
            tCodigoAeropuerto aeropuertoOrigen, aeropuertoDestino;
            Clase clase;
            int opcionClase, opcionOrigen, opcionDestino;

            // Encabezado.

            cout << "************************" << endl;
            cout << "TURISMO EL VIAJERO FELIZ" << endl;
            cout << "************************" << endl;
            cout << endl;

            // Obtener datos del cliente.

            cout << "Datos del Pasajero" << endl;
            cout << "------------------" << endl;
            cout << "Ingrese DNI: ";
            cin >> dni;
            cout << "Ingrese Apellido: ";
            cin >> apellido;
            cout << "Ingrese Nombre: ";
            cin >> nombre;
            cout << endl;

            // Seleccionar Aeropuerto de Origen.

            cout << "Seleccione el Aeropuerto de Origen:" << endl;
            cout << "----------------------------------" << endl;
            cout << "1. Bahia Blanca (BHI)" << endl;
            cout << "2. Buenos Aires Aeroparque (AEP)" << endl;
            cout << "3. Buenos Aires El Palomar (EPA)" << endl;
            cout << "4. Buenos Aires Ezeiza (EZE)" << endl;
            cout << "5. San Carlos de Bariloche (BRC)" << endl;
            cout << "6. San Fernando del Valle de Catamarca (CTC)" << endl;
            cout << "7. Comodoro Rivadavia (CRD)" << endl;
            cout << endl;
            cout << "Ingrese el Numero del Aeropuerto de Origen: ";
            cin >> opcionOrigen;
            cout << endl;
            aeropuertoOrigen = static_cast<tCodigoAeropuerto>(opcionOrigen - 1);

            // Seleccionar Aeropuerto de Destino.

            cout << "Seleccione el aeropuerto de destino:" << endl;
            cout << "-----------------------------------" << endl;
            cout << "1. Bahia Blanca (BHI)" << endl;
            cout << "2. Buenos Aires Aeroparque (AEP)" << endl;
            cout << "3. Buenos Aires El Palomar (EPA)" << endl;
            cout << "4. Buenos Aires Ezeiza (EZE)" << endl;
            cout << "5. San Carlos de Bariloche (BRC)" << endl;
            cout << "6. San Fernando del Valle de Catamarca (CTC)" << endl;
            cout << "7. Comodoro Rivadavia (CRD)" << endl;
            cout << endl;
            cout << "Ingrese el Numero del Aeropuerto de Destino: ";
            cin >> opcionDestino;
            cout << endl;
            aeropuertoDestino = static_cast<tCodigoAeropuerto>(opcionDestino - 1);

            // Seleccionar Clase.

            cout << "Seleccione la Clase:" << endl;
            cout << "-------------------" << endl;
            cout << "1. Primera" << endl;
            cout << "2. Business" << endl;
            cout << "3. Economica" << endl;
            cout << endl;
            cout << "Ingrese el numero de la Clase: ";
            cin >> opcionClase;
            cout << endl;
            clase = static_cast<Clase>(opcionClase - 1);

            // Mostrar confirmación de la Reserva.
            
            cout << "**********************************************************" << endl;
            cout << "EUREKA!!! SU RESERVA A SIDO CONFIRMADA" << endl;
            cout << "--------------------------------------" << endl;
            cout << "DNI: " << dni << endl;
            cout << "Apellido: " << apellido << endl;
            cout << "Nombre: " << nombre << endl;
            cout << "Aeropuerto de Origen: " << obtenerNombreAeropuerto(aeropuertoOrigen) << endl;
            cout << "Aeropuerto de Destino: " << obtenerNombreAeropuerto(aeropuertoDestino) << endl;
            cout << "Clase: " << obtenerNombreClase(clase) << endl;
            cout << "**********************************************************" << endl;
            cout << endl;
        }