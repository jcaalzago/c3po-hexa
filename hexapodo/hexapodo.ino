#include "Articulacion.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Articulacion a1(9);

  a1.mueveGrado(180);
}

void loop() {
  // put your main code here, to run repeatedly:

}
