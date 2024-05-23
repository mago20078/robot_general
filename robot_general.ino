// Definición de variables y constantes relacionadas con el motor izquierdo
const int BIA = 13;  // Pin digital 13 para controlar sentido giro motor izquierdo
const int BIB = 12;  // Pin digital 12 para controlar sentido giro motor izquierdo
 
// Definición de variables y constantes relacionadas con el motor derecho
const int AIA = 11;  // Pin digital 11 para controlar sentido giro motor izquierdo
const int AIB = 10;  // Pin digital 10 para controlar sentido giro motor izquierdo
 
//  Definición de variables y constantes relacionadas con los sensores
const int sensorAdelantePin = 2; // Sensor adelante (conectado al pin digital 2)
const int sensorIzquierdaPin = 3; // Sensor izquierda (conectado al pin digital 3)
const int sensorDerechaPin = 4; // Sensor derecha (conectado al pin digital 4)
const int sensorSueloPin = 5; // Sensor suelo (conectado al pin digital 5)
 
// Función que se ejecuta una sola vez al cargar el programa
void setup()
{
  // Se declaran todos los pines como salidas
  pinMode (BIA, OUTPUT);
  pinMode (BIB, OUTPUT);
  pinMode (AIA, OUTPUT);
  pinMode (AIB, OUTPUT);
 
  pinMode(sensorAdelantePin, INPUT);
  pinMode(sensorIzquierdaPin, INPUT);
  pinMode(sensorDerechaPin, INPUT);
  pinMode(sensorSueloPin, INPUT);
}
// Función que se repite de manera periódica
void loop() {
  int adelante = digitalRead(sensorAdelantePin);
  int izquierda = digitalRead(sensorIzquierdaPin);
  int derecha = digitalRead(sensorDerechaPin);
  int suelo = digitalRead(sensorSueloPin);

  if (adelante == HIGH) {
    // Aquí puedes agregar la lógica para detener o girar el robot
  }
  if (izquierda == HIGH) {
    // Aquí puedes agregar la lógica para girar a la izquierda
  }
  if (derecha == HIGH) {
    // Aquí puedes agregar la lógica para girar a la derecha
  }
  if (suelo == HIGH) {
    // Aquí puedes agregar la lógica para manejar el suelo (por ejemplo, detenerse)
  }

  delay(1000); // Espera 1 segundo antes de volver a leer los sensores
  }


/*
  Función robotAvance: esta función hará que ambos motores se activen a máxima potencia
  por lo que el robot avanzará hacia delante
*/
void robotAvance() {
  // Motor izquierdo
  // Al mantener un pin HIGH y el otro LOW el motor gira en un sentido
  digitalWrite (BIA, HIGH);
  digitalWrite (BIB, LOW);
  // Motor derecho
  // Al mantener un pin HIGH y el otro LOW el motor gira en un sentido
  digitalWrite (AIA, HIGH);
  digitalWrite (AIB, LOW);
  }
/*
  Función robotRetroceso: esta función hará que ambos motores se activen a máxima potencia 
  en sentido contrario al anterior por lo que el robot avanzará hacia atrás
*/
void robotRetroceso() {
  // Motor izquierdo
  // Al mantener un pin LOW y el otro HIGH el motor gira en sentido contrario al anterior
  digitalWrite (BIA, LOW);
  digitalWrite (BIB, HIGH);
  // Motor derecho
  // Al mantener un pin LOW y el otro HIGH el motor gira en sentido contrario al anterior
  digitalWrite (AIA, LOW);
  digitalWrite (AIB, HIGH);
  }
/*
  Función robotDerecha: esta función acccionará el motor izquierdo y parará el derecho
  por lo que el coche girará hacia la derecha (sentido horario)
*/
void robotDerecha() {
  //  Motor izquierdo
  // Se activa el motor izquierdo
  digitalWrite (BIA, HIGH);
  digitalWrite (BIB, LOW);
  // Motor derecho
  // Se para el motor derecho
  digitalWrite (AIA, LOW);
  digitalWrite (AIB, LOW);
  }
/*
  Función robotIzquierda: esta función acccionará el motor derecho y parará el izquierdo
  por lo que el coche girará hacia la izquierda (sentido antihorario)
*/
void robotIzquierda () {
   //  Motor izquierdo
  // Se para el motor izquierdo
  digitalWrite (BIA, LOW);
  digitalWrite (BIB, LOW);
  // Motor derecho
  // Se activa el motor derecho
  digitalWrite (AIA, HIGH);
  digitalWrite (AIB, LOW);
  }
/*
  Función robotParar: esta función parará ambos motores
  por lo que el robot se parará.
*/
void robotParar() {
  // Motor izquierdo
  // Se para el motor izquierdo
  digitalWrite (BIA, LOW);
  digitalWrite (BIB, LOW);
  // Motor derecho
  // Se para el motor derecho
  digitalWrite (AIA, LOW);
  digitalWrite (AIB, LOW);
  }