int valve = 4;
const int high_detector = A0;
const int low_detector = A1;
void setup() {
  // put your setup code here, to run once:
pinMode(valve, OUTPUT);
pinMode (high_detector, INPUT);
pinMode (low_detector, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int waterVal1;
int waterVal2;
waterVal1 = analogRead(high_detector);
waterVal2 = analogRead(low_detector);
//Serial.println(waterVal);
  if ( waterVal1 > 50 && waterVal2 > 50) {
    digitalWrite(valve, LOW);
    Serial.println("High Level Detector > 50");
    Serial.println("Low Level Detector > 50");
      }
  delay(500);
  if ( waterVal1 < 51 && waterVal2 > 50) {
    digitalWrite(valve, LOW);
    Serial.println("High Level Detector < 50");
    Serial.println("Low Level Detector > 50");
      }
  delay(500);
  if ( waterVal1 > 50 && waterVal2 < 51) {
    digitalWrite(valve, LOW);
    Serial.println("High Level Detector > 50");
    Serial.println("Low Level Detector < 50");
      }
  delay(500);
  if ( waterVal1 < 51 && waterVal2 < 51) {
    digitalWrite(valve, HIGH);
    Serial.println("High Level Detector < 51");
    Serial.println("Low Level Detector < 51");
      }
  delay(500);
}
