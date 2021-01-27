void setup()
{
  pinMode(8, OUTPUT);
}

void loop()
{
  tone(8, 523, 1000);//腳位,頻率,持續時間
  delay(700);
  tone(8, 698, 1000);
  delay(700);
  tone(8, 523, 1000);
  delay(700);
  tone(8, 698, 1000);
  delay(700);
  tone(8, 523, 1000);
  delay(700);
  tone(8, 698, 1000);
  delay(700);
  noTone(8);//腳位8停止撥放
  delay(2000);
}
