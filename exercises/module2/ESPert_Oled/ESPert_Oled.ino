#include <ESPert.h>

ESPert espert;

void setup() {
  espert.init();

  espert.oled.init(); //display the Espert logo
  delay(2000);

  espert.oled.clear();
  espert.oled.setTextSize(1); //currently not working due to some conflict in the OLED libraries
  espert.oled.setTextColor(ESPERT_WHITE); 
  espert.oled.setCursor(0, 0); // position cursor to top left corner

//espert.oled.print ("1234"); // this display the text on the OLED without going to the next line
  espert.oled.println("12345678901234567890"); //display text on OLED screen and move to the next line
  espert.oled.println("2                  2");
  espert.oled.println("3                  3");
  espert.oled.println("4                  4");
  espert.oled.println("5                  5");
  espert.oled.println("6                  6");
  espert.oled.println("7                  7");
  espert.oled.println("8                  8");
  espert.oled.setCursor(6, 16);
  espert.oled.println("234567890123456789 1");
  espert.oled.setCursor(6, 32);
  espert.oled.println("234567890123456789 1");

  espert.oled.update();
}

void loop() {
}
