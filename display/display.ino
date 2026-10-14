#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

const char* const mensagens[][2] = {
  {"Ola, alunos!", "Aula de Robotica"},
  {"Bem-vindos!", "Vamos aprender!"},
  {"Projeto Arduino", "LCD funcionando!"}
};

void setup() {
  lcd.init();
  lcd.backlight();
}

void loop() {
  for (unsigned int i = 0; i < sizeof(mensagens) / sizeof(mensagens[0]); i++) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(mensagens[i][0]);
    lcd.setCursor(0, 1);
    lcd.print(mensagens[i][1]);
    delay(3000);
  }
}
