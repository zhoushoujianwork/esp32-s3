#include <Arduino.h>



// 定义LED引脚
const int LED_PIN = 21;

void setup() {
  Serial.begin(9600); // 初始化串口通信
  Serial.println("Hello World!"); // 向串口打印Hello World!
  pinMode(LED_PIN, OUTPUT); // 将LED引脚配置为输出模式
}

void loop() {
  // 飞机灯双闪
  digitalWrite(LED_PIN, LOW); // 将LED引脚输出低电平
  delay(100);
  digitalWrite(LED_PIN, HIGH); // 将LED引脚输出高电平
  delay(100);
  digitalWrite(LED_PIN, LOW); // 将LED引脚输出低电平
  delay(100);
  digitalWrite(LED_PIN, HIGH); // 将LED引脚输出高电平
  delay(1000);
}