# Aeropuerto-Internacional-de-la-Ciudad-de-M-xico
Sistema de gestión de reservaciones para el AICM, desarrollado en C++ con programación orientada a objetos. Permite agregar usuarios, verificar existencia, buscar vuelos, realizar reservaciones, y cancelarlas, validando disponibilidad de asientos y acumulación de kilómetros. Ideal para optimizar la gestión en entornos de alta demanda.

Relevancia del proyecto:

Este sistema puede servir como base para modelar soluciones en otros contextos donde se requiera gestionar reservas, como en otros aeropuertos o en la industria del transporte, ayudando a optimizar la gestión de vuelos y la experiencia del usuario en situaciones de alta demanda.

Características:

Gestión de usuarios: Agregar, verificar e ingresar usuarios al sistema con sus datos personales, evitando duplicados.

Búsqueda de vuelos: Los usuarios pueden buscar vuelos por destino y fecha.

Reservación de vuelos: Permite realizar reservaciones para uno o más pasajeros, validando la disponibilidad de asientos y calculando los kilómetros acumulados de los clientes.

Cancelación de reservaciones: Posibilidad de cancelar una reservación y actualizar la información de los pasajeros.

Funcionalidades implementadas:

Agregar nuevos usuarios con toda su información.

Verificar si un usuario existe y permitir el acceso o informar si el usuario no está registrado.

Buscar vuelos por destino y fecha de salida.

Reservar asientos disponibles para pasajeros y calcular el costo final.

Cancelar reservaciones y actualizar los kilómetros acumulados de los clientes.

Técnicas usadas:

Clases y objetos: Definición de clases como Usuario, Cliente, Vuelo y Reservación para modelar los diferentes componentes del sistema.

Colecciones y manejo de datos: Uso de std::vector para almacenar los vuelos y los asientos reservados.

Verificación de condiciones: Implementación de métodos para validar si un usuario existe o si un asiento está disponible.
