void setup() {
  // put your setup code here, to run once:

    Serial.begin(9600);
    pinMode(0,INPUT_PULLUP);
    pinMode(5,OUTPUT);
    pinMode(2,OUTPUT);
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(7,OUTPUT);
    pinMode(8,OUTPUT);
    pinMode(9,OUTPUT);
    pinMode(10,OUTPUT);
    pinMode(11,OUTPUT);
    pinMode(12,OUTPUT);
    pinMode(13,OUTPUT);

    digitalWrite(5,LOW);
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);


}


int zyoutai = 1;

void loop() {
  // put your main code here, to run repeatedly:

    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);

    int pin0;
    

    pin0 = digitalRead(0);
    
    Serial.println(pin0);

    if(pin0 == LOW){

        Serial.println("ok");
        Serial.print("zyoutai: ");
        Serial.println(zyoutai);


        switch (zyoutai){
        case 1:

            Serial.println("2ok");

            digitalWrite(4,LOW);
            digitalWrite(5,HIGH);
            
            zyoutai = 2;
            break;

        case 2:
            digitalWrite(5,LOW);
            digitalWrite(2,HIGH);
            
            zyoutai = 3;
            break;

        case 3:
            digitalWrite(2,LOW);
            digitalWrite(3,HIGH);
            
            zyoutai = 4;
            break;

        case 4:
            digitalWrite(3,LOW);
            digitalWrite(4,HIGH);
            
            zyoutai = 1;
            break;       
        
        default:
            break;
        }
    }

    delay(200);

}
