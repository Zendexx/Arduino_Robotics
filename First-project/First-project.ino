int num=40;

void setup() {
  // put your setup code here, to run once:
  // serial.begin(115200);
  // setting up pinmodes(output/input)
pinMode(9,OUTPUT);
digitalWrite(9,HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(9,HIGH);
delay(1000);
digitalWrite(9,LOW);
delay(1000);
}
