#include "Articulacion.h"
#include "Arduino.h" 

Articulacion::Articulacion(const int pinArg){
  this->pin = pinArg;  
  this->servo.attach(this->pin);
  Serial.print("Adjuntamos el servo al pin ");
  Serial.println(this->pin);

  this->servo.write(GRADO_INICIO);
}


bool Articulacion::mueveGrado(const int gradoDestino){
  int posicionActual = this->servo.read();
  Serial.print("El grado actual del servo es: ");
  Serial.println(posicionActual);
}
