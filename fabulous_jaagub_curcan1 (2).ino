// C++ code
//
const int pinoBotao=2;
const int pinoLed=13;
int estadoBotao=0;

void setup()
{
  pinMode(pinoBotao, OUTPUT);
  pinMode(pinoLed, INPUT);
}

void loop()
{
  estadoBotao=digitalRead(pinoBotao);
  
  if(estadoBotao==HIGH){
    digitalWrite(pinoLed, HIGH);
  }else{
    digitalWrite(pinoLed, LOW);
  }  
}