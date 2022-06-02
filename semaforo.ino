int green=2;
int yellow=3;
int red=4;
int green1=7;
int yellow1=8;
int red1=9;
int button=1;

void setup() {
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(green1, OUTPUT);
  pinMode(yellow1, OUTPUT);
  pinMode(red1, OUTPUT);  
}

void loop() {
  digitalWrite(green, HIGH);
  digitalWrite(red1, HIGH);
  delay(2000);
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  delay(2000);
  digitalWrite(yellow, LOW);
  digitalWrite(red1, LOW);
  
  digitalWrite(green1, HIGH);
  digitalWrite(red, HIGH);
  delay(2000);
  digitalWrite(green1, LOW);
  digitalWrite(yellow1, HIGH);
  delay(2000);
  digitalWrite(yellow1, LOW);
  digitalWrite(red, LOW);
}
