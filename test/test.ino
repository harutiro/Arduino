void setup() {
  Serial.begin(9600);
  delay(2000);
}

void loop() {

  putChar(0x0B);  // 一文字目大文字　できない
  putChar(0x2A);  //よってBackSpace
  Sheft(0x0B);    //H
  putChar(0x08);  //e
  putChar(0x0F);  //l
  putChar(0x0F);  //l
  putChar(0x12);  //o
  Sheft(0x1A);    //W
  putChar(0x12);  //o
  putChar(0x15);  //r
  putChar(0x0F);  //l
  putChar(0x07);  //d

  putChar(0x28);  //改行
  delay(10000);


}
void putChar(byte data) {
  for (byte j = 0; j <= 7; j++) {
    if (j == 2) {
      Serial.write(data);
    } else {
      Serial.write(0x00);
    }
  }

  for (byte j = 0; j <= 7; j++) {
    Serial.write(0x00);
  }
}
void Sheft(byte data) {
  for (byte j = 0; j <= 7; j++) {
    if (j == 6) {
      Serial.write(data);
    } else if (j == 2) {
      Serial.write(0xE5);
    } else {
      Serial.write(0x00);
    }
  }
  for (byte j = 0; j <= 7; j++) {
    Serial.write(0x00);
  }
}
void Ender() {
  for (byte j = 0; j <= 7; j++) {
    if (j == 2) {
      Serial.write(0x00);
    } else {
      Serial.write(0x00);
    }
  }
}
