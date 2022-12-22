//2.ให้เขียนโปรแกรมไฟวิ่ง 4 ดวง ด้วยคำสั่ง for

int LED[] = {12, 15, 2, 17};
int x;
void setup() {
  Serial.begin(9600);//9600 อัตราเร็วของบอร์ด(บอร์ดเดรท)กับ USB
  pinMode(LED[0], OUTPUT);
  pinMode(LED[1], OUTPUT);
  pinMode(LED[2], OUTPUT);
  pinMode(LED[3], OUTPUT);

}
void loop() {
for (x = 0; x <= 3; x++){
  digitalWrite(LED[x], LOW); //ให้ LED[x] ติด x คือ index ของ array
  delay(500);
  digitalWrite(LED[x], HIGH); //ให้ LED[x] ดับ
  delay(500);
  }
for (x = 3; x >= 0; x--){
  digitalWrite(LED[x], LOW); //ให้ LED[x] ติด x คือ index ของ array
  delay(500);
  digitalWrite(LED[x], HIGH); //ให้ LED[x] ดับ
  delay(500);
  }
}
