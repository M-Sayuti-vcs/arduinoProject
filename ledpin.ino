const int button1 = 1;
const int button2 = 2;
int ledpin[] = {13,12,11,10,9}; //Array

int buttonState1 = 0;
int buttonState2 = 0;

void setup() {
 for(int led = 0; led < 5; led++){
  pinMode(ledpin[led], OUTPUT);
  } 
  pinMode(button1,INPUT);
  pinMode(button2,INPUT);
    
}

void loop() {
  buttonState1 = digitalRead(button1);
  buttonState2 = digitalRead(button2);


// Animasi lampu dari atas ke bawah
{
  if(buttonState1 == HIGH){ 
    for(int off = 0; off < 5; off++){
      digitalWrite(ledpin[off], LOW);
    }
    } else {
      
    for(int j = 0; j < 5; j++){
      for(int k = 0; k < 5; k++){
        if(k == j ){
          digitalWrite(ledpin[k], HIGH);
          } else {
            digitalWrite(ledpin[k], LOW);
            }
        }
        delay(500);
      }
    }
}


  // Animasi lampu dari bawah ke atas
  {
    if(buttonState2 == HIGH){
      for(int off2 = 0; off2 < 5; off2++){
        digitalWrite(ledpin[off2], LOW);
      }
      } else {
        
      for(int j2 = 5; j2 >= 0; j2--){
        for(int k2 = 5; k2 >= 0; k2--){
          if(k2 == j2 ){
            digitalWrite(ledpin[k2], HIGH);
            } else {
              digitalWrite(ledpin[k2], LOW);
              }
          }
          delay(500);
        }
      }
  }

 
}
