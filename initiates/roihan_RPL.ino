int button = 8;
int nilaibutton = 0;

void setup()
{
  pinMode(button, INPUT);
  Serial.begin(9600);
}

void loop()
{
  nilaibutton = digitalRead(button);
  if (nilaibutton = 1) {
    while (true) {
      Serial.println("diluar nalar");
    }
  }
}