// void setup() {
//   // initialize digital pin LED_BUILTIN as an output.
//   pinMode(LED_BUILTIN, OUTPUT);
// }

// // the loop function runs over and over again forever
// void loop() {
//   // Paso a: Encender y apagar el LED por 400 mSeg tres veces
//   for (int i = 0; i < 3; i++) {
//     digitalWrite(LED_BUILTIN, HIGH);
//     delay(400);
//     digitalWrite(LED_BUILTIN, LOW);
//     delay(400);
//   }
  
//   // Paso b: Mantener el LED apagado por 1200 mSeg
//   delay(1200);

//   // Paso c: Encender y apagar el LED por 1200 mSeg tres veces
//   for (int i = 0; i < 3; i++) {
//     digitalWrite(LED_BUILTIN, HIGH);
//     delay(1200);
//     digitalWrite(LED_BUILTIN, LOW);
//     delay(1200);
//   }

//   // Paso d: Mantener el LED apagado por 1200 mSeg
//   delay(1200);

//   // Paso e: Encender y apagar el LED por 400 mSeg tres veces
//   for (int i = 0; i < 3; i++) {
//     digitalWrite(LED_BUILTIN, HIGH);
//     delay(400);
//     digitalWrite(LED_BUILTIN, LOW);
//     delay(400);
//   }

//   // Paso f: Mantener el LED apagado por 3600 mSeg
//   delay(3600);

//   // g. Volver a repetir el ciclo (el bucle loop() repite automáticamente)
// }

/////

// Repetir el caso anterior pero utilizando la mitad del tiempo que en el caso original.

// void setup() {
//   // initialize digital pin LED_BUILTIN as an output.
//   pinMode(LED_BUILTIN, OUTPUT);
// }

// // the loop function runs over and over again forever
// void loop() {
//   // Paso a: Encender y apagar el LED por 200 mSeg tres veces
//   for (int i = 0; i < 3; i++) {
//     digitalWrite(LED_BUILTIN, HIGH);
//     delay(200);
//     digitalWrite(LED_BUILTIN, LOW);
//     delay(200);
//   }
  
//   // Paso b: Mantener el LED apagado por 600 mSeg
//   delay(600);

//   // Paso c: Encender y apagar el LED por 600 mSeg tres veces
//   for (int i = 0; i < 3; i++) {
//     digitalWrite(LED_BUILTIN, HIGH);
//     delay(600);
//     digitalWrite(LED_BUILTIN, LOW);
//     delay(600);
//   }

//   // Paso d: Mantener el LED apagado por 600 mSeg
//   delay(600);

//   // Paso e: Encender y apagar el LED por 200 mSeg tres veces
//   for (int i = 0; i < 3; i++) {
//     digitalWrite(LED_BUILTIN, HIGH);
//     delay(200);
//     digitalWrite(LED_BUILTIN, LOW);
//     delay(200);
//   }

//   // Paso f: Mantener el LED apagado por 1800 mSeg
//   delay(1800);

//   // g. Volver a repetir el ciclo (el bucle loop() repite automáticamente)
// }

////

//Repetir el caso anterior pero utilizando el doble del tiempo que en el caso original.

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  // Paso a: Encender y apagar el LED por 800 mSeg tres veces
  for (int i = 0; i < 3; i++) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(800);
    digitalWrite(LED_BUILTIN, LOW);
    delay(800);
  }
  
  // Paso b: Mantener el LED apagado por 2400 mSeg
  delay(2400);

  // Paso c: Encender y apagar el LED por 2400 mSeg tres veces
  for (int i = 0; i < 3; i++) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(2400);
    digitalWrite(LED_BUILTIN, LOW);
    delay(2400);
  }

  // Paso d: Mantener el LED apagado por 2400 mSeg
  delay(2400);

  // Paso e: Encender y apagar el LED por 800 mSeg tres veces
  for (int i = 0; i < 3; i++) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(800);
    digitalWrite(LED_BUILTIN, LOW);
    delay(800);
  }

  // Paso f: Mantener el LED apagado por 7200 mSeg
  delay(7200);

  // g. Volver a repetir el ciclo (el bucle loop() repite automáticamente)
}


