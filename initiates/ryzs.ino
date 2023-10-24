//LED TRAFFIC LIGHT
void setup(){
  pinMode(2, OUTPUT);  
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}
void revisiLampu(int LAMPU, int lamaWaktu){
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(LAMPU, HIGH);
    delay(lamaWaktu);
    digitalWrite(LAMPU, LOW);
}
void loop(){
    revisiLampu(2, 3000);
    revisiLampu(3, 1000);
    revisiLampu(4, 3000);
    revisiLampu(2, 1000);
}
//REVISI TERUS NGAB