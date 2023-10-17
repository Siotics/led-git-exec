void setup() {
    Serial.begin(9600);
}

void loop(){
    chocolate(1);
}

void chocolate(int x){
    Serial.print("Tampilkan = ");
    Serial.println(x);
    delay(500);
    x = x + 1;
}