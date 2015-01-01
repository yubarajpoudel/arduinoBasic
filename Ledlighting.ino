

//Simple Example in the arduino using Serial monitor that does in 3 mode of operation
//By : Yubaraj Poudel
//Date : 1/1/2015


// this fucnction setup the environment for the basic operation

void setup(){
  Serial.begin(9600); // serial .begin defines the data transfer rate between the computer and the arduino device
  for(int i = 8;i<= 13;i++){
    pinMode(i,OUTPUT); // setting the pin configuration for the output
  }
  
 Serial.println("Please enter the command 1 to operate");  // print the statement in the serial monitor
 
}

// defining the loop for the operation of the robots

void loop(){

  // do the operation untill the serial is avialable

  while(Serial.available()){
      int command = Serial.read();
      if(command == '1'){
        Serial.println("blink led command");
        blinkLED();
      }
      if(command == '2'){
        Serial.println("Light all command");
        lightALL();
      }
      if(command == '3'){
        Serial.println("alternate blinking");
        blinkAlTER();
      }
      if(command =='0'){
        Serial.println("All lighting getting off");
        lightOFF();
      }
      
  } 
   
}

// function to blink the led

void blinkLED(){
        int i;
        for(i = 8;i<=13;i++){
          digitalWrite(i,HIGH);
        }
          delay(1000);
          for(i = 8;i<=13;i++){
            digitalWrite(i,LOW);
          }
          i=8;
         blinkLED();
        
        
      }
  // function to light all the led

      void lightALL(){
        int i;
        for(i = 8;i<=13;i++){
          digitalWrite(i,HIGH);
           }
           i=8;
          // lightALL();
      }  
  // function to alter the blinking

      void blinkAlTER(){
        int i;
        for(int i = 8;i<=13;i++){
          digitalWrite(i,HIGH);
          delay(1000);
          digitalWrite(i,LOW);
        }
        i=8;
       // blinkAlTER();
      }

  // funtion to turn the all light off
    
      void lightOFF(){
        for(int i = 8;i<=13;i++){
          digitalWrite(i,LOW);
        }
      }