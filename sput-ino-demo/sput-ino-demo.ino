
#include "mylib.h"

void setup() {
    Serial.begin(9600);
    Serial.println("Just show that we call functions from tested lib, nothing useful here");
    
    pinMode(13, OUTPUT);
    
    Serial.print("14+23=");
    Serial.println(a_plus_b(14, 23));
    Serial.print("14-23=");
    Serial.println(a_minus_b(14, 23));
    Serial.print("34000+34000=");
    Serial.println(a_plus_b(34000, 34000));
}

void loop() {
    static int i = 0;
    led_on_even(13, i++);
    delay(2000);
}

