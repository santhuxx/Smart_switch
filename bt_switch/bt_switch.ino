void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);

}

boolean buttonpress=false;

void loop()

{  if (Serial.available()) 
  {
    char c = Serial.read();
    Serial.println(c);

    if (c == '1') 
     {
       if (digitalRead(13) == LOW) 
       {
        digitalWrite(13, HIGH);

       } 
     }

         if (c == '0') 
     {
       if (digitalRead(13) == HIGH) 
       {
        digitalWrite(13, LOW);

       } 
     }
  }



  int sens=digitalRead(2);


  if(sens==HIGH){
    buttonpress=true;
    }else{
      if(buttonpress){
        changeLEDstate();
        buttonpress=false;
        }
    }

delay(100);
}

void changeLEDstate(){
  if(digitalRead(13)==HIGH){
  digitalWrite(13,LOW);
  }else{
    digitalWrite(13,HIGH);
  }
}






 
