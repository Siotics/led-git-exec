//LED TRAFFIC LIGHT
const short unsigned merah = 4, kuning = 3, hijau = 2;

void setup()
{
  pinMode(merah, OUTPUT);  
  pinMode(kuning, OUTPUT);
  pinMode(hijau, OUTPUT);
}

void loop()
{
  digitalWrite(merah, 1);
  digitalWrite(kuning, 0);
  delay(2500);
  digitalWrite(kuning, 1);
  digitalWrite(merah, 0);
  delay(2500);
  digitalWrite(hijau, 1);
  digitalWrite(kuning, 0);
  delay(2500);
  digitalWrite(kuning, 1);
  digitalWrite(hijau, 0);
  delay(2500);
}