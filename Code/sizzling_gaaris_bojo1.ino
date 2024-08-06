
int pinTemp = A1;
int pinCooler = 11;
int pinAlert = 12;

int temp = 0;


void setup()
{
  pinMode(pinTemp, INPUT);
  pinMode(pinCooler, OUTPUT);
  pinMode(pinAlert, OUTPUT);
}

void loop()
{
  temp = (-40 + 0.488155 * (analogRead(pinTemp) - 20));
  if (temp >= 30) {
    digitalWrite(pinCooler, HIGH);
    if (temp > 50) {
      digitalWrite(pinAlert, HIGH);
    } else {
      digitalWrite(pinAlert, LOW);
    }
  } else {
    digitalWrite(pinCooler, LOW);
    digitalWrite(pinAlert, LOW);
  }
  delay(10);
}