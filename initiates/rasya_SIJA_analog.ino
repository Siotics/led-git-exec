int pin = 5; //pin PWM (~) bisa dari 3, 5, 6, 9, 10, 11

void setup() {
    pinMode(pin, OUTPUT);
}

void loop(){
    for (int brightness = 1; brightness < 255; brightness += 2){
        analogWrite(pin, brightness);
    }
    delay(1000);
    for (int brightness = 255; brightness > 1; brightness -= 2){
        analogWrite(pin, brightness);
    }
    delay(1000);
}