int led = 13;
int y,n;

void setup (){
    Serial.begin(9600);
    pinMode(led, OUTPUT);
    Serial.println("Nyalakan LED? (y/n) : ");
}

void loop (){
    if (Serial.available() > 0){
        String text = Serial.readString();
        
        if (text == "y"){
            digitalWrite(led, HIGH);
        }

        else if (text == "n"){
            digitalWrite(led, LOW);
        }

        else {
            Serial.println("Jawaban yang dimasukkan harus y atau n !!!");
        }


    }
}