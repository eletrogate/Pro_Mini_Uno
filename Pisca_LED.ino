int portaled = 12;//Define o pino 12 como Led 

void setup() {
 
 pinMode(portaled, OUTPUT);//Define a porta digital como sáida 
} 

void loop() {
 digitalWrite(portaled, HIGH);//Liga o Led 
 delay(1000);//Espera 1 segundo
 digitalWrite(portaled, LOW);//Desliga o Led
 delay(1000);//Espera 1 segundo 
}