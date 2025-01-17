#include <Wire.h>
#include <Arduino.h>
 #include <LiquidCrystal_I2C.h>
 LiquidCrystal_I2C lcd(0x27, 16, 2);
int ledPin1 = 23;
int ledPin2 = 19;
int ledPin3 = 18;
int ledPin4 = 5;
int ledPin5 = 17;
int ledPin6 = 16;
int ledPin7 = 4;
int ledPin8 = 0;
int sw1 = 15;
int sw2 = 2;
int sw3 = 34;
int buttonState = 0;
int menu = 0;
int menudown = 0;
const int menuItems = 6; // จำนวนเมนูทั้งหมด
String menuOptions[] = {"Option 1", "Option 2", "Option 3","Option 4","Option 5","Option 6"};
 void setup(){
    pinMode(sw2, INPUT_PULLUP);
    pinMode(sw3, INPUT_PULLUP);
    pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
  pinMode(ledPin7, OUTPUT);
  pinMode(ledPin8, OUTPUT);
    lcd.init();      
    lcd.backlight();
    lcd.home();
    lcd.print("Menu:");
    lcd.setCursor(0, 1);
    lcd.print(menuOptions[menu]);
    
}   

void showMenu() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Menu:");
  lcd.setCursor(0, 1);
  lcd.print(menuOptions[menu]);
}
void Actions(){

  
 if (menu == 1){
    digitalWrite(ledPin1,HIGH);
    digitalWrite(ledPin2,HIGH);
    digitalWrite(ledPin3,HIGH);
    digitalWrite(ledPin4,HIGH);
    digitalWrite(ledPin5,HIGH);
    digitalWrite(ledPin6,HIGH);
    digitalWrite(ledPin7,HIGH);
    digitalWrite(ledPin8,HIGH);
    delay(500);
  }
  else if ((menu == 2) && (menu > 1)){
  
    digitalWrite(ledPin2,HIGH);
    digitalWrite(ledPin4,HIGH);
    digitalWrite(ledPin6,HIGH);
    digitalWrite(ledPin8,HIGH);
    digitalWrite(ledPin1,LOW);
    digitalWrite(ledPin3,LOW);
    digitalWrite(ledPin5,LOW);
    digitalWrite(ledPin7,LOW);
    delay(500);
    digitalWrite(ledPin1,HIGH);
    digitalWrite(ledPin3,HIGH);
    digitalWrite(ledPin5,HIGH);
    digitalWrite(ledPin7,HIGH);
    digitalWrite(ledPin2,LOW);
    digitalWrite(ledPin4,LOW);
    digitalWrite(ledPin6,LOW);
    digitalWrite(ledPin8,LOW);
    delay(500);
  }
  else if (menu == 3){
    digitalWrite(ledPin1,HIGH);
    
    digitalWrite(ledPin2,LOW);
    digitalWrite(ledPin4,LOW);
    digitalWrite(ledPin6,LOW);
    digitalWrite(ledPin8,LOW);
    digitalWrite(ledPin3,LOW);
    digitalWrite(ledPin5,LOW);
    digitalWrite(ledPin7,LOW);
    delay(500);
    
    digitalWrite(ledPin2,HIGH);
    digitalWrite(ledPin1,LOW);

    digitalWrite(ledPin3,LOW);
    digitalWrite(ledPin4,LOW);
    digitalWrite(ledPin5,LOW);
    digitalWrite(ledPin6,LOW);
    digitalWrite(ledPin7,LOW);
    digitalWrite(ledPin8,LOW);
    delay(500);

    digitalWrite(ledPin3,HIGH);

    digitalWrite(ledPin1,LOW);
    digitalWrite(ledPin2,LOW);
    digitalWrite(ledPin4,LOW);
    digitalWrite(ledPin5,LOW);
    digitalWrite(ledPin6,LOW);
    digitalWrite(ledPin7,LOW);
    digitalWrite(ledPin8,LOW);
    delay(500);

    digitalWrite(ledPin4,HIGH);

    digitalWrite(ledPin1,LOW);
    digitalWrite(ledPin2,LOW);
    digitalWrite(ledPin3,LOW);
    digitalWrite(ledPin5,LOW);
    digitalWrite(ledPin6,LOW);
    digitalWrite(ledPin7,LOW);
    digitalWrite(ledPin8,LOW);
    
    delay(500);

    digitalWrite(ledPin5,HIGH);

    digitalWrite(ledPin1,LOW);
    digitalWrite(ledPin2,LOW);
    digitalWrite(ledPin3,LOW);
    digitalWrite(ledPin4,LOW);
    digitalWrite(ledPin6,LOW);
    digitalWrite(ledPin7,LOW);
    digitalWrite(ledPin8,LOW);
    delay(500);

    digitalWrite(ledPin6,HIGH);

    digitalWrite(ledPin1,LOW);
    digitalWrite(ledPin2,LOW);
    digitalWrite(ledPin3,LOW);
    digitalWrite(ledPin4,LOW);
    digitalWrite(ledPin5,LOW);
    digitalWrite(ledPin7,LOW);
    digitalWrite(ledPin8,LOW);
    delay(500);
    digitalWrite(ledPin7,HIGH);
    
    digitalWrite(ledPin1,LOW);
    digitalWrite(ledPin2,LOW);
    digitalWrite(ledPin3,LOW);
    digitalWrite(ledPin4,LOW);
    digitalWrite(ledPin6,LOW);
    digitalWrite(ledPin5,LOW);
    digitalWrite(ledPin8,LOW);
    delay(500);

    digitalWrite(ledPin8,HIGH);
   
    digitalWrite(ledPin1,LOW);
    digitalWrite(ledPin2,LOW);
    digitalWrite(ledPin3,LOW);
    digitalWrite(ledPin4,LOW);
    digitalWrite(ledPin6,LOW);
    digitalWrite(ledPin5,LOW);
    digitalWrite(ledPin7,LOW);
    
  }
   else if (menu == 4){
   digitalWrite(ledPin1,HIGH);
   digitalWrite(ledPin2,HIGH);
    digitalWrite(ledPin3,LOW);
    digitalWrite(ledPin4,LOW);
    digitalWrite(ledPin5,LOW);
    digitalWrite(ledPin6,LOW);
    digitalWrite(ledPin7,LOW);
    digitalWrite(ledPin8,LOW);
    delay(500);
    digitalWrite(ledPin3,HIGH);
    digitalWrite(ledPin4,HIGH);
    digitalWrite(ledPin1,LOW);
    digitalWrite(ledPin2,LOW);
    digitalWrite(ledPin5,LOW);
    digitalWrite(ledPin6,LOW);
    digitalWrite(ledPin7,LOW);
    digitalWrite(ledPin8,LOW);
    delay(500);
    digitalWrite(ledPin5,HIGH);
    digitalWrite(ledPin6,HIGH);
    digitalWrite(ledPin1,LOW);
    digitalWrite(ledPin2,LOW);
    digitalWrite(ledPin3,LOW);
    digitalWrite(ledPin4,LOW);
    digitalWrite(ledPin7,LOW);
    digitalWrite(ledPin8,LOW);
    delay(500);
    digitalWrite(ledPin7,HIGH);
    digitalWrite(ledPin8,HIGH);
     digitalWrite(ledPin1,LOW);
    digitalWrite(ledPin2,LOW);
    digitalWrite(ledPin3,LOW);
    digitalWrite(ledPin4,LOW);
    digitalWrite(ledPin5,LOW);
    digitalWrite(ledPin6,LOW);
  
  }
  else if (menu == 5){
    digitalWrite(ledPin1,HIGH);
    delay(500);
    digitalWrite(ledPin2,HIGH);
    delay(500);
    digitalWrite(ledPin3,HIGH);
    delay(500);
    digitalWrite(ledPin4,HIGH);
    delay(500);
    digitalWrite(ledPin5,HIGH);
    delay(500);
    digitalWrite(ledPin6,HIGH);
    delay(500);
    digitalWrite(ledPin7,HIGH);
    delay(500);
    digitalWrite(ledPin8,HIGH);
    delay(500);
    digitalWrite(ledPin8,LOW);
    delay(500);
    digitalWrite(ledPin7,LOW);
    delay(500);
    digitalWrite(ledPin6,LOW);
    delay(500);
    digitalWrite(ledPin5,LOW);
    delay(500);
    digitalWrite(ledPin4,LOW);
    delay(500);
    digitalWrite(ledPin3,LOW);
    delay(500);
    digitalWrite(ledPin2,LOW);
    delay(500);
    digitalWrite(ledPin1,LOW);
    delay(500);
}
else if (menu == 6){
    digitalWrite(ledPin1,HIGH);
    digitalWrite(ledPin2,HIGH);
    digitalWrite(ledPin3,HIGH);
    digitalWrite(ledPin4,HIGH);
    digitalWrite(ledPin5,HIGH);
    digitalWrite(ledPin6,HIGH);
    digitalWrite(ledPin7,HIGH);
    digitalWrite(ledPin8,HIGH);
    delay(500);
    digitalWrite(ledPin1,LOW);
    digitalWrite(ledPin2,LOW);
    digitalWrite(ledPin3,LOW);
    digitalWrite(ledPin4,LOW);
    digitalWrite(ledPin5,LOW);
    digitalWrite(ledPin6,LOW);
    digitalWrite(ledPin7,LOW);
    digitalWrite(ledPin8,LOW);
    delay(500);
  }
 
}
void loop()
{

    if(digitalRead(sw1) == LOW){
        menu--;
        if (menu < 0) menu = menuItems - 1;
    showMenu();
    delay(200); // ป้องกันการกดซ้ำ
  }

if (digitalRead(sw2) == LOW) {
    menu++;
    if (menu >= menuItems) menu = 0;
    showMenu();
    delay(200);
  }

  if (digitalRead(sw3) == HIGH) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Selected:");
    lcd.setCursor(0, 1);
    lcd.print(menuOptions[menu]);
    delay(1000);
    showMenu();
  }
    Actions();
}
/*#include <Wire.h>
#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

// Initialize LCD
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Define LED pins
int ledPins[] = {23, 19, 18, 5, 17, 16, 4, 0};

// Define switch pins
int sw1 = 15; // Previous menu
int sw2 = 2;  // Next menu


// Variables for menu
int menu = 0;
const int menuItems = 6;
String menuOptions[] = {"Menu 1", "Menu 2", "Menu 3", "Menu 4", "Menu 5", "Menu 6"};

void setup() {
    lcd.init();      
    lcd.backlight();
    lcd.home();
    delay(1000);

    lcd.clear();
    lcd.print("Menu:");
    lcd.setCursor(0, 1);
    lcd.print(menuOptions[menu]);

    // Set pin modes
    for (int i = 0; i < 8; i++) {
        pinMode(ledPins[i], OUTPUT);
    }

    pinMode(sw1, INPUT_PULLUP);
    pinMode(sw2, INPUT_PULLUP);
    
}

void showMenu() {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Menu:");
    lcd.setCursor(0, 1);
    lcd.print(menuOptions[menu]);
}

void clearLEDs() {
    for (int i = 0; i < 8; i++) {
        digitalWrite(ledPins[i], LOW);
    }
}

void menuActions() {
    switch (menu) {
        case 0:
            for (int i = 0; i < 8; i++) {
                digitalWrite(ledPins[i], HIGH);
            }
            break;

        case 1:
            for (int i = 0; i < 8; i++) {
                digitalWrite(ledPins[i], (i % 2 == 0) ? HIGH : LOW);
            }
            delay(500);
            for (int i = 0; i < 8; i++) {
                digitalWrite(ledPins[i], (i % 2 == 0) ? LOW : HIGH);
            }
            delay(500);
            break;

        case 2:
            for (int i = 0; i < 8; i++) {
                clearLEDs();
                digitalWrite(ledPins[i], HIGH);
                delay(200);
            }
            break;

        case 3:
            for (int i = 0; i < 8; i += 2) {
                clearLEDs();
                digitalWrite(ledPins[i], HIGH);
                digitalWrite(ledPins[i + 1], HIGH);
                delay(500);
            }
            break;

        case 4:
        
            for (int i = 0; i < 8; i++) {
                digitalWrite(ledPins[i], HIGH);
                delay(200);
            }
            for (int i = 7; i >= 0; i--) {
                digitalWrite(ledPins[i], LOW);
                delay(200);
            }
            break;

        case 5:
            for (int i = 0; i < 8; i++) {
                digitalWrite(ledPins[i], HIGH);
            }
            delay(500);
            clearLEDs();
            delay(500);
            break;

        default:
            clearLEDs();
            break;
    }
}

void loop() {
    if (digitalRead(sw1) == LOW) {
        menu = (menu - 1 + menuItems) % menuItems;
        showMenu();
        delay(200);
    }

    if (digitalRead(sw2) == LOW) {
        menu = (menu + 1) % menuItems;
        showMenu();
        delay(200);
    }


    menuActions();
}*/

    
