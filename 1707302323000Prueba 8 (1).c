// cliente.h

#Cancelar la reservación de un vuelo.

class Cliente {
private:
    std::string nombre;
    int km_acumulados;

public:
    Cliente(const std::string& n, int k) : nombre(n), km_acumulados(k) {}

    std::string getNombre() const { return nombre; }
    int getKmAcumulados() const { return km_acumulados; }

    void sumarKm(int km) { km_acumulados += km; }
    void restarKm(int km) { km_acumulados -= km; }
};

// reservacion.h

class Reservacion {
private:
    Cliente cliente;
    std::string id_vuelo;
    std::vector<int> asientos_reservados;
    double precio;

public:
    Reservacion(const Cliente& c, const std::string& id_v, double p) : cliente(c), id_vuelo(id_v), precio(p) {}

    void reservarAsiento(int asiento);
    void mostrarInformacionReservacion() const;
    void cancelarReservacion();
};

// reservacion.cpp

#include "reservacion.h"

void Reservacion::reservarAsiento(int asiento) {
    // Verificar disponibilidad de asiento y reservarlo
}

void Reservacion::mostrarInformacionReservacion() const {
    // Mostrar información de la reservación
}

void Reservacion::cancelarReservacion() {
    // Liberar asientos reservados y restar los kilómetros acumulados
}

// main.cpp

#include <iostream>
#include "reservacion.h"

int main() {
    Cliente cliente("Shazam", 777);
    std::string id_vuelo = "DTX729";
    double precio = 876.0;
    Reservacion reservacion(cliente, id_vuelo, precio);

    reservacion.reservarAsiento(5);
    reservacion.mostrarInformacionReservacion();
    reservacion.cancelarReservacion();
    reservacion.mostrarInformacionReservacion();

    return 0;
}
