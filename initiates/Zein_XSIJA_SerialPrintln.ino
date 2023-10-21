void setup() {
    Serial.begin(9600);
}

void loop() {
    int count = 0;
    
    while (count < 5) {
        Serial.println("perulangan ke-");
        Serial.println(count);
        count++;
        delay(1000)
    }
}