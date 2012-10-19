//------------------------------------
//Declara puertos de entradas y salidas
//------------------------------------
int ledPin =  13;    // Declara el LED en el Pin 13
 //------------------------------------
//Funcion principal
//------------------------------------
void setup()              // Esta función corre cada vez que se 
           //inicia el Arduino
{                
    pinMode(ledPin, OUTPUT);  // Inicializa el LED como una salida   
}
 
//------------------------------------
//Funcion ciclicla
//------------------------------------
void loop()                 // Esta funcion se mantiene ejecutando 
      // cuando este energizado el Arduino   
{
  digitalWrite(ledPin, HIGH);   // Enciende el LED 
  delay(1000);                  // Temporiza un segundo (1s = 1000ms)
  digitalWrite(ledPin, LOW);    // Apaga el LED
  delay(1000);                  // Temporiza un segundo (1s = 1000ms)
}
