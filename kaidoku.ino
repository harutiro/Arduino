uint8_t keyData[8] = { 0, 0, 0, 0, 0, 0, 0 };

void setup() {
  Serial.begin(9600);
  delay(2000);

}

void loop() {
    keyData[2] = 0x04;  // 'a'キー
    Serial.write(keyData, 8);  // キーの入力を送信(make)
    keyData[2] = 0x00;
    Serial.write(keyData, 8);  // キーの解放を送信(break)
    delay(1000);

}
