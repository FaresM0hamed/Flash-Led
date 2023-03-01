int led=13;
int button=2;
int val;
void setup() {
  // put your setup code here, to run once:
  pinMode (led,OUTPUT);
  pinMode (button,INPUT);
}

void loop(){
  // put your main code here, to run repeatedly:
  val = digitalRead(button);
  if(val==HIGH){
  digitalWrite(led,HIGH);
  delay(100);
  digitalWrite(led,LOW);
  delay(500);
  }
  else
  digitalWrite(led,LOW);
}
