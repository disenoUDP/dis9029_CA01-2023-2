float decimalNumber = 0.2; // Decimal de inicio
float increment = 3.768;   // Valor a sumar

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  // Suma el valor de incremento al número decimal
  decimalNumber += increment;

  // Se pueden crear comentarios más complejos que describan más de una línea de código, como agrupar estas dos líneas de comentarios, de esta manera la escritura se hace más rápida.
  // Envía el número decimal actual por la comunicación serial
  Serial.print("Número decimal actual: ");
  Serial.println(decimalNumber, 4); // Imprime con 4 decimales

  delay(1000); // Espera 1 segundo antes de sumar nuevamente
}
