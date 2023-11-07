#define falante 8 //pino do alto falante
const int pinoBotao=2;
const int pinoReset=3;
const int pinoLed=13;
int estadoBotao=0;

void setup()
{
  pinMode(pinoBotao, INPUT);
  pinMode(pinoReset, INPUT);
  pinMode(pinoLed, OUTPUT);
}

void loop()
{

 estadoBotao=digitalRead(pinoBotao);
  if(estadoBotao==HIGH){
    digitalWrite(pinoLed, HIGH); 
  }  
  estadoBotao=digitalRead(pinoReset);
   if(estadoBotao==HIGH){
   digitalWrite(pinoLed, LOW); 
  }
    
  }