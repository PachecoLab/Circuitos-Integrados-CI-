void setup()      //Definicion funcion setup
{
  pinMode(8, OUTPUT); //Se definen las señales de salida del circuito
  pinMode(9, OUTPUT);
  pinMode(13,OUTPUT);
}

void CambiaLed(){   //Definicion de funcion void
  digitalWrite(13,!digitalRead(13));  //Se energiza el pin13
}

void loop()
{
  digitalWrite(9, HIGH); //En primer lugar se energiza el pin 9 y se desenergiza el pin 8
  digitalWrite(8, LOW);  //De esta forma se inicia el giro del motor de CC en sentido negativo (horario)
  delay(1000); // Espera 1 segundo (1000 milisegundos)
  digitalWrite(9, HIGH); //Luego se energiza tanto el pin 8 como el 9
  digitalWrite(8, HIGH); //De esta forma se frena el motor de CC
  delay(1000); // Espera 1 segundo (1000 milisegundos)
  digitalWrite(8, HIGH); //Finalmente se energiza el pin 8 y se desenergiza el pin 9
  digitalWrite(9, LOW);  //De esta forma se inicia el giro del motor de CC en sentido positivo (anti-horario)
  delay(1000); // Espera 1 segundo (1000 milisegundos)
  CambiaLed(); //Se llama a la funcion CambiaLed() que energiza el pin13 prendiendo asi el LED interno de la placa Arduino
}        //El led interno energizado indica la finalizacion del ciclo
         //Tambien se añade un LED analogo que cumple la misma funcionalidad del LED interno de la placa.
