// 这是一份伪代码，仅用于解剖代码结构

// 自己写的库（放在本地目录的lib下）
#include "lib/customHeader"

// 内置或加载的库（放在Documents/Arduino下）
#include <libraryHeader>

// 全局常量或变量的声明
const int ExtIntPin = 5;        // 端口类常量用大小写（外部中断）
const int DELAY_PERIOD = 100;   // 普通常量用大写和下划线隔开
LedDevice* led_device = null;   // 全局变量用小写和下划线隔开

void setup() {
    led_device = LedDevice::init();
    if(!led_device) {
        while(1);
    }

    pinMode(ExtIntPin, INPUT);
    led_device->regInterrupt(ExtIntPin, &reverseLight);
}

void loop() {
    delay(DELAY_PERIOD);
}

// 函数用小写开头、大写字母隔开
void reverseLight() {
  led_device->flipLight();
}
