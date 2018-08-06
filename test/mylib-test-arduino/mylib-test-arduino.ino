#include "mylib-test.h"

void setup() {
    Serial.begin(9600);
    while (!Serial);
  
    Serial.println("#################### Start testing...");
    
    // Test suite for a_plus_b call
    mylib_test_suite_a_plus_b();

    // Test suite for a_minus_b call
    mylib_test_suite_a_minus_b();
    
    // Test suite for led_on_even call
    mylib_test_suite_led_on_even();

    // All tests in one bundle
    //mylib_test_suite();
    
    Serial.println("#################### Finished testing");
}

void loop() {
    delay(2000);
}

