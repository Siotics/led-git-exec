void setup() {
    Serial.begin(9600);
}

void loop(){
    chocolate();
}

void chocolate(int x){
    x = 1;
    Serial.print("Tampilkan = ");
    Serial.println(x);
    delay(500);
    x = x + 1;
}