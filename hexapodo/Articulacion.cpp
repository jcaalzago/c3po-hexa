#include"Articulacion.h"
#include"Arduino.h" 

Articulacion::Articulacion(const int pinArg){
  this->pin = pinArg;  
  this->servo.attach(this->pin);
  Serial.print("Adjuntamos el servo al pin");
  Serial.println(this->pin);
}
