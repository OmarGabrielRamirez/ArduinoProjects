#include <Servo.h> 
#define pinLED1 13
#define pinLED2 12
int position_servo = 0; 


Servo servo_8;
Servo servo_9;

void setup()
{
  	servo_8.attach(8);
    servo_9.attach(9);
 	pinMode(pinLED1, OUTPUT);
  	pinMode(pinLED2, OUTPUT);
  	
}

void loop()
{
    position_servo = 0;

    for(position_servo = 1; position_servo <=180; position_servo++){
        servo_8.write(position_servo);
      	servo_9.write(position_servo);
      	delay(10);
      
      if(position_servo == 180){
        digitalWrite(pinLED1, HIGH);
      }else{
        digitalWrite(pinLED1, LOW);
      }
      
      if(position_servo == 1){
        digitalWrite(pinLED2, HIGH);
      }else{
        digitalWrite(pinLED2, LOW);
      }
    }
  
    for(position_servo =180; position_servo >=-1; position_servo--){
        servo_8.write(position_servo);
      	servo_9.write(position_servo);
        delay(10);
    }
  
  

  
  

  

  
  
}