#Realizar la reservación para 1 pasajero con un cliente que tenga más de 50,000 km. acumulados.

El sistema deberá mostrar los datos de la reservación, precio final y kilómetros acumulados finales.


// Cliente con kilómetros acumulados
class Cliente {
private:
    std::string nombre;
    int kilometrosAcumulados;

public:
    Cliente(const std::string& n, int k) : nombre(n), kilometrosAcumulados(k) {}

    std::string getNombre() const { return nombre; }
    int getKilometrosAcumulados() const { return kilometrosAcumulados; }

    // Método para agregar kilómetros
    void agregarKilometros(int k) { kilometrosAcumulados += k; }
};

// Reservación de un cliente en un vuelo
class Reservacion {
private:
    Cliente cliente;
    Vuelo vuelo;
    std::vector<int> asientosReservados;
    double precio;

public:
    Reservacion(const Cliente& c, const Vuelo& v, double p) : cliente(c), vuelo(v), precio(p) {}

    // Reserva un asiento y actualiza los kilómetros acumulados del cliente
    void reservarAsiento(int asiento);

    // Muestra los datos de la reservación, precio final y kilómetros acumulados finales
    void mostrarReservacion() const;
};

// Implementación de los métodos de la clase Reservacion
#include "reservacion.h"

void Reservacion::reservarAsiento(int asiento) {
    if (asiento >= 0 && asiento < 100 && !vuelo.getAsiento(asiento)) {
        vuelo.reservarAsiento(asiento);
        asientosReservados.push_back(asiento);
        cliente.agregarKilometros(50); // Agrega 50 km al cliente por cada asiento reservado
    } else {
        std::cout << "Error: el asiento " << asiento << " no está disponible" << std::endl;
    }
}

void Reservacion::mostrarReservacion() const {
    std::cout << "Reservación de " << cliente.getNombre() << " en el vuelo " << vuelo.getId() << ":" << std::endl;
    std::cout << "Asientos reservados:";
    for (int asiento : asientosReservados) {
        std::cout << " " << asiento;
    }
    std::cout << std::endl << "Precio final: $" << precio << std::endl;
    std::cout << "Kilómetros acumulados finales: " << cliente.getKilometrosAcumulados() << std::endl;
}

// Prueba de la clase Reservacion
#include <iostream>
#include "
