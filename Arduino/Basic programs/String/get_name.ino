String name;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Enter your name: ");
  while(Serial.available()==0)
  {
    
  }

  name=Serial.readString();
  Serial.print("Welcome! ");
  Serial.println(name);
}
