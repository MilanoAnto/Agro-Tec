#include <DHT.h> // libreria del dht11
#define DHTPIN 8 //pin de señal
#define DHTTYPE DHT11 

DHT dht(DHTPIN, DHTTYPE);

void setup() 
{
Serial.begin(9600);  // ira a 9600 baudios, y transmite datos a la pantalla ordenador
dht.begin();
}

void loop() 
{
float h = dht.readHumidity();
float t = dht.readTemperature();

Serial.println("Temperatura ");
       Serial.println(t);
       Serial.println ("Humedad");
       Serial.println (h);
delay(9000);  //tiempo de refresco de mediciones  
}