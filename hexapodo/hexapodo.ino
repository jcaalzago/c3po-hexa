#include "Articulacion.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Articulacion a1(9);

  int posicionFinal = 120;
  
  
  while(a1.mueveGrado(120) == false){
  }
  while(a1.mueveGrado(60) == false){
  }  
  while(a1.mueveGrado(90) == false){
  } 
  
  Serial.println("He terminado, chin pum");
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
