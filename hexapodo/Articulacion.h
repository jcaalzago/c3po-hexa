#ifndef __ARTICULACION_H__
#define __ARTICULACION_H__

#include <Servo.h>

#define GRADO_INICIO 90


class Articulacion {
  private:
    Servo servo;
    int pin;

  public:
    Articulacion(const int pinArg);
    /**
     * @brief Mueve un grado hacia la posición de destino
     * 
     * @param gradoDestino el grado hacia el que quiero que se
     *                      mueva el servo de la articulación
     *                      
     * @return true en caso que haya llegado a destino
     *         false EOC
     *         
     * @doc Mover un grado en la dirección de 'gradoDestino', 
     *      si ya estuviera en destino, no se mueve y devolverá true.
     *      En caso de ser movido, devolverá false
     */
    bool mueveGrado(const int gradoDestino);
  
  
};

#endif
