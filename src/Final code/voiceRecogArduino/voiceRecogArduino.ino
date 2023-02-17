const int blueLed=10;
const int redLed=9;
const int greenLed=8;

char incomingData='0';
 
void setup() {
//getting leds ready
Serial.begin(9600);
pinMode(blueLed, OUTPUT);
pinMode(redLed, OUTPUT);
pinMode(greenLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  incomingData=Serial.read();

  // Switch case for controlling led in our case we have only 3 Blue, Green and Red 
  switch(incomingData)
  {
      //These cases are only for state ON of led
      // For blue led
      case 'B':
      digitalWrite(blueLed, HIGH);
      break;    
      
      // For red led
      case 'R':
      digitalWrite(redLed, HIGH);
      break;    
      
      // For green led
      case 'G':
      digitalWrite(greenLed, HIGH);
      break;    

      //These cases are  for state OFF of led and case name z , x, c are just randomly given you can also change but 
      // make sure you change it in a c# code as well.
      // For blue led
      case 'Z':
      digitalWrite(blueLed, LOW);
      break;    
      
      // For red led
      case 'X':
       digitalWrite(redLed, LOW);
      break;    
      
      // For green led
      case 'C':
       digitalWrite(greenLed, LOW);
      break;

      //For turning ON all leds at once :)
      case 'V':
      digitalWrite(blueLed, HIGH);
      digitalWrite(redLed, HIGH);
      digitalWrite(greenLed, HIGH);
      break;

      //For turning OFF all leds at once :)
      case 'M':
      digitalWrite(blueLed, LOW);
      digitalWrite(redLed, LOW);
      digitalWrite(greenLed, LOW);
      break;

      //Show off mode
      case 'F':
      digitalWrite(blueLed, HIGH);
      delay(200);
      digitalWrite(blueLed, LOW);
      delay(200);
      digitalWrite(redLed, HIGH);
      delay(200);
      digitalWrite(redLed, LOW);
      delay(200);
      digitalWrite(greenLed, HIGH);
      delay(200);
      digitalWrite(greenLed, LOW);
      break;

      case 'N':
      int n = 0;
      while (n < 3){
      digitalWrite(blueLed, HIGH);
      delay(100);
      digitalWrite(blueLed, LOW);
      delay(100);
      digitalWrite(redLed, HIGH);
      delay(100);
      digitalWrite(redLed, LOW);
      delay(100);
      digitalWrite(greenLed, HIGH);
      delay(100);
      digitalWrite(greenLed, LOW);
      digitalWrite(redLed, HIGH);
      delay(100);
      digitalWrite(redLed, LOW);
      delay(100);
      n = n + 1;
      }
      break;
  }
}
