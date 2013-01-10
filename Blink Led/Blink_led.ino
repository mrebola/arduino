//mrebola.com
//By Cesar Gaitan

/* Blink_Led
En este ejemplo se muestra como prender un diodo led por un segundo y luego se apaga por un segundo repetidamente. */
 
// Conectamos el Led al pin 13 de nuestro arduino
int led = 13;

// Setup() corre para dar de alta los pines que utilizara nuestra app
void setup() {                
  // Inicializamos el pin como salida digital
  pinMode(led, OUTPUT);     
}

//Loop infinito 
void loop() {
  digitalWrite(led, HIGH);   // Prendemos el led 
  delay(1000);               // Esperamos un segundo 
  digitalWrite(led, LOW);    // Apagamos el led 
  delay(1000);               // Esperamos un segundo 
}
