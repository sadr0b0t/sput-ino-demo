
#include "mylib.h"

void setup() {
    Serial.begin(9600);
    Serial.println("Just show that we call functions from tested lib, nothing useful here");
}

void loop() {
    Serial.print("14+23=");
    Serial.println(a_plus_b(14, 23));
    Serial.print("14-23=");
    Serial.println(a_minus_b(14, 23));
    delay(2000);
}

